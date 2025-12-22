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

// Public key owned by CryptoTools
// Needed for EncryptionContext tests, that need KMS materials
static const char * KMS_KEY = "arn:aws:kms:us-west-2:658956600833:key/b3537ef1-d8dc-4780-9f5a-55776cbb2f7f";

static const char* ENCRYPTED_BUCKET_TEST_NAME = "awsnativesdks3encotest";
static const char* ALLOCATION_TAG = "LiveClientTest";
static const char TEST_STRING[] = "This is a test string. It is meant to test AES CBC, AES CTR, and AES GCM modes of operation with the Aws S3 Encryption Client";

static const char* RANGE_GET_STR = "bytes=38-75";
static const char RANGE_GET_TEST_STRING[] = "test AES CBC, AES CTR, and AES GCM mod";

static const char* OVERFLOW_RANGE_GET_STR = "bytes=38-1000000000";
static const char OVERFLOW_RANGE_GET_TEST_STRING[] = "test AES CBC, AES CTR, and AES GCM modes of operation with the Aws S3 Encryption Client";

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

        ClientConfiguration config;
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

TEST_F(LiveClientTest, TestEOMode)
{
    CryptoConfiguration configuration;
    configuration.SetCryptoMode(CryptoMode::ENCRYPTION_ONLY);
    configuration.SetStorageMethod(StorageMethod::METADATA);

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);

    static const char* objectKey = "TestEOKey";

    S3EncryptionClient client(simpleEncryptionMaterials, configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest);
    AWS_ASSERT_SUCCESS(putObjectResult);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto getObjectResult = client.GetObject(getObjectRequest);
    AWS_EXPECT_SUCCESS(getObjectResult);

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(TEST_STRING, responseStringStream.str().c_str());

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto ivStr = metadata["x-amz-iv"];
    auto cekStr = metadata["x-amz-key-v2"];
    auto aad = metadata["x-amz-cek-alg"];
    EXPECT_FALSE(ivStr.empty());
    EXPECT_FALSE(cekStr.empty());
    EXPECT_FALSE(aad.empty());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::CBC);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto cbcCipher = CreateAES_CBCImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *cbcCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    AWS_EXPECT_SUCCESS(standardGetObjectResult);
    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str(), comparisonStream.str().length());
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    AWS_EXPECT_SUCCESS(deleteResult);
}

TEST_F(LiveClientTest, TestEncryptionContextEmpty)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV2 configuration(simpleEncryptionMaterials);

    static const char* objectKey = "TestEncryptionContextEmptyKey";

    S3EncryptionClientV2 client(configuration, s3ClientConfig);

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
    AWS_EXPECT_SUCCESS(getObjectResult);
    getObjectResult = client.GetObject(getObjectRequest, {});
    AWS_EXPECT_SUCCESS(getObjectResult);
    getObjectResult = client.GetObject(getObjectRequest, {{"foo", "bar"}});
    EXPECT_FALSE(getObjectResult.IsSuccess());
}

TEST_F(LiveClientTest, TestV2EncryptionContextEmptyKms)
{
    auto materials = std::make_shared<KMSWithContextEncryptionMaterials>(KMS_KEY);
    CryptoConfigurationV2  configuration(materials);

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    static const char* objectKey = "TestEncryptionContextKms";

    S3EncryptionClientV2 client(configuration, s3ClientConfig);

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
    AWS_EXPECT_SUCCESS(getObjectResult);
    getObjectResult = client.GetObject(getObjectRequest, {});
    AWS_EXPECT_SUCCESS(getObjectResult);
    getObjectResult = client.GetObject(getObjectRequest, {{"foo", "bar"}});
    EXPECT_FALSE(getObjectResult.IsSuccess());
}

