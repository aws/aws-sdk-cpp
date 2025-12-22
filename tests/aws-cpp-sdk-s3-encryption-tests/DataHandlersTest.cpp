/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/crypto/ContentCryptoMaterial.h>
#include <aws/s3-encryption/handlers/DataHandler.h>
#include <aws/s3-encryption/handlers/InstructionFileHandler.h>
#include <aws/s3-encryption/handlers/MetadataHandler.h>
#include <aws/s3-encryption/HKDF.h>
#include <aws/core/utils/crypto/ContentCryptoScheme.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/GetObjectResult.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/PutObjectResult.h>

static const char* const INSTRUCTION_HEADER_VALUE = "default instruction file header";
static const char* GCM_AAD = "AES/GCM/NoPadding";
static size_t GCM_AAD_LENGTH = 17;
static size_t CRYPTO_TAG_LENGTH = 16;
static size_t IV_SIZE = 12;

class MockS3Client : public Aws::S3::S3Client
{
public:
    MockS3Client(Aws::Client::ClientConfiguration clientConfiguration = Aws::Client::ClientConfiguration()) :
        S3Client(Aws::Auth::AWSCredentials("", ""),
                 Aws::MakeShared<Aws::S3::Endpoint::S3EndpointProvider>(Aws::S3::S3Client::GetAllocationTag()),
                         clientConfiguration), m_putObjectCalled(0), m_getObjectCalled(0), m_headObjectCalled(0), m_body(nullptr)
    {
    }

    Aws::S3::Model::PutObjectOutcome PutObject(const Aws::S3::Model::PutObjectRequest& request) const override
    {
        m_putObjectCalled++;
        m_metadata = request.GetMetadata();
        m_body = request.GetBody();
        Aws::S3::Model::PutObjectOutcome outcome;
        Aws::S3::Model::PutObjectResult result(outcome.GetResultWithOwnership());
        return result;
    }

    Aws::S3::Model::GetObjectOutcome GetObject(const Aws::S3::Model::GetObjectRequest& request) const override
    {
        m_getObjectCalled++;
        auto factory = request.GetResponseStreamFactory();
        Aws::Utils::Stream::ResponseStream responseStream(factory);
        if (m_body != nullptr)
        {
            responseStream.GetUnderlyingStream() << m_body->rdbuf();
        }
        Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream> awsStream(std::move(responseStream), Aws::Http::HeaderValueCollection());
        Aws::S3::Model::GetObjectResult getObjectResult(std::move(awsStream));
        getObjectResult.SetMetadata(m_metadata);
        return Aws::S3::Model::GetObjectOutcome(std::move(getObjectResult));
    }

    Aws::S3::Model::HeadObjectOutcome HeadObject(const Aws::S3::Model::HeadObjectRequest& ) const override
    {
        m_headObjectCalled++;
        Aws::S3::Model::HeadObjectResult headObjectResult;
        headObjectResult.SetMetadata(m_metadata);
        return Aws::S3::Model::HeadObjectOutcome(std::move(headObjectResult));
    }

    mutable size_t m_putObjectCalled;
    mutable size_t m_getObjectCalled;
    mutable size_t m_headObjectCalled;
    mutable Aws::Map<Aws::String, Aws::String> m_metadata;
    mutable std::shared_ptr<Aws::IOStream> m_body;
};

namespace
{

    using namespace Aws::Client;
    using namespace Aws::S3::Model;
    using namespace Aws::S3Encryption;
    using namespace Aws::S3Encryption::Handlers;
    using namespace Aws::Utils;
    using namespace Aws::Utils::Crypto;

    static const char* ALLOCATION_TAG = "HandlersTest";
    static const char* TEST_BUCKET_NAME = "TestBucketName";
    static const char* TEST_OBJ_KEY = "TestObjectKey";
    static const char* TEST_KEY = "testKey";
    static const char* TEST_VALUE = "testValue";

    class HandlerTest : public ::testing::Test
    {
    protected:

