/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#define AWS_DISABLE_DEPRECATION
#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/DeleteObjectRequest.h>
#include <aws/s3/model/PutBucketTaggingRequest.h>
#include <aws/s3/model/Tagging.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/crypto/CryptoStream.h>
#include <aws/testing/ProxyConfig.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/json/JsonSerializer.h>

// TODO: temporary fix for naming conflicts on Windows.
#if _WIN32
#ifdef GetMessage
#undef GetMessage
#endif
#ifdef GetObject
#undef GetObject
#endif
#endif

#include <aws/s3-encryption/S3EncryptionClient.h>
#include <aws/s3/S3Client.h>

using namespace Aws::S3;
using namespace Aws::S3Encryption;
using namespace Aws::S3Encryption::Materials;
using namespace Aws::Utils;
using namespace Aws::Client;
using namespace Aws::Utils::Crypto;
using namespace Aws::Region;
using namespace Aws::Utils::Json;

static const char* ENCRYPTED_BUCKET_TEST_NAME = "awsnativesdks3encotest";
static const char* ALLOCATION_TAG = "LiveClientTest";
static const char TEST_STRING[] = "This is a test string. It is meant to test AES CBC, AES CTR, and AES GCM modes of operation with the Aws S3 Encryption Client";

static const char* RANGE_GET_STR = "bytes=38-75";
static const char RANGE_GET_TEST_STRING[] = "test AES CBC, AES CTR, and AES GCM mod";

static const char* TEST_BUCKET_TAG = "IntegrationTestResource";

class LiveClientTest : public ::testing::Test
{
public:
    static std::shared_ptr<S3Client> StandardClient;
    static std::string TimeStamp;
    static std::string BucketName;

    static void SetUpTestCase()
    {
        TimeStamp = DateTime::Now().CalculateLocalTimestampAsString("%Y%m%dt%H%M%Sz").c_str();

        Aws::S3::S3ClientConfiguration config;
        config.region = AWS_TEST_REGION;
        StandardClient = Aws::MakeShared<Aws::S3::S3Client>(ALLOCATION_TAG, config);
        BucketName = ComputeUniqueBucketName(ENCRYPTED_BUCKET_TEST_NAME).c_str();
        Model::CreateBucketRequest createBucketRequest;
        createBucketRequest.WithBucket(BucketName.c_str())
            .WithACL(Model::BucketCannedACL::private_);

        auto createBucketOutcome = StandardClient->CreateBucket(createBucketRequest);
        AWS_ASSERT_SUCCESS(createBucketOutcome);
    }

    static void TagTestBucket(const Aws::String& bucketName) {
        ASSERT_TRUE(StandardClient.get());
        Aws::S3::Model::PutBucketTaggingRequest taggingRequest;
        taggingRequest.SetBucket(bucketName);
        Aws::S3::Model::Tag tag;
        tag.SetKey(TEST_BUCKET_TAG);
        tag.SetValue(TEST_BUCKET_TAG);
        Aws::S3::Model::Tagging tagging;
        tagging.AddTagSet(tag);
        taggingRequest.SetTagging(tagging);

        auto taggingOutcome = CallOperationWithUnconditionalRetry(StandardClient.get(), &Aws::S3::S3Client::PutBucketTagging, taggingRequest);
        AWS_ASSERT_SUCCESS(taggingOutcome);
    }

    static void TearDownTestCase()
    {
        Model::DeleteBucketRequest deleteBucketRequest;
        deleteBucketRequest.WithBucket(BucketName.c_str());

        StandardClient->DeleteBucket(deleteBucketRequest);
        StandardClient = nullptr;
    }

    static Aws::String ComputeUniqueBucketName(const char* bucketName)
    {
        Aws::String uniqueBucketName(bucketName);
        uniqueBucketName.append((TimeStamp.c_str()));

        return Aws::Testing::GetAwsResourcePrefix() + uniqueBucketName;
    }
};

std::string LiveClientTest::TimeStamp;
std::string LiveClientTest::BucketName;
std::shared_ptr<S3Client> LiveClientTest::StandardClient(nullptr);

// The V1 and V2 clients are gone, but objects they wrote are still in S3. This writes the same
// format through the base client so the tests can check that V3 still reads them.
class LegacyEncryptionClient : public S3EncryptionClientBase
{
public:
    LegacyEncryptionClient(const std::shared_ptr<EncryptionMaterials>& materials, const CryptoConfiguration& cryptoConfig,
        const Aws::S3::S3ClientConfiguration& clientConfig)
        : S3EncryptionClientBase(materials, cryptoConfig, clientConfig) {}
};