TEST_F(LiveClientTest, TestV2EncryptionContextFullKms)
{
    auto materials = std::make_shared<KMSWithContextEncryptionMaterials>(KMS_KEY);
    CryptoConfigurationV2  configuration(materials);

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    static const char* objectKey = "TestEncryptionContextKms";

    S3EncryptionClientV2 client(configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    // PUT with non-empty EC
    auto putObjectResult = client.PutObject(putObjectRequest, {{"foo", "bar"}});
    AWS_ASSERT_SUCCESS(putObjectResult);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto getObjectResult = client.GetObject(getObjectRequest);
    AWS_EXPECT_SUCCESS(getObjectResult);

    getObjectResult = client.GetObject(getObjectRequest, {});
    EXPECT_FALSE(getObjectResult.IsSuccess());

    getObjectResult = client.GetObject(getObjectRequest, {{"foo", "bar"}});
    AWS_EXPECT_SUCCESS(getObjectResult);

    getObjectResult = client.GetObject(getObjectRequest, {{"foo", "baz"}});
    EXPECT_FALSE(getObjectResult.IsSuccess());

    getObjectResult = client.GetObject(getObjectRequest, {{"boo", "bar"}});
    EXPECT_FALSE(getObjectResult.IsSuccess());

    getObjectResult = client.GetObject(getObjectRequest, {{"foo", "bar"}, {"foo2", "bar"}});
    EXPECT_FALSE(getObjectResult.IsSuccess());
}

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
    CryptoConfigurationV2  v2_configuration(materials);

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    static const char* objectKey = "TestWriteV2ReadV3";

    S3EncryptionClientV2 v2_client(v2_configuration, s3ClientConfig);

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

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto key = SymmetricCipher::GenerateKey();
    auto materials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);

    static const char* objectKey = "TestWriteV1ReadV3";

    S3EncryptionClient client(materials, configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest);
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

TEST_F(LiveClientTest, TestWriteV3ReadV2)
{
    auto key = SymmetricCipher::GenerateKey();
    auto materials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV3  v3_configuration(materials);
    v3_configuration.SetCommitmentPolicy(CommitmentPolicy::FORBID_ENCRYPT_ALLOW_DECRYPT);

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    static const char* objectKey = "TestWriteV2ReadV3";

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

    CryptoConfigurationV2  v2_configuration(materials);
    S3EncryptionClientV2 v2_client(v2_configuration, s3ClientConfig);

    auto getObjectResult = v2_client.GetObject(getObjectRequest);
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

    ClientConfiguration s3ClientConfig;
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

TEST_F(LiveClientTest, TestWriteV2Instruction)
{
    auto key = SymmetricCipher::GenerateKey();
    auto materials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV2  configuration(materials);
    configuration.SetStorageMethod(StorageMethod::INSTRUCTION_FILE);

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    static const char* objectKey = "TestWriteV2Instruction";
    static const char* objectKeyInst = "TestWriteV2Instruction.instruction";

    S3EncryptionClientV2 client(configuration, s3ClientConfig);

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

    //= ../specification/s3-encryption/data-format/metadata-strategy.md#v1-v2-instruction-files
    //= type=test
    //# In the V1/V2 message format, all of the content metadata MUST be stored in the Instruction File.
    auto metadata = getObjectResult.GetResult().GetMetadata();
    EXPECT_TRUE(metadata.empty());

    getObjectRequest.WithKey(objectKeyInst);
    Aws::S3::S3Client s3Client(s3ClientConfig);

    getObjectResult = s3Client.GetObject(getObjectRequest);
    AWS_ASSERT_SUCCESS(getObjectResult);

    metadata = getObjectResult.GetResult().GetMetadata();
    EXPECT_TRUE(metadata.size() == 1);
    EXPECT_STREQ("default instruction file header", metadata["x-amz-crypto-instr-file"].c_str());

    //= ../specification/s3-encryption/data-format/metadata-strategy.md#instruction-file
    //= type=test
    //# The content metadata stored in the Instruction File MUST be serialized to a JSON string.
    //# The serialized JSON string MUST be the only contents of the Instruction File.
    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();
    auto jsonString = responseStringStream.str();
    auto inst_metadata = DeserializeMap(jsonString);
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

    ClientConfiguration s3ClientConfig;
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

TEST_F(LiveClientTest, TestAEMode)
{
    CryptoConfiguration configuration;
    configuration.SetCryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION);
    configuration.SetStorageMethod(StorageMethod::METADATA);

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);

    static const char* objectKey = "TestAEKey";

    S3EncryptionClient client(simpleEncryptionMaterials, configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest);
    AWS_ASSERT_SUCCESS(putObjectResult);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto getObjectResult = client.GetObject(getObjectRequest);
    AWS_EXPECT_SUCCESS(getObjectResult);

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(TEST_STRING, responseStringStream.str().c_str());

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto ivStr = metadata["x-amz-iv"];
    auto cekStr = metadata["x-amz-key-v2"];
    auto tagLenStr = metadata["x-amz-tag-len"];
    auto aad = metadata["x-amz-cek-alg"];
    EXPECT_FALSE(ivStr.empty());
    EXPECT_FALSE(cekStr.empty());
    EXPECT_FALSE(tagLenStr.empty());
    EXPECT_STREQ("128", tagLenStr.c_str());
    EXPECT_FALSE(aad.empty());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::GCM);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    cryptoMaterial.SetCryptoTagLength(static_cast<size_t>(StringUtils::ConvertToInt64(tagLenStr.c_str())));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto gcmCipher = CreateAES_GCMImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *gcmCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    AWS_EXPECT_SUCCESS(standardGetObjectResult);
    EXPECT_EQ((cryptoMaterial.GetCryptoTagLength() / 8) + sizeof(TEST_STRING) - 1, static_cast<size_t>(standardGetObjectResult.GetResult().GetContentLength()));

    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()) - (cryptoMaterial.GetCryptoTagLength() / 8));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str(), comparisonStream.str().length());
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    AWS_EXPECT_SUCCESS(deleteResult);
}

