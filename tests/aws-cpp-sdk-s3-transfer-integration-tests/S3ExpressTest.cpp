/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 *
 * S3 Express (directory bucket) coverage — mandated by the S3 Transfer Manager SEP:
 * "Testing plans for S3 Transfer Manager features MUST include S3 Express to ensure consistent
 * behavior between general purpose and directory buckets."
 *
 * Adapted from tests/aws-cpp-sdk-s3-crt-integration-tests/S3ExpressTest.cpp — S3Crt drives PutObject
 * / GetObject / MPU against a directory bucket. Here we drive Upload and Download through TM 2.0
 * to prove parity. Covers SEP upload-single-object case #10 and download-single-object case #12.
 *
 * Uses its own suite fixture (not S3TransferTestFixture) because directory buckets have a distinct
 * naming/creation protocol: `<name>--<az>--x-s3` suffix, LocationInfo + BucketInfo config, and
 * an availability-zone location.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/TestingEnvironment.h>

#include <aws/core/Region.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <aws/s3/S3Client.h>
#include <aws/s3/S3ClientConfiguration.h>
#include <aws/s3/model/BucketInfo.h>
#include <aws/s3/model/BucketType.h>
#include <aws/s3/model/CreateBucketConfiguration.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DataRedundancy.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/s3/model/LocationInfo.h>
#include <aws/s3/model/LocationType.h>
#include <aws/s3/model/PutObjectRequest.h>

#include <aws/s3-transfer/S3TransferManager.h>

#include <aws/crt/auth/Credentials.h>
#include <aws/crt/s3/S3.h>

#include <algorithm>
#include <atomic>

using namespace Aws::S3::Transfer;

namespace S3TransferIntegrationTests {

namespace {
constexpr const char* ALLOCATION_TAG = "S3ExpressTM2";
constexpr const char* S3_EXPRESS_SUFFIX = "--use1-az6--x-s3";
constexpr const char* S3_EXPRESS_AZ = "use1-az6";
constexpr const char* S3_EXPRESS_REGION = "us-east-1";  // S3 Express requires us-east-1 (or the AZ's region)
}  // namespace

class S3ExpressTransferTests : public Aws::Testing::AwsCppSdkGTestSuite {
 protected:
  static std::shared_ptr<Aws::S3::S3Client> s_s3Client;
  static Aws::String s_directoryBucket;

  static void SetUpTestSuite() {
    Aws::Testing::AwsCppSdkGTestSuite::SetUpTestSuite();

    Aws::S3::S3ClientConfiguration config;
    config.region = S3_EXPRESS_REGION;
    s_s3Client = Aws::MakeShared<Aws::S3::S3Client>(ALLOCATION_TAG, config);

    s_directoryBucket = ComputeDirectoryBucketName();
    Aws::S3::Model::CreateBucketRequest createBucket;
    createBucket.SetBucket(s_directoryBucket);
    Aws::S3::Model::CreateBucketConfiguration bucketConfig;
    bucketConfig.SetLocation(Aws::S3::Model::LocationInfo()
                                 .WithType(Aws::S3::Model::LocationType::AvailabilityZone)
                                 .WithName(S3_EXPRESS_AZ));
    bucketConfig.SetBucket(Aws::S3::Model::BucketInfo()
                               .WithType(Aws::S3::Model::BucketType::Directory)
                               .WithDataRedundancy(Aws::S3::Model::DataRedundancy::SingleAvailabilityZone));
    createBucket.SetCreateBucketConfiguration(bucketConfig);
    auto outcome = s_s3Client->CreateBucket(createBucket);
    // BucketAlreadyOwnedByYou / OperationAborted are benign in a shared test account.
    if (!outcome.IsSuccess() && outcome.GetError().GetResponseCode() != Aws::Http::HttpResponseCode::CONFLICT) {
      AWS_ASSERT_SUCCESS(outcome);
    }
  }

  static void TearDownTestSuite() {
    if (s_s3Client) {
      EmptyBucket(s_directoryBucket);
      Aws::S3::Model::DeleteBucketRequest deleteBucket;
      deleteBucket.SetBucket(s_directoryBucket);
      s_s3Client->DeleteBucket(deleteBucket);
      s_s3Client = nullptr;
    }
    Aws::Testing::AwsCppSdkGTestSuite::TearDownTestSuite();
  }