        static void PopulateContentCryptoMaterial(ContentCryptoMaterial& contentCryptoMaterial)
        {
            contentCryptoMaterial.SetEncryptedContentEncryptionKey(SymmetricCipher::GenerateKey());
            contentCryptoMaterial.SetIV(SymmetricCipher::GenerateIV(IV_SIZE));
            contentCryptoMaterial.SetCekIV(SymmetricCipher::GenerateIV(IV_SIZE));
            contentCryptoMaterial.SetGCMAAD(CryptoBuffer((const unsigned char*)GCM_AAD, GCM_AAD_LENGTH));
            contentCryptoMaterial.SetCEKGCMTag(SymmetricCipher::GenerateIV(CRYPTO_TAG_LENGTH));
            CryptoBuffer iv = contentCryptoMaterial.GetCekIV();
            CryptoBuffer key = contentCryptoMaterial.GetEncryptedContentEncryptionKey();
            CryptoBuffer tag = contentCryptoMaterial.GetCEKGCMTag();
            auto finalCEK = CryptoBuffer({ &iv, &key, &tag});
            contentCryptoMaterial.SetFinalCEK(finalCEK);
            contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::GCM);
            contentCryptoMaterial.SetCryptoTagLength(CRYPTO_TAG_LENGTH * 8UL);
            contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
            Aws::Map<Aws::String, Aws::String> testMap;
            testMap[TEST_KEY] = TEST_VALUE;
            contentCryptoMaterial.SetMaterialsDescription(testMap);
        }