TEST_F(LiveClientTest, TestAEModeRangeGet)
{
    CryptoConfiguration configuration;
    configuration.SetCryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION);
    configuration.SetStorageMethod(StorageMethod::METADATA);

    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);

    static const char* objectKey = "TestAERangeGetKey";

    S3EncryptionClient client(simpleEncryptionMaterials, configuration, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket(BucketName.c_str())
        .WithKey(objectKey);

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectResult = client.PutObject(putObjectRequest);
    AWS_ASSERT_SUCCESS(putObjectResult);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(RANGE_GET_STR);

    auto getObjectResult = client.GetObject(getObjectRequest);
    AWS_EXPECT_SUCCESS(getObjectResult);

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(RANGE_GET_TEST_STRING, responseStringStream.str().c_str());

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto ivStr = metadata["x-amz-iv"];
    auto cekStr = metadata["x-amz-key-v2"];
    auto tagLenStr = metadata["x-amz-tag-len"];
    auto aad = metadata["x-amz-cek-alg"];
    EXPECT_FALSE(ivStr.empty());
    EXPECT_FALSE(cekStr.empty());
    EXPECT_FALSE(tagLenStr.empty());
    EXPECT_STREQ("128", tagLenStr.c_str());
    EXPECT_FALSE(aad.empty());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::GCM);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    cryptoMaterial.SetCryptoTagLength(static_cast<size_t>(StringUtils::ConvertToInt64(tagLenStr.c_str())));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto gcmCipher = CreateAES_GCMImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *gcmCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(RANGE_GET_STR);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    AWS_EXPECT_SUCCESS(standardGetObjectResult);
    EXPECT_EQ(sizeof(RANGE_GET_TEST_STRING) - 1, static_cast<size_t>(standardGetObjectResult.GetResult().GetContentLength()));

    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    //we just want to compare the actual range we fetched. range was bytes=38-75
    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str() + 38, 75 - 38 + 1);
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    AWS_EXPECT_SUCCESS(deleteResult);
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

    ClientConfiguration s3ClientConfig;
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