  static Aws::String ComputeDirectoryBucketName() {
    Aws::String uuid = Aws::Utils::StringUtils::ToLower(Aws::String(Aws::Utils::UUID::RandomUUID()).c_str());
    uuid.erase(std::remove(uuid.begin(), uuid.end(), '-'), uuid.end());
    return Aws::Testing::GetAwsResourcePrefix() + Aws::String("tm2exp") + uuid.substr(0, 12) + S3_EXPRESS_SUFFIX;
  }

  static void EmptyBucket(const Aws::String& bucketName) {
    Aws::S3::Model::ListObjectsV2Request listRequest;
    listRequest.SetBucket(bucketName);
    auto listOutcome = s_s3Client->ListObjectsV2(listRequest);
    if (!listOutcome.IsSuccess()) {
      return;
    }
    for (const auto& object : listOutcome.GetResult().GetContents()) {
      Aws::S3::Model::DeleteObjectRequest deleteRequest;
      deleteRequest.SetBucket(bucketName);
      deleteRequest.SetKey(object.GetKey());
      s_s3Client->DeleteObject(deleteRequest);
    }
  }

  S3TransferManagerConfiguration MakeConfig() {
    S3TransferManagerConfiguration config;
    config.region = S3_EXPRESS_REGION;
    return config;
  }

  static Aws::String UniqueKey() { return Aws::String(Aws::Utils::UUID::RandomUUID()).c_str(); }
};

std::shared_ptr<Aws::S3::S3Client> S3ExpressTransferTests::s_s3Client = nullptr;
Aws::String S3ExpressTransferTests::s_directoryBucket;

// SEP upload-single-object #10: single-part upload to an S3 Express directory bucket succeeds.
TEST_F(S3ExpressTransferTests, DirectoryBucketSinglePartUpload) {
  const uint64_t size = 5ULL * 1024 * 1024;  // 5 MiB, matches SEP case size
  const Aws::String key = UniqueKey();

  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  const Aws::String chunk(64 * 1024, 'a');
  for (uint64_t written = 0; written < size; written += chunk.size()) {
    body->write(chunk.data(), static_cast<std::streamsize>(std::min<uint64_t>(chunk.size(), size - written)));
  }

  UploadRequest request(s_directoryBucket, key, body);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_directoryBucket);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(static_cast<int64_t>(size), headOutcome.GetResult().GetContentLength());
}

// SEP download-single-object #12: single-part download from an S3 Express directory bucket succeeds.
TEST_F(S3ExpressTransferTests, DirectoryBucketSinglePartDownload) {
  const uint64_t size = 5ULL * 1024 * 1024;
  const Aws::String key = UniqueKey();

  // Seed the object via the plain S3 client.
  auto seedBody = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  const Aws::String chunk(64 * 1024, 'b');
  for (uint64_t written = 0; written < size; written += chunk.size()) {
    seedBody->write(chunk.data(), static_cast<std::streamsize>(std::min<uint64_t>(chunk.size(), size - written)));
  }
  Aws::S3::Model::PutObjectRequest put;
  put.SetBucket(s_directoryBucket);
  put.SetKey(key);
  put.SetBody(seedBody);
  auto putOutcome = s_s3Client->PutObject(put);
  AWS_ASSERT_SUCCESS(putOutcome);

  // Download via TM 2.0 with a DataReceiver to avoid needing on-disk temp files.
  class CountingReceiver : public DownloadDataReceiver {
   public:
    void OnDataReceived(S3DownloadBuffer buffer) override { m_bytes += buffer.GetData().len; }
    uint64_t Bytes() const { return m_bytes.load(); }
   private:
    std::atomic<uint64_t> m_bytes{0};
  };
  auto receiver = Aws::MakeShared<CountingReceiver>(ALLOCATION_TAG);

  DownloadRequest request(s_directoryBucket, key, receiver);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(size, receiver->Bytes());
}