//= ../specification/s3-encryption/key-commitment.md#commitment-policy
//= type=test
//# When the commitment policy is FORBID_ENCRYPT_ALLOW_DECRYPT, the S3EC MUST NOT encrypt using an algorithm suite which supports key commitment.
//# When the commitment policy is FORBID_ENCRYPT_ALLOW_DECRYPT, the S3EC MUST allow decryption using algorithm suites which do not support key commitment.

//= ../specification/s3-encryption/key-commitment.md#commitment-policy
//= type=test
//# When the commitment policy is REQUIRE_ENCRYPT_ALLOW_DECRYPT, the S3EC MUST allow decryption using algorithm suites which do not support key commitment.

//= ../specification/s3-encryption/key-commitment.md#commitment-policy
//= type=test
//# When the commitment policy is REQUIRE_ENCRYPT_REQUIRE_DECRYPT, the S3EC MUST NOT allow decryption using algorithm suites which do not support key commitment.

//= ../specification/s3-encryption/decryption.md#key-commitment
//= type=test
//# The S3EC MUST validate the algorithm suite used for decryption against the key commitment policy before attempting to decrypt the content ciphertext.
//# If the commitment policy requires decryption using a committing algorithm suite, and the algorithm suite associated with the object does not support key commitment, then the S3EC MUST throw an exception.

TEST_F(LiveClientTest, TestWriteV2ReadV3)
{
    auto key = SymmetricCipher::GenerateKey();
    auto materials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);

    Aws::S3::S3ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    static const char* objectKey = "TestWriteV2ReadV3";

    LegacyEncryptionClient v2_client(materials, CryptoConfiguration(), s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = v2_client.PutObject(putObjectRequest, {});
    AWS_ASSERT_SUCCESS(putObjectResult);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);

    CryptoConfigurationV3  v3_configuration(materials);
    S3EncryptionClientV3 v3_client_dflt(v3_configuration, s3ClientConfig);

    auto getObjectResult = v3_client_dflt.GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectResult.IsSuccess());

    v3_configuration.SetCommitmentPolicy(CommitmentPolicy::FORBID_ENCRYPT_ALLOW_DECRYPT);
    S3EncryptionClientV3 v3_client_1(v3_configuration, s3ClientConfig);
    getObjectResult = v3_client_1.GetObject(getObjectRequest);
    AWS_EXPECT_SUCCESS(getObjectResult);

    v3_configuration.SetCommitmentPolicy(CommitmentPolicy::REQUIRE_ENCRYPT_ALLOW_DECRYPT);
    S3EncryptionClientV3 v3_client_2(v3_configuration, s3ClientConfig);
    getObjectResult = v3_client_2.GetObject(getObjectRequest);
    AWS_EXPECT_SUCCESS(getObjectResult);

    v3_configuration.SetCommitmentPolicy(CommitmentPolicy::REQUIRE_ENCRYPT_REQUIRE_DECRYPT);
    S3EncryptionClientV3 v3_client_3(v3_configuration, s3ClientConfig);
    getObjectResult = v3_client_3.GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectResult.IsSuccess());
}

//= ../specification/s3-encryption/decryption.md#legacy-decryption
//= type=test
//# The S3EC MUST NOT decrypt objects encrypted using legacy unauthenticated algorithm suites unless specifically configured to do so.
//# If the S3EC is not configured to enable legacy unauthenticated content decryption, the client MUST throw an exception when attempting to decrypt an object encrypted with a legacy unauthenticated algorithm suite.

//= ../specification/s3-encryption/client.md#enable-legacy-wrapping-algorithms
//= type=test
//# When enabled, the S3EC MUST be able to decrypt objects encrypted with all supported wrapping algorithms (both legacy and fully supported).
//# When disabled, the S3EC MUST NOT decrypt objects encrypted using legacy wrapping algorithms; it MUST throw an exception when attempting to decrypt an object encrypted with a legacy wrapping algorithm.

//= ../specification/s3-encryption/client.md#enable-legacy-unauthenticated-modes
//= type=test
//# When enabled, the S3EC MUST be able to decrypt objects encrypted with all content encryption algorithms (both legacy and fully supported).
//# When disabled, the S3EC MUST NOT decrypt objects encrypted using legacy content encryption algorithms; it MUST throw an exception when attempting to decrypt an object encrypted with a legacy content encryption algorithm.