TEST_F(LiveClientTest, TestS3EncryptionError)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto kmsMaterials = Aws::MakeShared<Aws::S3Encryption::Materials::KMSWithContextEncryptionMaterials>("s3Encryption", "badKey");
    Aws::S3Encryption::CryptoConfiguration cryptoConfiguration(Aws::S3Encryption::StorageMethod::METADATA, Aws::S3Encryption::CryptoMode::ENCRYPTION_ONLY);
    auto credentials = Aws::MakeShared<Aws::Auth::DefaultAWSCredentialsProviderChain>("s3Encryption");
    Aws::S3Encryption::S3EncryptionClient encryptionClient(kmsMaterials, cryptoConfiguration, credentials, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket("badBucket").WithKey("badKey");

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectOutcome = encryptionClient.PutObject(putObjectRequest);
    ASSERT_FALSE(putObjectOutcome.IsSuccess());
    ASSERT_TRUE(putObjectOutcome.GetError().GetErrorType().IsCryptoError());
    ASSERT_FALSE(putObjectOutcome.GetError().GetErrorType().IsS3Error());
    ASSERT_EQ(CryptoErrors::GENERATE_CONTENT_ENCRYPTION_KEY_FAILED, putObjectOutcome.GetError().GetErrorType().cryptoError);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket("badBucket").WithKey("badKey");
    auto getObjectOutcome = encryptionClient.GetObject(getObjectRequest);
    ASSERT_FALSE(getObjectOutcome.IsSuccess());
    ASSERT_FALSE(getObjectOutcome.GetError().GetErrorType().IsCryptoError());
    ASSERT_TRUE(getObjectOutcome.GetError().GetErrorType().IsS3Error());
    ASSERT_EQ(Aws::Http::HttpResponseCode::NOT_FOUND, getObjectOutcome.GetError().GetResponseCode());
}

TEST_F(LiveClientTest, TestV2AEMode)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV2 configuration(simpleEncryptionMaterials);

    static const char* objectKey = "TestV2AEKey";

    S3EncryptionClientV2 client(configuration, s3ClientConfig);

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
    AWS_EXPECT_SUCCESS(getObjectResult);

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(TEST_STRING, responseStringStream.str().c_str());

    auto metadata = getObjectResult.GetResult().GetMetadata();

    //= ../specification/s3-encryption/data-format/content-metadata.md#content-metadata-mapkeys
    //= type=test
    //# - The mapkey "x-amz-key-v2" MUST be present for V2 format objects.
    //# - The mapkey "x-amz-matdesc" MUST be present for V2 format objects.
    //# - The mapkey "x-amz-iv" MUST be present for V2 format objects.
    //# - The mapkey "x-amz-wrap-alg" MUST be present for V2 format objects.
    //# - The mapkey "x-amz-cek-alg" MUST be present for V2 format objects.
    //# - The mapkey "x-amz-tag-len" MUST be present for V2 format objects.

    auto cekStr = metadata["x-amz-key-v2"];
    auto matdesc = metadata["x-amz-matdesc"];
    auto ivStr = metadata["x-amz-iv"];
    auto alg = metadata["x-amz-wrap-alg"];
    auto aad = metadata["x-amz-cek-alg"];
    auto tagLenStr = metadata["x-amz-tag-len"];
    EXPECT_FALSE(cekStr.empty());
    EXPECT_STREQ("{}", matdesc.c_str());
    EXPECT_FALSE(ivStr.empty());
    EXPECT_STREQ("AES/GCM", alg.c_str());
    EXPECT_STREQ("AES/GCM/NoPadding", aad.c_str());
    EXPECT_FALSE(aad.empty());
    EXPECT_STREQ("128", tagLenStr.c_str());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::GCM);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    cryptoMaterial.SetCryptoTagLength(static_cast<size_t>(StringUtils::ConvertToInt64(tagLenStr.c_str())));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto gcmCipher = CreateAES_GCMImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *gcmCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    AWS_EXPECT_SUCCESS(standardGetObjectResult);
    EXPECT_EQ((cryptoMaterial.GetCryptoTagLength() / 8) + sizeof(TEST_STRING) - 1, static_cast<size_t>(standardGetObjectResult.GetResult().GetContentLength()));

    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()) - (cryptoMaterial.GetCryptoTagLength() / 8));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str(), comparisonStream.str().length());
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    AWS_EXPECT_SUCCESS(deleteResult);
}

