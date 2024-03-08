/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/HeadBucketRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/DeleteObjectsRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/CreateMultipartUploadRequest.h>
#include <aws/s3/model/UploadPartRequest.h>
#include <aws/s3/model/CompleteMultipartUploadRequest.h>
#include <aws/s3/model/SelectObjectContentRequest.h>
#include <aws/s3/model/ListDirectoryBucketsRequest.h>
#include <aws/s3/model/CreateSessionRequest.h>
#include <aws/s3/model/PutBucketPolicyRequest.h>
#include <aws/s3/model/GetBucketPolicyRequest.h>
#include <aws/s3/model/DeleteBucketPolicyRequest.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/s3/model/UploadPartCopyRequest.h>
#include <aws/s3/model/ListPartsRequest.h>
#include <aws/s3/model/AbortMultipartUploadRequest.h>
#include <aws/s3/model/ListMultipartUploadsRequest.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <random>

#ifdef _WIN32
#pragma warning(disable: 4127)
#ifdef GetObject
#undef GetObject
#endif
#endif

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace Aws::Utils;


namespace {
  const char* ALLOCATION_TAG = "S3ClientS3ExpressTest";
  const char* S3_EXPRESS_SUFFIX = "--use1-az6--x-s3";

  class S3ExpressTest : public ::testing::Test {
  public:
    CreateBucketOutcome CreateBucket(const Aws::String &bucketName = randomString() + S3_EXPRESS_SUFFIX) {
      bucketsToCleanup.push_back(bucketName);
      CreateBucketOutcome outcome = client->CreateBucket(CreateBucketRequest()
        .WithBucket(bucketName)
        .WithCreateBucketConfiguration(CreateBucketConfiguration()
          .WithLocation(LocationInfo()
            .WithType(LocationType::AvailabilityZone)
            .WithName("use1-az6"))
          .WithBucket(BucketInfo()
            .WithType(BucketType::Directory)
            .WithDataRedundancy(DataRedundancy::SingleAvailabilityZone))));

      if (!outcome.IsSuccess() && outcome.GetError().GetResponseCode() == Aws::Http::HttpResponseCode::CONFLICT &&
                                  (outcome.GetError().GetExceptionName() == "BucketAlreadyOwnedByYou" ||
                                   outcome.GetError().GetExceptionName() == "OperationAborted")) {
        return CreateBucketOutcome(CreateBucketResult());
      }

      return outcome;
    }

    DeleteBucketOutcome DeleteBucket(const Aws::String &bucketName) {
      return client->DeleteBucket(DeleteBucketRequest().WithBucket(bucketName));
    }

    HeadBucketOutcome HeadBucket(const Aws::String &bucketName) {
      return client->HeadBucket(HeadBucketRequest().WithBucket(bucketName));
    }

    ListDirectoryBucketsOutcome ListDirectoryBuckets() {
      return client->ListDirectoryBuckets(ListDirectoryBucketsRequest());
    }

    CreateSessionOutcome CreateSession(const Aws::String &bucketName) {
      return client->CreateSession(CreateSessionRequest().WithBucket(bucketName));
    }