TEST_F(LiveClientTest, TestWriteV1ReadV3)
{
    CryptoConfiguration configuration;
    configuration.SetCryptoMode(CryptoMode::ENCRYPTION_ONLY);
    configuration.SetStorageMethod(StorageMethod::METADATA);

    Aws::S3::S3ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto key = SymmetricCipher::GenerateKey();
    auto materials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);

    static const char* objectKey = "TestWriteV1ReadV3";

    LegacyEncryptionClient client(materials, configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest, {});
    AWS_ASSERT_SUCCESS(putObjectResult);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto getObjectResult = client.GetObject(getObjectRequest);
    AWS_ASSERT_SUCCESS(getObjectResult);

    CryptoConfigurationV3  v3_configuration(materials);
    S3EncryptionClientV3 v3_client_dflt(v3_configuration, s3ClientConfig);

    getObjectResult = v3_client_dflt.GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectResult.IsSuccess());

    v3_configuration.SetCommitmentPolicy(CommitmentPolicy::FORBID_ENCRYPT_ALLOW_DECRYPT);
    S3EncryptionClientV3 v3_client_1(v3_configuration, s3ClientConfig);
    getObjectResult = v3_client_1.GetObject(getObjectRequest);
    EXPECT_FALSE(getObjectResult.IsSuccess());

    v3_configuration.AllowLegacy(true);
    S3EncryptionClientV3 v3_client_2(v3_configuration, s3ClientConfig);
    getObjectResult = v3_client_2.GetObject(getObjectRequest);
    AWS_EXPECT_SUCCESS(getObjectResult);
}

//= ../specification/s3-encryption/key-commitment.md#commitment-policy
//= type=test
//# When the commitment policy is REQUIRE_ENCRYPT_ALLOW_DECRYPT, the S3EC MUST only encrypt using an algorithm suite which supports key commitment.

//= ../specification/s3-encryption/key-commitment.md#commitment-policy
//= type=test
//# When the commitment policy is REQUIRE_ENCRYPT_REQUIRE_DECRYPT, the S3EC MUST only encrypt using an algorithm suite which supports key commitment.
TEST_F(LiveClientTest, TestWriteV3ReadV3)
{
    auto key = SymmetricCipher::GenerateKey();
    auto materials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV3  v3_configuration(materials);
    v3_configuration.SetCommitmentPolicy(CommitmentPolicy::REQUIRE_ENCRYPT_ALLOW_DECRYPT);

    Aws::S3::S3ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    static const char* objectKey = "TestWriteV3ReadV3";

    S3EncryptionClientV3 v3_client(v3_configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = v3_client.PutObject(putObjectRequest, {});
    AWS_ASSERT_SUCCESS(putObjectResult);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto getObjectResult = v3_client.GetObject(getObjectRequest);
    AWS_EXPECT_SUCCESS(getObjectResult);

    CryptoConfigurationV3  req_req_conf(materials);
    S3EncryptionClientV3 req_req_client(req_req_conf, s3ClientConfig);

    getObjectResult = req_req_client.GetObject(getObjectRequest);
    AWS_EXPECT_SUCCESS(getObjectResult);
}

static Aws::Map<Aws::String, Aws::String> DeserializeMap(const Aws::String& jsonString)
{
    Aws::Map<Aws::String, Aws::String> materialsDescriptionMap;
    JsonValue jsonObject(jsonString);
    if (jsonObject.WasParseSuccessful())
    {
        Aws::Map<Aws::String, JsonView> jsonMap = jsonObject.View().GetAllObjects();
        for (auto& mapItem : jsonMap)
        {
            materialsDescriptionMap[mapItem.first] = mapItem.second.AsString();
        }
        return materialsDescriptionMap;
    }
    else
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Json Parse failed with message: " << jsonObject.GetErrorMessage());
        return materialsDescriptionMap;
    }
}

static bool contains(Aws::Map<Aws::String, Aws::String>& m, const char * str)
{
    return m.find(str) != m.end();
}