TEST_F(LiveClientTest, TestV2AEModeRangeGetPass)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV2 configuration(simpleEncryptionMaterials);
    configuration.SetUnAuthenticatedRangeGet(RangeGetMode::ALL);
    S3EncryptionClientV2 client(configuration, s3ClientConfig);

    static const char* objectKey = "TestV2AERangeGetKey";

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

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto ivStr = metadata["x-amz-iv"];
    auto cekStr = metadata["x-amz-key-v2"];
    auto tagLenStr = metadata["x-amz-tag-len"];
    auto aad = metadata["x-amz-cek-alg"];
    EXPECT_FALSE(ivStr.empty());
    EXPECT_FALSE(cekStr.empty());
    EXPECT_FALSE(tagLenStr.empty());
    EXPECT_STREQ("128", tagLenStr.c_str());
    EXPECT_FALSE(aad.empty());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::GCM);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    cryptoMaterial.SetCryptoTagLength(static_cast<size_t>(StringUtils::ConvertToInt64(tagLenStr.c_str())));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto gcmCipher = CreateAES_GCMImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *gcmCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(RANGE_GET_STR);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    AWS_EXPECT_SUCCESS(standardGetObjectResult);
    EXPECT_EQ(sizeof(RANGE_GET_TEST_STRING) - 1, static_cast<size_t>(standardGetObjectResult.GetResult().GetContentLength()));

    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    //we just want to compare the actual range we fetched. range was bytes=38-75
    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str() + 38, 75 - 38 + 1);
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    AWS_EXPECT_SUCCESS(deleteResult);
}

TEST_F(LiveClientTest, TestV2AEModeRangeGetFailWithoutSetting)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV2 configuration(simpleEncryptionMaterials);
    S3EncryptionClientV2 client(configuration, s3ClientConfig);

    static const char* objectKey = "TestV2AERangeGetKeyFail";

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
    EXPECT_FALSE(getObjectResult.IsSuccess());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    AWS_EXPECT_SUCCESS(deleteResult);
}

TEST_F(LiveClientTest, TestV2AEModeRangeGetPassWithRangeUpperBoundOverflow)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto key = SymmetricCipher::GenerateKey();
    auto simpleEncryptionMaterials = Aws::MakeShared<Materials::SimpleEncryptionMaterialsWithGCMAAD>(ALLOCATION_TAG, key);
    CryptoConfigurationV2 configuration(simpleEncryptionMaterials);
    configuration.SetUnAuthenticatedRangeGet(RangeGetMode::ALL);
    S3EncryptionClientV2 client(configuration, s3ClientConfig);

    static const char* objectKey = "TestAERangeGetKey";

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
    getObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(OVERFLOW_RANGE_GET_STR);

    auto getObjectResult = client.GetObject(getObjectRequest);
    AWS_EXPECT_SUCCESS(getObjectResult);

    Aws::StringStream responseStringStream;
    responseStringStream << getObjectResult.GetResult().GetBody().rdbuf();

    EXPECT_STREQ(OVERFLOW_RANGE_GET_TEST_STRING, responseStringStream.str().c_str());

    auto metadata = getObjectResult.GetResult().GetMetadata();
    auto ivStr = metadata["x-amz-iv"];
    auto cekStr = metadata["x-amz-key-v2"];
    auto tagLenStr = metadata["x-amz-tag-len"];
    auto aad = metadata["x-amz-cek-alg"];
    EXPECT_FALSE(ivStr.empty());
    EXPECT_FALSE(cekStr.empty());
    EXPECT_FALSE(tagLenStr.empty());
    EXPECT_STREQ("128", tagLenStr.c_str());
    EXPECT_FALSE(aad.empty());

    ContentCryptoMaterial cryptoMaterial(ContentCryptoScheme::GCM);
    cryptoMaterial.SetFinalCEK(HashingUtils::Base64Decode(cekStr));
    cryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
    cryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)aad.c_str(), aad.size()));
    cryptoMaterial.SetCryptoTagLength(static_cast<size_t>(StringUtils::ConvertToInt64(tagLenStr.c_str())));
    simpleEncryptionMaterials->DecryptCEK(cryptoMaterial);

    auto gcmCipher = CreateAES_GCMImplementation(cryptoMaterial.GetContentEncryptionKey(), HashingUtils::Base64Decode(ivStr));

    Aws::StringStream comparisonStream;
    Crypto::SymmetricCryptoStream cryptoStream((Aws::OStream&)comparisonStream, CipherMode::Encrypt, *gcmCipher);

    Model::GetObjectRequest getUnencryptedObjectRequest;
    getUnencryptedObjectRequest.WithBucket(BucketName.c_str()).WithKey(objectKey).WithRange(RANGE_GET_STR);
    auto standardGetObjectResult = StandardClient->GetObject(getUnencryptedObjectRequest);

    AWS_EXPECT_SUCCESS(standardGetObjectResult);
    EXPECT_EQ(sizeof(RANGE_GET_TEST_STRING) - 1, static_cast<size_t>(standardGetObjectResult.GetResult().GetContentLength()));

    ByteBuffer rawData(static_cast< size_t >(standardGetObjectResult.GetResult().GetContentLength()));
    memset(rawData.GetUnderlyingData(), 0, rawData.GetLength());
    standardGetObjectResult.GetResult().GetBody().read((char*)rawData.GetUnderlyingData(), rawData.GetLength());

    cryptoStream << TEST_STRING;
    cryptoStream.Finalize();

    //we just want to compare the actual range we fetched. range was bytes=38-75
    ByteBuffer comparisonResult((unsigned char*)comparisonStream.str().c_str() + 38, 75 - 38 + 1);
    EXPECT_STREQ(HashingUtils::HexEncode(comparisonResult).c_str(), HashingUtils::HexEncode(rawData).c_str());

    Model::DeleteObjectRequest deleteObject;
    deleteObject.WithBucket(BucketName.c_str()).WithKey(objectKey);

    auto deleteResult = StandardClient->DeleteObject(deleteObject);
    AWS_EXPECT_SUCCESS(deleteResult);
}