// Multipart upload to a directory bucket exercises the CRT's CreateMultipartUpload /
// UploadPart / CompleteMultipartUpload path through the S3 Express signer.
TEST_F(S3ExpressTransferTests, DirectoryBucketMultipartUpload) {
  const uint64_t size = 24ULL * 1024 * 1024;  // above the 16 MiB threshold
  const Aws::String key = UniqueKey();

  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  const Aws::String chunk(64 * 1024, 'c');
  for (uint64_t written = 0; written < size; written += chunk.size()) {
    body->write(chunk.data(), static_cast<std::streamsize>(std::min<uint64_t>(chunk.size(), size - written)));
  }

  UploadRequest request(s_directoryBucket, key, body);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_directoryBucket);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(static_cast<int64_t>(size), headOutcome.GetResult().GetContentLength());
}

// Builds a CRT S3 client the way a customer would before passing it via
// S3TransferManagerConfiguration::crtClient; it carries its own credentials provider. Sizes are set
// only when non-zero, so a test can tell a client-chosen value from a config-chosen one.
static std::shared_ptr<Aws::Crt::S3::S3Client> MakeCustomerSuppliedCrtClient(const Aws::String& region,
                                                                            uint64_t partSize = 0,
                                                                            uint64_t multipartThreshold = 0) {
  Aws::Crt::Auth::CredentialsProviderChainDefaultConfig providerConfig;
  auto credentialsProvider =
      Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderChainDefault(providerConfig);
  if (!credentialsProvider) {
    return nullptr;
  }

  Aws::Crt::S3::S3ClientConfig clientConfig(credentialsProvider);
  clientConfig.SetRegion(Aws::Crt::String(region.c_str()));
  if (partSize > 0) {
    clientConfig.SetPartSize(partSize);
  }
  if (multipartThreshold > 0) {
    clientConfig.SetMultipartUploadThreshold(multipartThreshold);
  }

  auto client = Aws::MakeShared<Aws::Crt::S3::S3Client>(ALLOCATION_TAG, clientConfig);
  if (!client || !*client) {
    return nullptr;
  }
  return client;
}

// Number of parts S3 recorded for an object, or -1 if it could not be read.
static int GetRecordedPartCount(const std::shared_ptr<Aws::S3::S3Client>& client, const Aws::String& bucket,
                                const Aws::String& key) {
  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(bucket);
  head.SetKey(key);
  head.SetPartNumber(1);
  auto outcome = client->HeadObject(head);
  if (!outcome.IsSuccess()) {
    return -1;
  }
  return outcome.GetResult().GetPartsCount();
}

// RAII general purpose bucket, for cases that cannot use the suite's directory bucket. Cleans up on
// scope exit so a failed assertion does not leak it.
class ScopedGeneralPurposeBucket {
 public:
  explicit ScopedGeneralPurposeBucket(const std::shared_ptr<Aws::S3::S3Client>& client) : m_client(client) {
    Aws::String uuid = Aws::Utils::StringUtils::ToLower(Aws::String(Aws::Utils::UUID::RandomUUID()).c_str());
    uuid.erase(std::remove(uuid.begin(), uuid.end(), '-'), uuid.end());
    m_name = Aws::Testing::GetAwsResourcePrefix() + Aws::String("tm2supplied") + uuid.substr(0, 12);

    Aws::S3::Model::CreateBucketRequest createBucket;
    createBucket.SetBucket(m_name);
    m_created = m_client->CreateBucket(createBucket).IsSuccess();
  }

  ~ScopedGeneralPurposeBucket() {
    if (!m_created) {
      return;
    }
    Aws::S3::Model::ListObjectsV2Request listRequest;
    listRequest.SetBucket(m_name);
    auto listOutcome = m_client->ListObjectsV2(listRequest);
    if (listOutcome.IsSuccess()) {
      for (const auto& object : listOutcome.GetResult().GetContents()) {
        Aws::S3::Model::DeleteObjectRequest deleteObject;
        deleteObject.SetBucket(m_name);
        deleteObject.SetKey(object.GetKey());
        m_client->DeleteObject(deleteObject);
      }
    }
    Aws::S3::Model::DeleteBucketRequest deleteBucket;
    deleteBucket.SetBucket(m_name);
    m_client->DeleteBucket(deleteBucket);
  }

  ScopedGeneralPurposeBucket(const ScopedGeneralPurposeBucket&) = delete;
  ScopedGeneralPurposeBucket& operator=(const ScopedGeneralPurposeBucket&) = delete;

  bool Created() const { return m_created; }
  const Aws::String& Name() const { return m_name; }