TEST_F(LiveClientTest, TestWriteV3Instruction)
{
    auto key = SymmetricCipher::GenerateKey();
    auto materials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV3  configuration(materials);
    configuration.SetStorageMethod(StorageMethod::INSTRUCTION_FILE);

    Aws::S3::S3ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    static const char* objectKey = "TestWriteV3Instruction";
    static const char* objectKeyInst = "TestWriteV3Instruction.instruction";

    S3EncryptionClientV3 client(configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest, {});
    AWS_ASSERT_SUCCESS(putObjectResult);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto getObjectResult = client.GetObject(getObjectRequest);
    AWS_ASSERT_SUCCESS(getObjectResult);

    auto metadata = getObjectResult.GetResult().GetMetadata();

    getObjectRequest.WithKey(objectKeyInst);
    Aws::S3::S3Client s3Client(s3ClientConfig);

    auto getInstrResult = s3Client.GetObject(getObjectRequest);
    AWS_ASSERT_SUCCESS(getInstrResult);

    auto inst_metadata = getInstrResult.GetResult().GetMetadata();

    EXPECT_TRUE(inst_metadata.size() == 1);
    EXPECT_STREQ("default instruction file header", inst_metadata["x-amz-crypto-instr-file"].c_str());

    Aws::StringStream responseStringStream;
    responseStringStream << getInstrResult.GetResult().GetBody().rdbuf();
    auto jsonString = responseStringStream.str();
    inst_metadata = DeserializeMap(jsonString);

    //= ../specification/s3-encryption/data-format/metadata-strategy.md#v3-instruction-files
    //= type=test
    //# - The V3 message format MUST store the mapkey "x-amz-c" and its value in the Object Metadata when writing with an Instruction File.
    //# - The V3 message format MUST NOT store the mapkey "x-amz-c" and its value in the Instruction File.
    //# - The V3 message format MUST store the mapkey "x-amz-d" and its value in the Object Metadata when writing with an Instruction File.
    //# - The V3 message format MUST NOT store the mapkey "x-amz-d" and its value in the Instruction File.
    //# - The V3 message format MUST store the mapkey "x-amz-i" and its value in the Object Metadata when writing with an Instruction File.
    //# - The V3 message format MUST NOT store the mapkey "x-amz-i" and its value in the Instruction File.
    //#
    //# - The V3 message format MUST store the mapkey "x-amz-3" and its value in the Instruction File.
    //# - The V3 message format MUST store the mapkey "x-amz-w" and its value in the Instruction File.
    //# - The V3 message format MUST store the mapkey "x-amz-m" and its value (when present in the content metadata) in the Instruction File.
    //# - The V3 message format MUST store the mapkey "x-amz-t" and its value (when present in the content metadata) in the Instruction File.

    //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
    //= type=test
    //# In the V3 format, the mapkeys "x-amz-c", "x-amz-d", and "x-amz-i" MUST be stored exclusively in the Object Metadata.

    EXPECT_TRUE(contains(metadata, "x-amz-c" ));
    EXPECT_FALSE(contains(inst_metadata, "x-amz-c" ));
    EXPECT_TRUE(contains(metadata, "x-amz-d" ));
    EXPECT_FALSE(contains(inst_metadata, "x-amz-d" ));
    EXPECT_TRUE(contains(metadata, "x-amz-i" ));
    EXPECT_FALSE(contains(inst_metadata, "x-amz-i" ));

    EXPECT_TRUE(contains(inst_metadata, "x-amz-3" ));
    EXPECT_TRUE(contains(inst_metadata, "x-amz-w" ));
}


//= ../specification/s3-encryption/client.md#enable-delayed-authentication
//= type=test
//# When enabled, the S3EC MAY release plaintext from a stream which has not been authenticated.
//# When disabled the S3EC MUST NOT release plaintext from a stream which has not been authenticated.

TEST_F(LiveClientTest, TestGcmModeRangeGet)
{
    auto key = SymmetricCipher::GenerateKey();
    auto materials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV3  configuration(materials);

    Aws::S3::S3ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    static const char* objectKey = "TestAERangeGetKey";

    S3EncryptionClientV3 unauth_client(configuration, s3ClientConfig);
    configuration.SetUnAuthenticatedRangeGet(RangeGetMode::ALL);
    S3EncryptionClientV3 client(configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest, {});
    AWS_ASSERT_SUCCESS(putObjectResult);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(RANGE_GET_STR);

    auto getObjectResult = client.GetObject(getObjectRequest);
    AWS_EXPECT_SUCCESS(getObjectResult);

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(RANGE_GET_TEST_STRING, responseStringStream.str().c_str());

    //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
    //= type=test
    //# - The mapkey "x-amz-c" MUST be present for V3 format objects.

    //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
    //= type=test
    //# - The mapkey "x-amz-3" MUST be present for V3 format objects.

    //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
    //= type=test
    //# - The mapkey "x-amz-w" MUST be present for V3 format objects.

    //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
    //= type=test
    //# - The mapkey "x-amz-d" MUST be present for V3 format objects.

    //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
    //= type=test
    //# - The mapkey "x-amz-i" MUST be present for V3 format objects.

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto encKeyStr = metadata["x-amz-3"];
    auto cipherStr = metadata["x-amz-c"];
    auto commitKeyStr = metadata["x-amz-d"];
    auto messageIdStr = metadata["x-amz-i"];
    auto algStr = metadata["x-amz-w"];
    EXPECT_FALSE(encKeyStr.empty());
    EXPECT_STREQ("115", cipherStr.c_str());
    EXPECT_FALSE(commitKeyStr.empty());
    EXPECT_FALSE(messageIdStr.empty());
    EXPECT_STREQ("02", algStr.c_str());

    getObjectResult = unauth_client.GetObject(getObjectRequest);
    ASSERT_FALSE(getObjectResult.IsSuccess());
}