TEST_F(LiveClientTest, TestV2S3EncryptionError)
{
    ClientConfiguration s3ClientConfig;
    s3ClientConfig.region = AWS_TEST_REGION;

    auto kmsMaterials = Aws::MakeShared<Aws::S3Encryption::Materials::KMSWithContextEncryptionMaterials>("s3Encryption", "badKey");
    Aws::S3Encryption::CryptoConfigurationV2 cryptoConfiguration(kmsMaterials);
    auto credentials = Aws::MakeShared<Aws::Auth::DefaultAWSCredentialsProviderChain>("s3Encryption");
    Aws::S3Encryption::S3EncryptionClientV2 encryptionClient(cryptoConfiguration, credentials, s3ClientConfig);

    Model::PutObjectRequest putObjectRequest;
    putObjectRequest.WithBucket("badBucket").WithKey("badKey");

    auto ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << TEST_STRING;
    ss->flush();

    putObjectRequest.SetBody(ss);

    auto putObjectOutcome = encryptionClient.PutObject(putObjectRequest, {});
    ASSERT_FALSE(putObjectOutcome.IsSuccess());
    ASSERT_TRUE(putObjectOutcome.GetError().GetErrorType().IsCryptoError());
    ASSERT_FALSE(putObjectOutcome.GetError().GetErrorType().IsS3Error());
    ASSERT_EQ(CryptoErrors::GENERATE_CONTENT_ENCRYPTION_KEY_FAILED, putObjectOutcome.GetError().GetErrorType().cryptoError);

    Model::GetObjectRequest getObjectRequest;
    getObjectRequest.WithBucket("badBucket").WithKey("badKey");
    auto getObjectOutcome = encryptionClient.GetObject(getObjectRequest);
    ASSERT_FALSE(getObjectOutcome.IsSuccess());
    ASSERT_FALSE(getObjectOutcome.GetError().GetErrorType().IsCryptoError());
    ASSERT_TRUE(getObjectOutcome.GetError().GetErrorType().IsS3Error());
    ASSERT_EQ(Aws::Http::HttpResponseCode::NOT_FOUND, getObjectOutcome.GetError().GetResponseCode());
}