 private:
  std::shared_ptr<Aws::S3::S3Client> m_client;
  Aws::String m_name;
  bool m_created = false;
};

// A stream body of `size` deterministic bytes.
static std::shared_ptr<Aws::StringStream> MakeBody(uint64_t size, char fill) {
  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  const Aws::String chunk(64 * 1024, fill);
  for (uint64_t written = 0; written < size; written += chunk.size()) {
    body->write(chunk.data(), static_cast<std::streamsize>(std::min<uint64_t>(chunk.size(), size - written)));
  }
  return body;
}

// A supplied client leaves the transfer manager's own credentials provider unset, so this covers the
// path where dispatch configures endpoint signing without one. General purpose bucket first, to
// isolate that from the S3 Express signing the directory-bucket cases depend on.
TEST_F(S3ExpressTransferTests, SuppliedCrtClientUploadsToGeneralPurposeBucket) {
  auto crtClient = MakeCustomerSuppliedCrtClient(S3_EXPRESS_REGION);
  ASSERT_NE(nullptr, crtClient) << "failed to construct a CRT S3 client for the test";

  // The suite's directory bucket is S3 Express only, so this case needs its own general purpose
  // bucket to write to.
  ScopedGeneralPurposeBucket bucket(s_s3Client);
  ASSERT_TRUE(bucket.Created()) << "could not create a general purpose bucket for the test";

  const Aws::String key = UniqueKey();
  const uint64_t size = 5ULL * 1024 * 1024;

  S3TransferManagerConfiguration config = MakeConfig();
  config.crtClient = crtClient;

  UploadRequest request(bucket.Name(), key, MakeBody(size, 'd'));
  S3TransferManager manager(config);
  AWS_ASSERT_SUCCESS(manager.Upload(request).CompletionFuture().get());

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(bucket.Name());
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(static_cast<int64_t>(size), headOutcome.GetResult().GetContentLength());
}

// A supplied client against a directory bucket: endpoint resolution reports the S3ExpressSigner auth
// scheme, and applying it happens in the same call that receives the null credentials provider.
TEST_F(S3ExpressTransferTests, SuppliedCrtClientUploadsToDirectoryBucket) {
  auto crtClient = MakeCustomerSuppliedCrtClient(S3_EXPRESS_REGION);
  ASSERT_NE(nullptr, crtClient) << "failed to construct a CRT S3 client for the test";

  const uint64_t size = 5ULL * 1024 * 1024;
  const Aws::String key = UniqueKey();

  S3TransferManagerConfiguration config = MakeConfig();
  config.crtClient = crtClient;

  UploadRequest request(s_directoryBucket, key, MakeBody(size, 'e'));
  S3TransferManager manager(config);
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_directoryBucket);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(static_cast<int64_t>(size), headOutcome.GetResult().GetContentLength());
}