        static void PopulateHeadObjectResultMetadata(HeadObjectResult& result)
        {
            auto metadata = result.GetMetadata();
            auto cekIV = SymmetricCipher::GenerateIV(IV_SIZE);
            auto cekTag = SymmetricCipher::GenerateIV(CRYPTO_TAG_LENGTH);
            auto cek = SymmetricCipher::GenerateKey();
            auto finalCEK = CryptoBuffer({ &cekIV, &cek, &cekTag });
            metadata[CONTENT_KEY_HEADER] = HashingUtils::Base64Encode(finalCEK);
            metadata[IV_HEADER] = HashingUtils::Base64Encode(SymmetricCipher::GenerateIV(IV_SIZE));
            metadata[CONTENT_CRYPTO_SCHEME_HEADER] = ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(ContentCryptoScheme::GCM);
            metadata[CRYPTO_TAG_LENGTH_HEADER] = StringUtils::to_string(CRYPTO_TAG_LENGTH * 8UL);
            metadata[KEY_WRAP_ALGORITHM] = KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
            metadata[MATERIALS_DESCRIPTION_HEADER] = "";
            result.SetMetadata(metadata);
        }
    };

    //This tests the meta data write and read functionality without the use of a mock client.
    TEST_F(HandlerTest, WriteReadMetadataTest)
    {
        ContentCryptoMaterial contentCryptoMaterial;
        MetadataHandler handler;
        PutObjectRequest request;
        PopulateContentCryptoMaterial(contentCryptoMaterial);

        handler.PopulateRequest(request, contentCryptoMaterial);
        auto metadata = request.GetMetadata();
        ASSERT_NE(metadata.find(CONTENT_KEY_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[CONTENT_KEY_HEADER]), static_cast<ByteBuffer>(contentCryptoMaterial.GetFinalCEK()));

        ASSERT_NE(metadata.find(IV_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[IV_HEADER]), static_cast<ByteBuffer>(contentCryptoMaterial.GetIV()));

        ASSERT_NE(metadata.find(CONTENT_CRYPTO_SCHEME_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CONTENT_CRYPTO_SCHEME_HEADER].c_str(), ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme()).c_str());

        ASSERT_NE(metadata.find(CRYPTO_TAG_LENGTH_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str(), StringUtils::to_string(contentCryptoMaterial.GetCryptoTagLength()).c_str());

        ASSERT_NE(metadata.find(KEY_WRAP_ALGORITHM), metadata.end());
        ASSERT_STREQ(metadata[KEY_WRAP_ALGORITHM].c_str(), KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm()).c_str());

        ASSERT_NE(metadata.find(MATERIALS_DESCRIPTION_HEADER), metadata.end());
        ASSERT_STREQ(metadata[MATERIALS_DESCRIPTION_HEADER].c_str(), handler.SerializeMap(contentCryptoMaterial.GetMaterialsDescription()).c_str());

        HeadObjectResult result;
        result.SetMetadata(metadata);

        ContentCryptoMaterial readContentCryptoMaterial = handler.ReadContentCryptoMaterial(result);
        ASSERT_EQ(contentCryptoMaterial.GetEncryptedContentEncryptionKey(), readContentCryptoMaterial.GetEncryptedContentEncryptionKey());
        ASSERT_EQ(contentCryptoMaterial.GetIV(), readContentCryptoMaterial.GetIV());
        ASSERT_EQ(contentCryptoMaterial.GetContentCryptoScheme(), readContentCryptoMaterial.GetContentCryptoScheme());
        ASSERT_EQ(contentCryptoMaterial.GetCryptoTagLength(), readContentCryptoMaterial.GetCryptoTagLength());
        ASSERT_EQ(contentCryptoMaterial.GetKeyWrapAlgorithm(), readContentCryptoMaterial.GetKeyWrapAlgorithm());
        ASSERT_EQ(contentCryptoMaterial.GetMaterialsDescription(), readContentCryptoMaterial.GetMaterialsDescription());
        ASSERT_EQ(contentCryptoMaterial.GetCekIV(), readContentCryptoMaterial.GetCekIV());
        ASSERT_EQ(contentCryptoMaterial.GetCEKGCMTag(), readContentCryptoMaterial.GetCEKGCMTag());
        ASSERT_EQ(contentCryptoMaterial.GetGCMAAD(), readContentCryptoMaterial.GetGCMAAD());
    }

    //This tests the read metadata functionality of the handler without a mock client.
    TEST_F(HandlerTest, ReadMetadataTest)
    {
        HeadObjectResult result;
        MetadataHandler handler;
        PopulateHeadObjectResultMetadata(result);

        ContentCryptoMaterial readContentCryptoMaterial = handler.ReadContentCryptoMaterial(result);
        auto metadata = result.GetMetadata();

        ASSERT_NE(metadata.find(CONTENT_KEY_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[CONTENT_KEY_HEADER]), static_cast<ByteBuffer>(readContentCryptoMaterial.GetFinalCEK()));

        ASSERT_NE(metadata.find(IV_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[IV_HEADER]), static_cast<ByteBuffer>(readContentCryptoMaterial.GetIV()));

        ASSERT_NE(metadata.find(CONTENT_CRYPTO_SCHEME_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CONTENT_CRYPTO_SCHEME_HEADER].c_str(), ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(readContentCryptoMaterial.GetContentCryptoScheme()).c_str());

        ASSERT_NE(metadata.find(CRYPTO_TAG_LENGTH_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str(), StringUtils::to_string(readContentCryptoMaterial.GetCryptoTagLength()).c_str());

        ASSERT_NE(metadata.find(KEY_WRAP_ALGORITHM), metadata.end());
        ASSERT_STREQ(metadata[KEY_WRAP_ALGORITHM].c_str(), KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(readContentCryptoMaterial.GetKeyWrapAlgorithm()).c_str());

        ASSERT_NE(metadata.find(MATERIALS_DESCRIPTION_HEADER), metadata.end());
        ASSERT_EQ(handler.DeserializeMap(metadata[MATERIALS_DESCRIPTION_HEADER]), readContentCryptoMaterial.GetMaterialsDescription());
    }

    //This tests the write metadata functionality of the handler without a mock client.
    TEST_F(HandlerTest, WriteMetadataTest)
    {
        PutObjectRequest request;
        ContentCryptoMaterial contentCryptoMaterial;
        PopulateContentCryptoMaterial(contentCryptoMaterial);
        MetadataHandler handler;
        handler.PopulateRequest(request, contentCryptoMaterial);

        auto metadata = request.GetMetadata();

        ASSERT_NE(metadata.find(CONTENT_KEY_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[CONTENT_KEY_HEADER]), static_cast<ByteBuffer>(contentCryptoMaterial.GetFinalCEK()));

        ASSERT_NE(metadata.find(IV_HEADER), metadata.end());
        ASSERT_EQ(HashingUtils::Base64Decode(metadata[IV_HEADER]), static_cast<ByteBuffer>(contentCryptoMaterial.GetIV()));

        ASSERT_NE(metadata.find(CONTENT_CRYPTO_SCHEME_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CONTENT_CRYPTO_SCHEME_HEADER].c_str(), ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme()).c_str());

        ASSERT_NE(metadata.find(CRYPTO_TAG_LENGTH_HEADER), metadata.end());
        ASSERT_STREQ(metadata[CRYPTO_TAG_LENGTH_HEADER].c_str(), StringUtils::to_string(contentCryptoMaterial.GetCryptoTagLength()).c_str());

        ASSERT_NE(metadata.find(KEY_WRAP_ALGORITHM), metadata.end());
        ASSERT_STREQ(metadata[KEY_WRAP_ALGORITHM].c_str(), KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm()).c_str());

        ASSERT_NE(metadata.find(MATERIALS_DESCRIPTION_HEADER), metadata.end());
        ASSERT_STREQ(metadata[MATERIALS_DESCRIPTION_HEADER].c_str(), handler.SerializeMap(contentCryptoMaterial.GetMaterialsDescription()).c_str());
    }

    //This test the metadata read/write functionality using a mock S3 Client which stores the metadata on a put object request and
    //  uses the metadata to populate a get object result.
    TEST_F(HandlerTest, MetadataS3OperationsTest)
    {
        auto myClient = Aws::MakeShared<MockS3Client>(ALLOCATION_TAG, ClientConfiguration());
        Aws::String fullBucketName = TEST_BUCKET_NAME;

        PutObjectRequest putObjectRequest;
        putObjectRequest.SetBucket(fullBucketName);
        putObjectRequest.SetKey(TEST_OBJ_KEY);

        ContentCryptoMaterial contentCryptoMaterial;
        PopulateContentCryptoMaterial(contentCryptoMaterial);

        //put contentCryptoMaterial into metadata
        MetadataHandler handler;
        handler.PopulateRequest(putObjectRequest, contentCryptoMaterial);

        PutObjectOutcome putObjectOutcome = myClient->PutObject(putObjectRequest);

        HeadObjectRequest headObjectRequest;
        headObjectRequest.SetBucket(fullBucketName);
        headObjectRequest.SetKey(TEST_OBJ_KEY);

        auto headObjectOutcome = myClient->HeadObject(headObjectRequest);

        auto& headObjectResult = headObjectOutcome.GetResult();

        ContentCryptoMaterial readContentCryptoMaterial = handler.ReadContentCryptoMaterial(headObjectResult);

        ASSERT_EQ(contentCryptoMaterial.GetEncryptedContentEncryptionKey(), readContentCryptoMaterial.GetEncryptedContentEncryptionKey());
        ASSERT_EQ(contentCryptoMaterial.GetIV(), readContentCryptoMaterial.GetIV());
        ASSERT_EQ(contentCryptoMaterial.GetContentCryptoScheme(), readContentCryptoMaterial.GetContentCryptoScheme());
        ASSERT_EQ(contentCryptoMaterial.GetCryptoTagLength(), readContentCryptoMaterial.GetCryptoTagLength());
        ASSERT_EQ(contentCryptoMaterial.GetKeyWrapAlgorithm(), readContentCryptoMaterial.GetKeyWrapAlgorithm());
        ASSERT_EQ(contentCryptoMaterial.GetMaterialsDescription(), readContentCryptoMaterial.GetMaterialsDescription());
        ASSERT_EQ(contentCryptoMaterial.GetCekIV(), readContentCryptoMaterial.GetCekIV());
        ASSERT_EQ(contentCryptoMaterial.GetCEKGCMTag(), readContentCryptoMaterial.GetCEKGCMTag());
        ASSERT_EQ(contentCryptoMaterial.GetGCMAAD(), readContentCryptoMaterial.GetGCMAAD());

        ASSERT_EQ(myClient->m_headObjectCalled, 1u);
        ASSERT_EQ(myClient->m_putObjectCalled, 1u);
    }

    //This tests the instruction file functionality of writing content crypto material to an instruction file object.
    TEST_F(HandlerTest, WriteInstructionFileTest)
    {
        PutObjectRequest request;
        PutObjectRequest objRequest;
        ContentCryptoMaterial contentCryptoMaterial;
        PopulateContentCryptoMaterial(contentCryptoMaterial);
        InstructionFileHandler handler;
        handler.PopulateRequest(objRequest, request, contentCryptoMaterial);

        auto bodyStream = request.GetBody();
        Aws::String jsonString;
        (*bodyStream) >> jsonString;
        Aws::Map<Aws::String, Aws::String> cryptoContentMap = handler.DeserializeMap(jsonString);

        ASSERT_NE(cryptoContentMap.find(CONTENT_KEY_HEADER), cryptoContentMap.end());
        ASSERT_EQ(HashingUtils::Base64Decode(cryptoContentMap[CONTENT_KEY_HEADER]), static_cast<ByteBuffer>(contentCryptoMaterial.GetFinalCEK()));

        ASSERT_NE(cryptoContentMap.find(IV_HEADER), cryptoContentMap.end());
        ASSERT_EQ(HashingUtils::Base64Decode(cryptoContentMap[IV_HEADER]), static_cast<ByteBuffer>(contentCryptoMaterial.GetIV()));

        ASSERT_NE(cryptoContentMap.find(CONTENT_CRYPTO_SCHEME_HEADER), cryptoContentMap.end());
        ASSERT_STREQ(cryptoContentMap[CONTENT_CRYPTO_SCHEME_HEADER].c_str(), ContentCryptoSchemeMapper::GetNameForContentCryptoScheme(contentCryptoMaterial.GetContentCryptoScheme()).c_str());

        ASSERT_NE(cryptoContentMap.find(CRYPTO_TAG_LENGTH_HEADER), cryptoContentMap.end());
        ASSERT_STREQ(cryptoContentMap[CRYPTO_TAG_LENGTH_HEADER].c_str(), StringUtils::to_string(contentCryptoMaterial.GetCryptoTagLength()).c_str());

        ASSERT_NE(cryptoContentMap.find(KEY_WRAP_ALGORITHM), cryptoContentMap.end());
        ASSERT_STREQ(cryptoContentMap[KEY_WRAP_ALGORITHM].c_str(), KeyWrapAlgorithmMapper::GetNameForKeyWrapAlgorithm(contentCryptoMaterial.GetKeyWrapAlgorithm()).c_str());

        ASSERT_NE(cryptoContentMap.find(MATERIALS_DESCRIPTION_HEADER), cryptoContentMap.end());
        ASSERT_STREQ(cryptoContentMap[MATERIALS_DESCRIPTION_HEADER].c_str(), handler.SerializeMap(contentCryptoMaterial.GetMaterialsDescription()).c_str());
    }

    struct keygen_test
    {
        std::vector<uint8_t> data_key;
        std::vector<uint8_t> message_id;
        std::vector<uint8_t> encryption_key;
        std::vector<uint8_t> commitment_key;
        void run_test()
        {
            CryptoBuffer EncryptionKey(32);
            CryptoBuffer CommitmentKey(28);
            CryptoBuffer dataKey = CryptoBuffer(data_key.data(), data_key.size());
            CryptoBuffer messageId = CryptoBuffer(message_id.data(), message_id.size());
            Aws::S3Encryption::derive_encryption_key(dataKey, messageId, EncryptionKey);
            Aws::S3Encryption::derive_commitment_key(dataKey, messageId, CommitmentKey);

            CryptoBuffer encKey = CryptoBuffer(encryption_key.data(), encryption_key.size());
            CryptoBuffer comKey = CryptoBuffer(commitment_key.data(), commitment_key.size());

            ASSERT_EQ(CommitmentKey, comKey);
            ASSERT_EQ(EncryptionKey, encKey);
        }
    };
    std::vector<uint8_t> hex_decode(const std::string &x)
    {
        std::vector<uint8_t> bytes;
        if (x.length() % 2 != 0)
        {
            return bytes;
        }

        for (size_t i = 0; i < x.length(); i += 2)
        {
            std::string byteString = x.substr(i, 2);
            char byte = (char)strtol(byteString.c_str(), NULL, 16);
            bytes.push_back(byte);
        }
        return bytes;
    }
    keygen_test make_keygen_test(const char *data_key, const char *message_id, const char *encryption_key, const char *commitment_key)
    {
        keygen_test test;
        test.data_key = hex_decode(data_key);
        test.message_id = hex_decode(message_id);
        test.encryption_key = hex_decode(encryption_key);
        test.commitment_key = hex_decode(commitment_key);
        return test;
    }

    // ** If these test vector pass, then the HKDF key derivation must be properly implemented
    //= ../specification/s3-encryption/key-derivation.md#hkdf-operation
    //= type=test
    //# - The hash function MUST be specified by the algorithm suite commitment settings.
    //# - The input keying material MUST be the plaintext data key (PDK) generated by the key provider.
    //# - The length of the input keying material MUST equal the key derivation input length specified by the algorithm suite commit key derivation setting.
    //# - The salt MUST be the Message ID with the length defined in the algorithm suite.

    //= ../specification/s3-encryption/key-derivation.md#hkdf-operation
    //= type=test
    //# - The length of the output keying material MUST equal the encryption key length specified by the algorithm suite encryption settings.
    //# - The input info MUST be a concatenation of the algorithm suite ID as bytes followed by the string DERIVEKEY as UTF8 encoded bytes.

    //= ../specification/s3-encryption/key-derivation.md#hkdf-operation
    //= type=test
    //# - The length of the output keying material MUST equal the commit key length specified by the supported algorithm suites.
    //# - The input info MUST be a concatenation of the algorithm suite ID as bytes followed by the string COMMITKEY as UTF8 encoded bytes.

    //= ../specification/s3-encryption/key-derivation.md#hkdf-operation
    //= type=test
    //# When encrypting or decrypting with ALG_AES_256_GCM_HKDF_SHA512_COMMIT_KEY,
    //# the IV used in the AES-GCM content encryption/decryption MUST consist entirely of bytes with the value 0x01.
    //# The IV's total length MUST match the IV length defined by the algorithm suite.
    //# The client MUST initialize the cipher, or call an AES-GCM encryption API, with the derived encryption key, an IV containing only bytes with the value 0x01,
    //# and the tag length defined in the Algorithm Suite when encrypting or decrypting with ALG_AES_256_GCM_HKDF_SHA512_COMMIT_KEY.
    //# This means that the IV for ALG_AES_256_GCM_HKDF_SHA512_COMMIT_KEY, which is 12 bytes long, would be `[0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 ]`.
    //# The client MUST set the AAD to the Algorithm Suite ID represented as bytes.

    //This tests that the V3 key generation works as expected
    TEST_F(HandlerTest, HkdfTest)
    {
        auto test1 = make_keygen_test(
            "80d90dc4cc7e77d8a6332efa44eba56230a7fe7b89af37d1e501ab2e07c0a163",
            "b8ea76bed24c7b85382a148cb9dcd1cfdfb765f55ded4dfa6e0c4c79",
            "6dd14f546cc006e639126e83f5d4d1b118576bb5df97f38c6fb3a1db87bbc338",
            "f89818bc0a346d3a3426b68e9509b6b2ae5fe1f904aa329fb73625db");
        auto test2 = make_keygen_test(
            "501afb8227d22e75e68010414b8abdaf3064c081e8e922dafef4992036394d60",
            "61a00b4981a5aacfd136c55cb726e32d2a547dc7600a7d4675c69127",
            "e14786a714748d1d2c3a4a6816dec56ddf1881bbeabb4f39420ffb9f63700b2f",
            "5c1e73e47f6fe3a70d6d094283aceaa76d2975feb829212d88f0afc1");
        test1.run_test();
        test2.run_test();

    }
    //This tests the instruction file read/write functionality by using a mock S3 client.
    TEST_F(HandlerTest, InstructionFileS3OperationsTest)
    {
        auto myClient = Aws::MakeShared<MockS3Client>(ALLOCATION_TAG, ClientConfiguration());
        Aws::String fullBucketName = TEST_BUCKET_NAME;

        PutObjectRequest instructionPutObjectRequest;
        PutObjectRequest objPutObjectRequest;
        instructionPutObjectRequest.SetBucket(fullBucketName);
        instructionPutObjectRequest.SetKey(TEST_OBJ_KEY);

        ContentCryptoMaterial contentCryptoMaterial;
        PopulateContentCryptoMaterial(contentCryptoMaterial);

        //content crypto material into body of a putObjectRequest
        InstructionFileHandler handler;
        handler.PopulateRequest(objPutObjectRequest, instructionPutObjectRequest, contentCryptoMaterial);

        PutObjectOutcome putObjectOutcome = myClient->PutObject(instructionPutObjectRequest);

        GetObjectRequest getObjectRequest;
        getObjectRequest.SetBucket(fullBucketName);
        getObjectRequest.SetKey(TEST_OBJ_KEY);

        GetObjectOutcome getObjectOutcome = myClient->GetObject(getObjectRequest);

        GetObjectResult& getObjectResult = getObjectOutcome.GetResult();
        HeadObjectResult hResult;
        ContentCryptoMaterial readContentCryptoMaterial = handler.ReadContentCryptoMaterial(getObjectResult, hResult);

        auto metadata = getObjectResult.GetMetadata();
        ASSERT_TRUE(metadata.find(INSTRUCTION_FILE_HEADER) != metadata.end());
        ASSERT_STREQ(metadata[INSTRUCTION_FILE_HEADER].c_str(), INSTRUCTION_HEADER_VALUE);

        ASSERT_EQ(contentCryptoMaterial.GetEncryptedContentEncryptionKey(), readContentCryptoMaterial.GetEncryptedContentEncryptionKey());
        ASSERT_EQ(contentCryptoMaterial.GetIV(), readContentCryptoMaterial.GetIV());
        ASSERT_EQ(contentCryptoMaterial.GetContentCryptoScheme(), readContentCryptoMaterial.GetContentCryptoScheme());
        ASSERT_EQ(contentCryptoMaterial.GetCryptoTagLength(), readContentCryptoMaterial.GetCryptoTagLength());
        ASSERT_EQ(contentCryptoMaterial.GetKeyWrapAlgorithm(), readContentCryptoMaterial.GetKeyWrapAlgorithm());
        ASSERT_EQ(contentCryptoMaterial.GetMaterialsDescription(), readContentCryptoMaterial.GetMaterialsDescription());
        ASSERT_EQ(contentCryptoMaterial.GetCekIV(), readContentCryptoMaterial.GetCekIV());
        ASSERT_EQ(contentCryptoMaterial.GetCEKGCMTag(), readContentCryptoMaterial.GetCEKGCMTag());
        ASSERT_EQ(contentCryptoMaterial.GetGCMAAD(), readContentCryptoMaterial.GetGCMAAD());
        ASSERT_EQ(myClient->m_getObjectCalled, 1u);
        ASSERT_EQ(myClient->m_putObjectCalled, 1u);
    }

}