    PutBucketPolicyOutcome PutBucketPolicy(const Aws::String &bucketName) {
      auto request = PutBucketPolicyRequest().WithBucket(bucketName);
      auto accountId = Aws::Environment::GetEnv("CATAPULT_TEST_ACCOUNT");
      auto policy =
          R"({"Version":"2012-10-17","Statement":[{"Sid":"Whatever","Effect":"Allow","Resource":"arn:aws:s3express:us-east-1:)"
          + accountId + R"(:bucket/)"
          + bucketName + R"(","Principal":{"AWS":[")"
          + accountId + R"("]},"Action":["*"]}]})";
      std::shared_ptr<Aws::IOStream> inputData = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG, policy,
        std::ios_base::in | std::ios_base::binary);
      request.SetBody(inputData);
      return client->PutBucketPolicy(request);
    }

    GetBucketPolicyOutcome GetBucketPolicy(const Aws::String &bucketName) {
      return client->GetBucketPolicy(GetBucketPolicyRequest().WithBucket(bucketName));
    }

    DeleteBucketPolicyOutcome DeleteBucketPolicy(const Aws::String &bucketName) {
      return client->DeleteBucketPolicy(DeleteBucketPolicyRequest().WithBucket(bucketName));
    }

    PutObjectOutcome PutObject(const Aws::String &bucketName, const Aws::String &keyName) {
      auto request = PutObjectRequest().WithBucket(bucketName).WithKey(keyName);
      std::shared_ptr<Aws::IOStream> inputData = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG,
        "I'll take a quiet life a handshake of carbon monoxide",
        std::ios_base::in | std::ios_base::binary);
      request.SetBody(inputData);
      return client->PutObject(request);
    }

    ListObjectsV2Outcome ListObjectsV2(const Aws::String &bucketName) {
      return client->ListObjectsV2(ListObjectsV2Request().WithBucket(bucketName));
    }

    GetObjectOutcome GetObject(const Aws::String &bucketName, const Aws::String &keyName) {
      return client->GetObject(GetObjectRequest().WithBucket(bucketName).WithKey(keyName));
    }

    HeadObjectOutcome HeadObject(const Aws::String &bucketName, const Aws::String &keyName) {
      return client->HeadObject(HeadObjectRequest().WithBucket(bucketName).WithKey(keyName));
    }

    DeleteObjectOutcome DeleteObject(const Aws::String &bucketName, const Aws::String &keyName) {
      return client->DeleteObject(DeleteObjectRequest().WithBucket(bucketName).WithKey(keyName));
    }

    DeleteObjectsOutcome DeleteObjects(const Aws::String &bucketName) {
      auto verseOne = randomString();
      auto requestOne = PutObjectRequest().WithBucket(bucketName).WithKey(verseOne);
      std::shared_ptr<Aws::IOStream> inputDataOne = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG,
        "A heart that's full up like a landfill",
        std::ios_base::in | std::ios_base::binary);
      requestOne.SetBody(inputDataOne);
      auto outcomeOne = client->PutObject(requestOne);
      AWS_EXPECT_SUCCESS(outcomeOne);

      auto verseTwo = randomString();
      auto requestTwo = PutObjectRequest().WithBucket(bucketName).WithKey(verseOne);
      std::shared_ptr<Aws::IOStream> inputDataTwo = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG,
        "A job that slowly kills you",
        std::ios_base::in | std::ios_base::binary);
      requestTwo.SetBody(inputDataTwo);
      auto outcomeTwo = client->PutObject(requestTwo);
      AWS_EXPECT_SUCCESS(outcomeTwo);

      return client->DeleteObjects(DeleteObjectsRequest().WithBucket(bucketName).WithDelete(
        Model::Delete().WithObjects({
            ObjectIdentifier().WithKey(verseOne),
            ObjectIdentifier().WithKey(verseTwo)
          }
        )));
    }

    CompleteMultipartUploadOutcome CreateMultipartUpload(const Aws::String &bucketName, const Aws::String &keyName) {
      auto createOutcome = client->CreateMultipartUpload(CreateMultipartUploadRequest()
        .WithBucket(bucketName)
        .WithKey(keyName)
        .WithChecksumAlgorithm(ChecksumAlgorithm::CRC32));
      AWS_EXPECT_SUCCESS(createOutcome);

      auto uploadPartRequest = UploadPartRequest()
          .WithBucket(bucketName)
          .WithKey(keyName)
          .WithPartNumber(1)
          .WithUploadId(createOutcome.GetResult().GetUploadId())
          .WithChecksumAlgorithm(ChecksumAlgorithm::CRC32);
      std::shared_ptr<Aws::IOStream> data = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG,
        "This is my final fit my final bellyache with No alarms and no surprises",
        std::ios_base::in | std::ios_base::binary);
      uploadPartRequest.SetBody(data);
      auto uploadPart = client->UploadPart(uploadPartRequest);
      AWS_EXPECT_SUCCESS(uploadPart);

      auto parts = client->ListParts(ListPartsRequest()
        .WithUploadId(createOutcome.GetResult().GetUploadId())
        .WithBucket(bucketName)
        .WithKey(keyName));
      AWS_EXPECT_SUCCESS(parts);

      Model::CompletedMultipartUpload completedUpload;
      completedUpload.AddParts(CompletedPart()
        .WithPartNumber(1)
        .WithETag(uploadPart.GetResult().GetETag())
        .WithChecksumCRC32(uploadPart.GetResult().GetChecksumCRC32()));

      return client->CompleteMultipartUpload(CompleteMultipartUploadRequest()
        .WithBucket(bucketName)
        .WithKey(keyName)
        .WithUploadId(createOutcome.GetResult().GetUploadId())
        .WithMultipartUpload(completedUpload));
    }

    UploadPartCopyOutcome UploadPartCopy(const Aws::String &bucketName, const Aws::String &keyName) {
      auto createOutcome = client->CreateMultipartUpload(CreateMultipartUploadRequest()
        .WithBucket(bucketName)
        .WithKey(keyName)
        .WithChecksumAlgorithm(ChecksumAlgorithm::CRC32));
      AWS_EXPECT_SUCCESS(createOutcome);

      auto copyPartKey = randomString();
      auto putObjectRequest = PutObjectRequest().WithBucket(bucketName).WithKey(copyPartKey);
      std::shared_ptr<Aws::IOStream> inputData = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG,
        "I'll take a quiet life a handshake of carbon monoxide",
        std::ios_base::in | std::ios_base::binary);
      putObjectRequest.SetBody(inputData);
      auto outcome = client->PutObject(putObjectRequest);
      AWS_EXPECT_SUCCESS(outcome);

      return client->UploadPartCopy(UploadPartCopyRequest()
        .WithUploadId(createOutcome.GetResult().GetUploadId())
        .WithBucket(bucketName)
        .WithPartNumber(1)
        .WithKey(keyName)
        .WithCopySource(bucketName + "/" + copyPartKey));
    }

    AbortMultipartUploadOutcome AbortMultipartUpload(const Aws::String &bucketName, const Aws::String &keyName) {
      auto createOutcome = client->CreateMultipartUpload(CreateMultipartUploadRequest()
        .WithBucket(bucketName)
        .WithKey(keyName)
        .WithChecksumAlgorithm(ChecksumAlgorithm::CRC32));
      AWS_EXPECT_SUCCESS(createOutcome);

      auto uploadPartRequest = UploadPartRequest()
          .WithBucket(bucketName)
          .WithKey(keyName)
          .WithPartNumber(1)
          .WithUploadId(createOutcome.GetResult().GetUploadId())
          .WithChecksumAlgorithm(ChecksumAlgorithm::CRC32);
      std::shared_ptr<Aws::IOStream> data = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG,
        "This is my final fit my final bellyache with No alarms and no surprises",
        std::ios_base::in | std::ios_base::binary);
      uploadPartRequest.SetBody(data);
      auto uploadPart = client->UploadPart(uploadPartRequest);
      AWS_EXPECT_SUCCESS(uploadPart);

      auto parts = client->ListParts(ListPartsRequest()
        .WithUploadId(createOutcome.GetResult().GetUploadId())
        .WithBucket(bucketName)
        .WithKey(keyName));
      AWS_EXPECT_SUCCESS(parts);

      return client->AbortMultipartUpload(AbortMultipartUploadRequest()
        .WithBucket(bucketName).WithKey(keyName)
        .WithUploadId(createOutcome.GetResult().GetUploadId()));
    }

    void EmptyBucketUtil(const Aws::Vector<Aws::String> &buckets) {
      for (const auto&bucket: buckets) {
        auto bucketExists = HeadBucket(bucket);
        if (!bucketExists.IsSuccess()) {
          continue;
        }
        auto objects = client->ListObjectsV2(ListObjectsV2Request().WithBucket(bucket));
        AWS_EXPECT_SUCCESS(objects);
        while (objects.GetResult().GetIsTruncated() || !objects.GetResult().GetContents().empty()) {
          for (const auto&object: objects.GetResult().GetContents()) {
            DeleteObject(bucket, object.GetKey());
          }
          objects = client->ListObjectsV2(ListObjectsV2Request()
            .WithBucket(bucket)
            .WithContinuationToken(objects.GetResult().GetContinuationToken()));
        }
        auto uploads = client->ListMultipartUploads(ListMultipartUploadsRequest().
          WithBucket(bucket));
        AWS_EXPECT_SUCCESS(uploads);
        while (uploads.GetResult().GetIsTruncated() || !uploads.GetResult().GetUploads().empty()) {
          for (const auto&upload: uploads.GetResult().GetUploads()) {
            auto abortMPU = client->AbortMultipartUpload(AbortMultipartUploadRequest()
              .WithBucket(bucket)
              .WithKey(upload.GetKey())
              .WithUploadId(upload.GetUploadId()));
            AWS_EXPECT_SUCCESS(abortMPU);
          }
          uploads = client->ListMultipartUploads(ListMultipartUploadsRequest().WithBucket(bucket));
        }
        auto outcome = client->DeleteBucket(DeleteBucketRequest().WithBucket(bucket));
        if (!outcome.IsSuccess()) {
          std::cout << "Failed to delete bucket: " << outcome.GetError().GetMessage() << "\n";
        }
      }
    }

  protected:
    void SetUp() override {
      S3ClientConfiguration configuration;
      configuration.region = "us-east-1";
      client = Aws::MakeShared<S3Client>(ALLOCATION_TAG, configuration);
    }

    void TearDown() override {
      EmptyBucketUtil(bucketsToCleanup);
    }

    static Aws::String randomString() {
      return StringUtils::ToLower(Aws::String(UUID::RandomUUID()).c_str());
    }

  protected:
    std::shared_ptr<S3Client> client;

  private:
    Aws::Vector<Aws::String> bucketsToCleanup;
  };

  TEST_F(S3ExpressTest, ShouldCreateS3ExpressBucket) {
    auto bucketName = Testing::GetAwsResourcePrefix() + randomString() + S3_EXPRESS_SUFFIX;
    auto createOutcome = CreateBucket(bucketName);
    AWS_EXPECT_SUCCESS(createOutcome);
    auto headOutcome = HeadBucket(bucketName);
    AWS_EXPECT_SUCCESS(headOutcome);
    auto buckets = ListDirectoryBuckets();
    AWS_EXPECT_SUCCESS(buckets);
    EXPECT_TRUE(std::any_of(buckets.GetResult().GetBuckets().begin(),
      buckets.GetResult().GetBuckets().end(),
      [&bucketName](const Bucket&bucket) -> bool { return bucket.GetName() == bucketName; }));
    auto sessionOutcome = CreateSession(bucketName);
    AWS_EXPECT_SUCCESS(sessionOutcome);
    auto deleteOutcome = DeleteBucket(bucketName);
    AWS_EXPECT_SUCCESS(deleteOutcome);
  }

  TEST_F(S3ExpressTest, BucketPolicyTest) {
    auto bucketName = Testing::GetAwsResourcePrefix() + randomString() + S3_EXPRESS_SUFFIX;
    auto createOutcome = CreateBucket(bucketName);
    AWS_EXPECT_SUCCESS(createOutcome);
    auto putBucketPolicyOutcome = PutBucketPolicy(bucketName);
    AWS_EXPECT_SUCCESS(putBucketPolicyOutcome);
    auto getBucketPolicyOutcome = GetBucketPolicy(bucketName);
    AWS_EXPECT_SUCCESS(getBucketPolicyOutcome);
    auto deleteBucketPolicyOutcome = DeleteBucketPolicy(bucketName);
    AWS_EXPECT_SUCCESS(deleteBucketPolicyOutcome);
    auto deleteOutcome = DeleteBucket(bucketName);
    AWS_EXPECT_SUCCESS(deleteOutcome);
  }

  TEST_F(S3ExpressTest, ObjectTest) {
    auto bucketName = Testing::GetAwsResourcePrefix() + randomString() + S3_EXPRESS_SUFFIX;
    auto keyName = randomString();
    auto createOutcome = CreateBucket(bucketName);
    AWS_EXPECT_SUCCESS(createOutcome);
    auto putObjectOutcome = PutObject(bucketName, keyName);
    AWS_EXPECT_SUCCESS(putObjectOutcome);
    auto getObjectOutcome = GetObject(bucketName, keyName);
    AWS_EXPECT_SUCCESS(getObjectOutcome);
    auto objects = ListObjectsV2(bucketName);
    EXPECT_TRUE(std::any_of(objects.GetResult().GetContents().begin(),
      objects.GetResult().GetContents().end(),
      [&keyName](const Object&object) -> bool { return object.GetKey() == keyName; }));
    auto headObjecOutcome = HeadObject(bucketName, keyName);
    AWS_EXPECT_SUCCESS(headObjecOutcome);
    auto deleteObjecOutcome = DeleteObject(bucketName, keyName);
    AWS_EXPECT_SUCCESS(deleteObjecOutcome);
    auto deleteObjectsOutcome = DeleteObjects(bucketName);
    AWS_EXPECT_SUCCESS(deleteObjectsOutcome);
    auto deleteOutcome = DeleteBucket(bucketName);
    AWS_EXPECT_SUCCESS(deleteOutcome);
  }

  TEST_F(S3ExpressTest, MultipartUploadTest) {
    auto bucketName = Testing::GetAwsResourcePrefix() + randomString() + S3_EXPRESS_SUFFIX;
    auto createOutcome = CreateBucket(bucketName);
    AWS_EXPECT_SUCCESS(createOutcome);
    auto createMPUOutcome = CreateMultipartUpload(bucketName, randomString() + S3_EXPRESS_SUFFIX);
    AWS_EXPECT_SUCCESS(createMPUOutcome);
    auto uploadPartCopyOutcome = UploadPartCopy(bucketName, randomString() + S3_EXPRESS_SUFFIX);
    AWS_EXPECT_SUCCESS(uploadPartCopyOutcome);
    auto abortMPUOutcome = AbortMultipartUpload(bucketName, randomString() + S3_EXPRESS_SUFFIX);
    AWS_EXPECT_SUCCESS(abortMPUOutcome);
    EmptyBucketUtil({bucketName});
  }

  TEST_F(S3ExpressTest, PutObjectChecksum) {
    struct ChecksumTestCase {
      std::function<PutObjectRequest(PutObjectRequest)> chucksumRequestMutator;
      HttpResponseCode responseCode;
      String body;
    };

    auto bucketName = Testing::GetAwsResourcePrefix() + randomString() + S3_EXPRESS_SUFFIX;
    auto createOutcome = CreateBucket(bucketName);
    AWS_EXPECT_SUCCESS(createOutcome);

    Vector<ChecksumTestCase> testCases{
      {
        [](PutObjectRequest request) -> PutObjectRequest {
          return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32).WithChecksumCRC32("Just runnin' scared each place we go");
        },
        HttpResponseCode::BAD_REQUEST,
        "Just runnin' scared each place we go"
      },
      {
        [](PutObjectRequest request) -> PutObjectRequest {
          return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA1).WithChecksumSHA1("So afraid that he might show");
        },
        HttpResponseCode::BAD_REQUEST,
        "So afraid that he might show"
      },
      {
        [](PutObjectRequest request) -> PutObjectRequest {
          return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA256).WithChecksumSHA256("Yeah, runnin' scared, what would I do");
        },
        HttpResponseCode::BAD_REQUEST,
        "Yeah, runnin' scared, what would I do"
      },
      {
        [](PutObjectRequest request) -> PutObjectRequest {
          return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32C).WithChecksumCRC32C("If he came back and wanted you?");
        },
        HttpResponseCode::BAD_REQUEST,
        "If he came back and wanted you?"
      },
      {
        [](PutObjectRequest request) -> PutObjectRequest {
          return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32)
              .WithChecksumCRC32(HashingUtils::Base64Encode(HashingUtils::CalculateCRC32("Runnin' scared, you love him so")));
        },
        HttpResponseCode::OK,
        "Runnin' scared, you love him so"
      },
      {
        [](PutObjectRequest request) -> PutObjectRequest {
          return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA1)
              .WithChecksumSHA1(HashingUtils::Base64Encode(HashingUtils::CalculateSHA1("Just runnin' scared, afraid to lose")));
        },
        HttpResponseCode::OK,
        "Just runnin' scared, afraid to lose"
      },
      {
        [](PutObjectRequest request) -> PutObjectRequest {
          return request.WithChecksumAlgorithm(ChecksumAlgorithm::SHA256)
              .WithChecksumSHA256(
                HashingUtils::Base64Encode(HashingUtils::CalculateSHA256("If he came back, which one would you choose?")));
        },
        HttpResponseCode::OK,
        "If he came back, which one would you choose?"
      },
      {
        [](PutObjectRequest request) -> PutObjectRequest {
          return request.WithChecksumAlgorithm(ChecksumAlgorithm::CRC32C)
              .WithChecksumCRC32C(HashingUtils::Base64Encode(HashingUtils::CalculateCRC32C("Then all at once he was standing there")));
        },
        HttpResponseCode::OK,
        "Then all at once he was standing there"
      }
    };

    for (const auto&testCase: testCases) {
      auto request = testCase.chucksumRequestMutator(PutObjectRequest()
        .WithBucket(bucketName)
        .WithKey("RunningScared"));
      std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(ALLOCATION_TAG,
        testCase.body,
        std::ios_base::in | std::ios_base::binary);
      request.SetBody(body);
      const auto response = client->PutObject(request);
      if (!response.IsSuccess()) {
        EXPECT_EQ(testCase.responseCode, response.GetError().GetResponseCode());
      }
      else {
        EXPECT_EQ(testCase.responseCode, HttpResponseCode::OK);
        EXPECT_TRUE(response.IsSuccess());
      }
    }
  }

  TEST_F(S3ExpressTest, PutObjectChecksumWithoutAlgorithm) {
    const auto bucketName = Testing::GetAwsResourcePrefix() + randomString() + S3_EXPRESS_SUFFIX;
    const auto createOutcome = CreateBucket(bucketName);
    AWS_EXPECT_SUCCESS(createOutcome);

    auto request = PutObjectRequest()
        .WithBucket(bucketName)
        .WithKey("swingingparty")
        .WithChecksumSHA256(HashingUtils::Base64Encode(HashingUtils::CalculateSHA256("Bring your own lampshade, somewhere there's a party.")));

    std::shared_ptr<IOStream> body = Aws::MakeShared<StringStream>(ALLOCATION_TAG,
      "Bring your own lampshade, somewhere there's a party.",
      std::ios_base::in | std::ios_base::binary);
    request.SetBody(body);

    const auto response = client->PutObject(request);
    AWS_EXPECT_SUCCESS(response);
  }
}