// Download counterpart: the GET path resolves the same auth scheme through the same call.
TEST_F(S3ExpressTransferTests, SuppliedCrtClientDownloadsFromDirectoryBucket) {
  auto crtClient = MakeCustomerSuppliedCrtClient(S3_EXPRESS_REGION);
  ASSERT_NE(nullptr, crtClient) << "failed to construct a CRT S3 client for the test";

  const uint64_t size = 5ULL * 1024 * 1024;
  const Aws::String key = UniqueKey();

  // Seed through the plain S3 client so the download is the only thing under test.
  auto seedBody = MakeBody(size, 'f');
  Aws::S3::Model::PutObjectRequest put;
  put.SetBucket(s_directoryBucket);
  put.SetKey(key);
  put.SetBody(seedBody);
  AWS_ASSERT_SUCCESS(s_s3Client->PutObject(put));

  class CountingReceiver : public DownloadDataReceiver {
   public:
    void OnDataReceived(S3DownloadBuffer buffer) override { m_bytes += buffer.GetData().len; }
    uint64_t Bytes() const { return m_bytes.load(); }

   private:
    std::atomic<uint64_t> m_bytes{0};
  };
  auto receiver = Aws::MakeShared<CountingReceiver>(ALLOCATION_TAG);

  S3TransferManagerConfiguration config = MakeConfig();
  config.crtClient = crtClient;

  DownloadRequest request(s_directoryBucket, key, receiver);
  S3TransferManager manager(config);
  DownloadOutcome outcome = manager.Download(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(size, receiver->Bytes());
}

// ---- a supplied client must transfer the same way one built here would ----

// 20 MiB with a 5 MiB part size set two ways: on the config, and on the supplied client. Both must
// produce the same part count.
TEST_F(S3ExpressTransferTests, SuppliedCrtClientHonorsPartSizeFromEitherSide) {
  const uint64_t partSize = 5ULL * 1024 * 1024;
  const uint64_t size = 20ULL * 1024 * 1024;

  ScopedGeneralPurposeBucket bucket(s_s3Client);
  ASSERT_TRUE(bucket.Created()) << "could not create a general purpose bucket for the test";

  // Case A: part size only on the transfer manager config; the client keeps CRT defaults.
  const Aws::String keyFromConfig = UniqueKey();
  {
    auto crtClient = MakeCustomerSuppliedCrtClient(S3_EXPRESS_REGION);
    ASSERT_NE(nullptr, crtClient);

    S3TransferManagerConfiguration config = MakeConfig();
    config.crtClient = crtClient;
    config.partSize = partSize;
    config.multipartUploadThreshold = partSize;

    UploadRequest request(bucket.Name(), keyFromConfig, MakeBody(size, 'g'));
    S3TransferManager manager(config);
    AWS_ASSERT_SUCCESS(manager.Upload(request).CompletionFuture().get());
  }

  // Case B: the same part size, but set on the client the customer built.
  const Aws::String keyFromClient = UniqueKey();
  {
    auto crtClient = MakeCustomerSuppliedCrtClient(S3_EXPRESS_REGION, partSize, partSize);
    ASSERT_NE(nullptr, crtClient);

    S3TransferManagerConfiguration config = MakeConfig();
    config.crtClient = crtClient;

    UploadRequest request(bucket.Name(), keyFromClient, MakeBody(size, 'g'));
    S3TransferManager manager(config);
    AWS_ASSERT_SUCCESS(manager.Upload(request).CompletionFuture().get());
  }

  const int partsFromConfig = GetRecordedPartCount(s_s3Client, bucket.Name(), keyFromConfig);
  const int partsFromClient = GetRecordedPartCount(s_s3Client, bucket.Name(), keyFromClient);

  // 20 MiB in 5 MiB parts is 4, and it must not matter which side the 5 MiB was set on: a size on
  // the supplied client is adopted into the config, and a size only in the config is applied per
  // request, so a supplied client transfers the same way one built by the transfer manager would.
  EXPECT_EQ(4, partsFromClient);
  EXPECT_EQ(4, partsFromConfig);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(bucket.Name());
  head.SetKey(keyFromConfig);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(static_cast<int64_t>(size), headOutcome.GetResult().GetContentLength());
}

// A supplied client's region wins, since it is what signs, and the transfer manager adopts it so
// endpoint resolution agrees. Disagreement shows up as a malformed authorization header.
TEST_F(S3ExpressTransferTests, SuppliedCrtClientRegionWinsOverConfigRegion) {
  auto crtClient = MakeCustomerSuppliedCrtClient("us-west-2");
  ASSERT_NE(nullptr, crtClient) << "failed to construct a CRT S3 client for the test";

  ScopedGeneralPurposeBucket bucket(s_s3Client);
  ASSERT_TRUE(bucket.Created()) << "could not create a general purpose bucket for the test";

  S3TransferManagerConfiguration config = MakeConfig();  // region == us-east-1
  config.crtClient = crtClient;                          // client region == us-west-2

  const Aws::String key = UniqueKey();
  UploadRequest request(bucket.Name(), key, MakeBody(1024 * 1024, 'h'));
  S3TransferManager manager(config);
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();

  // The endpoint and the signature must agree on one region. They now do, so the only remaining
  // reason to fail is the bucket living elsewhere, which S3 reports as a redirect rather than as
  // AuthorizationHeaderMalformed.
  if (!outcome.IsSuccess()) {
    EXPECT_STRNE("AuthorizationHeaderMalformed", outcome.GetError().GetExceptionName().c_str())
        << "endpoint region and signing region disagree: " << outcome.GetError().GetMessage();
  }
}

// Download counterpart: the GET path splits by part size too.
TEST_F(S3ExpressTransferTests, SuppliedCrtClientDownloadHonorsConfiguredPartSize) {
  const uint64_t size = 20ULL * 1024 * 1024;
  const Aws::String key = UniqueKey();

  auto seedBody = MakeBody(size, 'i');
  Aws::S3::Model::PutObjectRequest put;
  put.SetBucket(s_directoryBucket);
  put.SetKey(key);
  put.SetBody(seedBody);
  AWS_ASSERT_SUCCESS(s_s3Client->PutObject(put));

  auto crtClient = MakeCustomerSuppliedCrtClient(S3_EXPRESS_REGION);
  ASSERT_NE(nullptr, crtClient);

  class ChunkCountingReceiver : public DownloadDataReceiver {
   public:
    void OnDataReceived(S3DownloadBuffer buffer) override {
      m_bytes += buffer.GetData().len;
      ++m_chunks;
    }
    uint64_t Bytes() const { return m_bytes.load(); }
    uint32_t Chunks() const { return m_chunks.load(); }

   private:
    std::atomic<uint64_t> m_bytes{0};
    std::atomic<uint32_t> m_chunks{0};
  };
  auto receiver = Aws::MakeShared<ChunkCountingReceiver>(ALLOCATION_TAG);

  S3TransferManagerConfiguration config = MakeConfig();
  config.crtClient = crtClient;
  config.partSize = 5ULL * 1024 * 1024;

  DownloadRequest request(s_directoryBucket, key, receiver);
  S3TransferManager manager(config);
  DownloadOutcome outcome = manager.Download(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(size, receiver->Bytes());
  // 20 MiB fetched in 5 MiB parts arrives as several deliveries rather than one, which is what
  // distinguishes the configured part size reaching the client from the client sizing on its own.
  EXPECT_GT(receiver->Chunks(), 1u);
}

// One client, two managers: nothing about a supplied client is per-manager.
TEST_F(S3ExpressTransferTests, SuppliedCrtClientSharedAcrossTwoManagers) {
  auto crtClient = MakeCustomerSuppliedCrtClient(S3_EXPRESS_REGION);
  ASSERT_NE(nullptr, crtClient) << "failed to construct a CRT S3 client for the test";

  S3TransferManagerConfiguration config = MakeConfig();
  config.crtClient = crtClient;

  const uint64_t size = 5ULL * 1024 * 1024;
  const Aws::String firstKey = UniqueKey();
  const Aws::String secondKey = UniqueKey();

  S3TransferManager firstManager(config);
  S3TransferManager secondManager(config);

  UploadRequest firstRequest(s_directoryBucket, firstKey, MakeBody(size, 'j'));
  UploadRequest secondRequest(s_directoryBucket, secondKey, MakeBody(size, 'k'));

  auto firstHandle = firstManager.Upload(firstRequest);
  auto secondHandle = secondManager.Upload(secondRequest);

  AWS_ASSERT_SUCCESS(firstHandle.CompletionFuture().get());
  AWS_ASSERT_SUCCESS(secondHandle.CompletionFuture().get());
}

// The manager holds a shared_ptr, so destroying it must not invalidate the client.
TEST_F(S3ExpressTransferTests, SuppliedCrtClientSurvivesManagerDestruction) {
  auto crtClient = MakeCustomerSuppliedCrtClient(S3_EXPRESS_REGION);
  ASSERT_NE(nullptr, crtClient) << "failed to construct a CRT S3 client for the test";

  S3TransferManagerConfiguration config = MakeConfig();
  config.crtClient = crtClient;

  const uint64_t size = 1024 * 1024;
  const Aws::String firstKey = UniqueKey();
  {
    S3TransferManager manager(config);
    UploadRequest request(s_directoryBucket, firstKey, MakeBody(size, 'l'));
    AWS_ASSERT_SUCCESS(manager.Upload(request).CompletionFuture().get());
  }  // manager destroyed; crtClient must still be usable

  ASSERT_TRUE(static_cast<bool>(*crtClient)) << "supplied client was invalidated by manager destruction";

  const Aws::String secondKey = UniqueKey();
  S3TransferManager secondManager(config);
  UploadRequest request(s_directoryBucket, secondKey, MakeBody(size, 'm'));
  AWS_ASSERT_SUCCESS(secondManager.Upload(request).CompletionFuture().get());
}

}  // namespace S3TransferIntegrationTests
