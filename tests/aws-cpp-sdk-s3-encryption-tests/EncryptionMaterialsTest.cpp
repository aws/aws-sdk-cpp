/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#define AWS_DISABLE_DEPRECATION
#ifndef NO_SYMMETRIC_ENCRYPTION

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/Aws.h>
#include <aws/core/utils/crypto/CryptoBuf.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/crypto/EncryptionMaterials.h>
#include <aws/core/utils/crypto/ContentCryptoMaterial.h>
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/s3-encryption/materials/KMSEncryptionMaterials.h>
#include <aws/kms/KMSClient.h>
#include <aws/kms/model/GenerateDataKeyRequest.h>
#include <aws/kms/model/DecryptRequest.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/ClientConfiguration.h>

using namespace Aws::Client;
using namespace Aws::Utils::Crypto;
using namespace Aws::Utils;
using namespace Aws::S3Encryption::Materials;
using namespace Aws::S3Encryption;
using namespace Aws::KMS;
using namespace Aws::KMS::Model;

static const char* AllocationTag = "EncryptionMaterialsTest";
static const char* TEST_CMK_ID = "ARN:SOME_COMBINATION_OF_LETTERS_AND_NUMBERS";
static const char* GCM_AAD = "AES/GCM/NoPadding";
static size_t GCM_AAD_LENGTH = 17;

//mock KMS client to handle encrypt and decrypt calls
class MockKMSClient : public KMSClient
{
public:
    MockKMSClient(ClientConfiguration clientConfiguration = ClientConfiguration()) :
        KMSClient(Aws::Auth::AWSCredentials("", ""), clientConfiguration), m_genDataKeyCalledCount(0), m_decryptCalledCount(0)
    {
    }

    GenerateDataKeyOutcome GenerateDataKey(const GenerateDataKeyRequest& request) const override
    {
        if (m_customerMasterKeyID != request.GetKeyId())
        {
            return GenerateDataKeyOutcome(AWSError<KMSErrors>(KMSErrors::INCORRECT_KEY, "GenerateContentEncryptionKeyFailed", "Failed to generate content encryption key(CEK)", false/*not retryable*/));
        }
        m_genDataKeyCalledCount++;
        return PopulateSuccessfulGenDataKeyOutcome();
    }
    DecryptOutcome Decrypt(const DecryptRequest&) const override
    {
        m_decryptCalledCount++;
        return PopulateSuccessfulDecryptOutcome();
    }

    void PopulateFields(const Aws::String& customerMasterKeyID, const CryptoBuffer& encryptedKey, const CryptoBuffer& decryptedKey)
    {
        m_customerMasterKeyID = customerMasterKeyID;
        m_encryptedKey = encryptedKey;
        m_decryptedKey = decryptedKey;
    }

    //member variables need to be mutable since Encrypt and Decrypt are const functions
    mutable size_t m_genDataKeyCalledCount;
    mutable size_t m_decryptCalledCount;
    Aws::String m_customerMasterKeyID;
    CryptoBuffer m_encryptedKey;
    CryptoBuffer m_decryptedKey;

private:
    GenerateDataKeyOutcome PopulateSuccessfulGenDataKeyOutcome() const
    {
        GenerateDataKeyOutcome outcome;
        GenerateDataKeyResult result(outcome.GetResult());
        result.SetPlaintext(m_decryptedKey);
        result.SetCiphertextBlob(m_encryptedKey);
        result.SetKeyId(m_customerMasterKeyID);
        return result;
    }

    DecryptOutcome PopulateSuccessfulDecryptOutcome() const
    {
        DecryptOutcome outcome;
        DecryptResult result(outcome.GetResult());
        result.SetPlaintext(m_decryptedKey);
        result.SetKeyId(m_customerMasterKeyID);
        return result;
    }
};

static void InitMockKMSClient(std::shared_ptr<MockKMSClient>& client)
{
    client->PopulateFields(TEST_CMK_ID, SymmetricCipher::GenerateKey(), SymmetricCipher::GenerateKey());
}

namespace
{
    //No current functions.
    class SimpleEncryptionMaterialsTest : public ::testing::Test {};
    class SimpleEncryptionMaterialsWithGCMAADTest : public ::testing::Test {};
    class KMSWithContextEncryptionMaterialsTest : public ::testing::Test {};

    //This is a simple encryption materials encrypt test using a generated symmetric master key with the same encryption materials.
    TEST_F(SimpleEncryptionMaterialsWithGCMAADTest, EncryptDecryptSuccessTest)
    {
        auto masterKey = SymmetricCipher::GenerateKey();
        auto cek = SymmetricCipher::GenerateKey();

        SimpleEncryptionMaterialsWithGCMAAD encryptionMaterials(masterKey);
        //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
        ContentCryptoMaterial contentCryptoMaterial(cek, ContentCryptoScheme::GCM);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        CryptoBuffer aad((const unsigned char*)GCM_AAD, GCM_AAD_LENGTH);
        contentCryptoMaterial.SetGCMAAD(aad);

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);

        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        //test against key wrap cipher
        auto cipher = CreateAES_GCMImplementation(masterKey, contentCryptoMaterial.GetCekIV(), CryptoBuffer(), aad);
        auto encryptBuffer = cipher->EncryptBuffer(cek);
        auto finalizeEncryptBuffer = cipher->FinalizeEncryption();
        CryptoBuffer encrypted({&encryptBuffer, &finalizeEncryptBuffer});
        ASSERT_EQ(encrypted, encryptedContentEncryptionKey);

        //creating a new content crypto material since this is how encryption and decryption will be implemented
        ContentCryptoMaterial encryptedContentCryptoMaterial;
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentEncryptionKey);
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
        encryptedContentCryptoMaterial.SetGCMAAD(aad);
        encryptedContentCryptoMaterial.SetCekIV(contentCryptoMaterial.GetCekIV());
        encryptedContentCryptoMaterial.SetCEKGCMTag(contentCryptoMaterial.GetCEKGCMTag());

        ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);

        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();

        cipher = CreateAES_GCMImplementation(masterKey, encryptedContentCryptoMaterial.GetCekIV(),
            encryptedContentCryptoMaterial.GetCEKGCMTag(), encryptedContentCryptoMaterial.GetGCMAAD());
        auto decryptBuffer = cipher->DecryptBuffer(encrypted);
        auto finalizeDecryptBuffer = cipher->FinalizeDecryption();
        CryptoBuffer decrypted({&decryptBuffer, &finalizeDecryptBuffer});

        ASSERT_EQ(decrypted, decryptedContentEncryptionKey);

        ASSERT_EQ(contentEncryptionKey.GetLength(), decryptedContentEncryptionKey.GetLength());
        //Test for success by comparing decrypted key to original key
        ASSERT_EQ(decryptedContentEncryptionKey, contentEncryptionKey);
    }

    TEST_F(SimpleEncryptionMaterialsWithGCMAADTest, TestUnexpectedKeyLength)
    {
        auto cek = SymmetricCipher::GenerateKey();
        //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
        ContentCryptoMaterial contentCryptoMaterial(cek, ContentCryptoScheme::GCM);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
        CryptoBuffer aad((const unsigned char*)GCM_AAD, GCM_AAD_LENGTH);
        contentCryptoMaterial.SetGCMAAD(aad);

        Aws::Vector<size_t> lengthVector = {0, 2, 3, 5, 8, 16, 26, 31, 33, 64};
        for (const auto& i: lengthVector)
        {
            SimpleEncryptionMaterialsWithGCMAAD encryptionMaterials(SymmetricCipher::GenerateKey(i));
            auto outcome = encryptionMaterials.EncryptCEK(contentCryptoMaterial);
            ASSERT_FALSE(outcome.IsSuccess());
        }

        SimpleEncryptionMaterialsWithGCMAAD encryptionMaterialsGood(SymmetricCipher::GenerateKey(32));
        auto outcomeGood = encryptionMaterialsGood.EncryptCEK(contentCryptoMaterial);
        AWS_ASSERT_SUCCESS(outcomeGood);
    }

    TEST_F(SimpleEncryptionMaterialsWithGCMAADTest, DecryptWithMalformedFinalCEKTest)
    {
        auto masterKey = SymmetricCipher::GenerateKey();
        auto cek = SymmetricCipher::GenerateKey();

        SimpleEncryptionMaterialsWithGCMAAD encryptionMaterials(masterKey);
        //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
        ContentCryptoMaterial contentCryptoMaterial(cek, ContentCryptoScheme::GCM);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        CryptoBuffer aad((const unsigned char*)GCM_AAD, GCM_AAD_LENGTH);
        contentCryptoMaterial.SetGCMAAD(aad);

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);

        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        //test against key wrap cipher
        auto cipher = CreateAES_GCMImplementation(masterKey, contentCryptoMaterial.GetCekIV(), CryptoBuffer(), aad);
        auto encryptBuffer = cipher->EncryptBuffer(cek);
        auto finalizeEncryptBuffer = cipher->FinalizeEncryption();
        CryptoBuffer encrypted({&encryptBuffer, &finalizeEncryptBuffer});
        ASSERT_EQ(encrypted, encryptedContentEncryptionKey);

        CryptoBuffer iv = contentCryptoMaterial.GetCekIV(), tag = contentCryptoMaterial.GetCEKGCMTag();
        //creating a new content crypto material since this is how encryption and decryption will be implemented
        ContentCryptoMaterial encryptedContentCryptoMaterial;
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_GCM);
        encryptedContentCryptoMaterial.SetGCMAAD(aad);

        // correct case
        encryptedContentCryptoMaterial.SetContentEncryptionKey(CryptoBuffer()); //reset
        encryptedContentCryptoMaterial.SetFinalCEK(CryptoBuffer({&iv, &encryptedContentEncryptionKey, &tag}));
        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_EQ(contentEncryptionKey, decryptedContentEncryptionKey);

        // too small key
        encryptedContentCryptoMaterial.SetContentEncryptionKey(CryptoBuffer()); //reset
        encryptedContentCryptoMaterial.SetFinalCEK(CryptoBuffer({&iv, &tag}));
        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_NE(contentEncryptionKey, decryptedContentEncryptionKey);

        // too long key
        encryptedContentCryptoMaterial.SetContentEncryptionKey(CryptoBuffer()); //reset
        encryptedContentCryptoMaterial.SetFinalCEK(CryptoBuffer({&iv, &encryptedContentEncryptionKey, &encryptedContentEncryptionKey, &tag}));
        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_NE(contentEncryptionKey, decryptedContentEncryptionKey);

        // corrupted key
        CryptoBuffer corruptedKey(encryptedContentEncryptionKey.GetLength());
        encryptedContentCryptoMaterial.SetContentEncryptionKey(CryptoBuffer()); //reset
        encryptedContentCryptoMaterial.SetFinalCEK(CryptoBuffer({&iv, &corruptedKey, &tag}));
        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_NE(contentEncryptionKey, decryptedContentEncryptionKey);

        // no tag
        encryptedContentCryptoMaterial.SetContentEncryptionKey(CryptoBuffer()); //reset
        encryptedContentCryptoMaterial.SetFinalCEK(CryptoBuffer({&iv, &encryptedContentEncryptionKey}));
        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_NE(contentEncryptionKey, decryptedContentEncryptionKey);

        // only have iv
        encryptedContentCryptoMaterial.SetContentEncryptionKey(CryptoBuffer()); //reset
        encryptedContentCryptoMaterial.SetFinalCEK(CryptoBuffer({&iv}));
        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_NE(contentEncryptionKey, decryptedContentEncryptionKey);

        // only have iv
        CryptoBuffer shortIV(10);
        encryptedContentCryptoMaterial.SetContentEncryptionKey(CryptoBuffer()); //reset
        encryptedContentCryptoMaterial.SetFinalCEK(CryptoBuffer({&shortIV}));
        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_NE(contentEncryptionKey, decryptedContentEncryptionKey);
    }

    //This tests Simple Encryption Materials by attempting to encrypt and decrypt with separate
    //    materials which have the same master key.
    TEST_F(SimpleEncryptionMaterialsTest, EncryptDecrypyWithDifferentMaterialsSuccess)
    {
        auto masterKey = SymmetricCipher::GenerateKey();

        SimpleEncryptionMaterials encryptionMaterials(masterKey);
        //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
        ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::CTR);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);

        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        //test against key wrap cipher
        auto cipher = CreateAES_KeyWrapImplementation(masterKey);
        auto encryptBuffer = cipher->EncryptBuffer(contentEncryptionKey);
        auto finalizeEncryptBuffer = cipher->FinalizeEncryption();
        ASSERT_EQ(finalizeEncryptBuffer, encryptedContentEncryptionKey);

        //creating a new content crypto material since this is how encryption and decryption will be implemented
        ContentCryptoMaterial encryptedContentCryptoMaterial;
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentEncryptionKey);
        encryptedContentCryptoMaterial.SetFinalCEK(encryptedContentEncryptionKey);
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);

        ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);

        SimpleEncryptionMaterials otherEncryptionMaterials(masterKey);

        otherEncryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();

        cipher = CreateAES_KeyWrapImplementation(masterKey);
        auto decryptBuffer = cipher->DecryptBuffer(finalizeEncryptBuffer);
        auto finalizeDecryptBuffer = cipher->FinalizeDecryption();
        ASSERT_EQ(finalizeDecryptBuffer, decryptedContentEncryptionKey);

        ASSERT_EQ(contentEncryptionKey.GetLength(), decryptedContentEncryptionKey.GetLength());
        //Test for success by comparing decrypted key to original key
        ASSERT_EQ(decryptedContentEncryptionKey, contentEncryptionKey);
    }

    //This tests Simple Encryption Materials by using different materials with different master keys
    //  and making sure the decrypted key is not correct.
    TEST_F(SimpleEncryptionMaterialsTest, EncryptDecryptWithDifferentKeysFailure)
    {
        auto masterKey = SymmetricCipher::GenerateKey();
        auto otherMasterKey = SymmetricCipher::GenerateKey();

        SimpleEncryptionMaterials encryptionMaterials(masterKey);
        //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
        ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::CTR);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);

        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        //test against key wrap cipher
        auto cipher = CreateAES_KeyWrapImplementation(masterKey);
        auto encryptBuffer = cipher->EncryptBuffer(contentEncryptionKey);
        auto finalizeEncryptBuffer = cipher->FinalizeEncryption();
        ASSERT_EQ(finalizeEncryptBuffer, encryptedContentEncryptionKey);

        //creating a new content crypto material since this is how encryption and decryption will be implemented
        ContentCryptoMaterial encryptedContentCryptoMaterial;
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentEncryptionKey);
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);

        ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);

        SimpleEncryptionMaterials otherEncryptionMaterials(otherMasterKey);

        otherEncryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();

        cipher = CreateAES_KeyWrapImplementation(otherMasterKey);
        auto decryptBuffer = cipher->DecryptBuffer(finalizeEncryptBuffer);
        auto finalizeDecryptBuffer = cipher->FinalizeDecryption();
        ASSERT_EQ(finalizeDecryptBuffer, decryptedContentEncryptionKey);

        ASSERT_EQ(decryptedContentEncryptionKey.GetLength(), 0u);
        ASSERT_NE(contentEncryptionKey.GetLength(), decryptedContentEncryptionKey.GetLength());
        //Test for failure by comparing decrypted key to original key
        ASSERT_NE(decryptedContentEncryptionKey, contentEncryptionKey);
    }

    TEST_F(SimpleEncryptionMaterialsTest, DecryptWithMalformedEncryptedKey)
    {
        auto masterKey = SymmetricCipher::GenerateKey();

        SimpleEncryptionMaterials encryptionMaterials(masterKey);
        //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
        ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::GCM);

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);
        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        //test against key wrap cipher
        auto cipher = CreateAES_KeyWrapImplementation(masterKey);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
        auto encryptBuffer = cipher->EncryptBuffer(contentEncryptionKey);
        auto finalizeEncryptBuffer = cipher->FinalizeEncryption();
        ASSERT_EQ(finalizeEncryptBuffer, encryptedContentEncryptionKey);

        ContentCryptoMaterial encryptedContentCryptoMaterial;
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentEncryptionKey);
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);

        // correct case
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentEncryptionKey);
        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_EQ(contentEncryptionKey, decryptedContentEncryptionKey);

        // too small encrypted key
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(CryptoBuffer(encryptedContentEncryptionKey.GetUnderlyingData(), encryptedContentEncryptionKey.GetLength() / 3));
        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_NE(contentEncryptionKey, decryptedContentEncryptionKey);

        // too long encrypted key
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(CryptoBuffer({&encryptedContentEncryptionKey, &encryptedContentEncryptionKey}));
        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_NE(contentEncryptionKey, decryptedContentEncryptionKey);

        // corrupted key
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(CryptoBuffer(encryptedContentEncryptionKey.GetLength()));
        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_NE(contentEncryptionKey, decryptedContentEncryptionKey);
    }

    //This test simple encryption materials by setting the key wrap algorithm to KMS to see if
    //  it will not decrypt the encrypted content encryption key.
    TEST_F(SimpleEncryptionMaterialsWithGCMAADTest, EncryptDecryptWithWrongKeyWrapAlgorithm)
    {
        auto masterKey = SymmetricCipher::GenerateKey();
        auto cek = SymmetricCipher::GenerateKey();

        SimpleEncryptionMaterials encryptionMaterials(masterKey);
        //Crypto Scheme is arbituary at this point, can be CTR, CBC, or GCM
        ContentCryptoMaterial contentCryptoMaterial(cek, ContentCryptoScheme::CTR);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);

        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        //test against key wrap cipher
        auto cipher = CreateAES_KeyWrapImplementation(masterKey);
        auto encryptBuffer = cipher->EncryptBuffer(contentEncryptionKey);
        auto finalizeEncryptBuffer = cipher->FinalizeEncryption();
        ASSERT_EQ(finalizeEncryptBuffer, encryptedContentEncryptionKey);

        //creating a new content crypto material since this is how encryption and decryption will be implemented
        ContentCryptoMaterial encryptedContentCryptoMaterial;
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentEncryptionKey);
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS_CONTEXT);

        ASSERT_NE(contentEncryptionKey, encryptedContentEncryptionKey);

        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentEncryptionKey = encryptedContentCryptoMaterial.GetContentEncryptionKey();

        ASSERT_EQ(decryptedContentEncryptionKey.GetLength(), 0u);
        ASSERT_EQ(encryptedContentCryptoMaterial.GetEncryptedContentEncryptionKey(), encryptedContentEncryptionKey);
    }

    //This tests KMS Encryption Materials Encrypt CEK by using a KMS Client with an invalid customer
    //  master key which will cause an error and the content encryption key will not be encrypted.
    TEST_F(KMSWithContextEncryptionMaterialsTest, TestEncryptCEKInvalidCmkID)
    {
        Aws::String testCmkID = "someRandomCustomerMasterKeyID";
        auto myClient = Aws::MakeShared<MockKMSClient>(AllocationTag, ClientConfiguration());
        KMSWithContextEncryptionMaterials encryptionMaterials(testCmkID, myClient);

        ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::GCM);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        encryptionMaterials.EncryptCEK(contentCryptoMaterial);

        auto newContentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();

        //make sure that the content encryption key never changed since KMS will fail
        // with an invalid customer master key ID
        ASSERT_EQ(contentEncryptionKey, newContentEncryptionKey);
    }

    //This tests KMS Encryption Materials Encrypt CEK by using a mock KMS Client to count encrypt and decrypt calls.
    // This also test for a successful outcome for encrypt and decrypt calls.
    TEST_F(KMSWithContextEncryptionMaterialsTest, TestMockEncryptDecryptCEK)
    {
        auto myClient = Aws::MakeShared<MockKMSClient>(AllocationTag, ClientConfiguration());
        InitMockKMSClient(myClient);

        KMSWithContextEncryptionMaterials encryptionMaterials(TEST_CMK_ID, myClient);

        ContentCryptoMaterial contentCryptoMaterial(ContentCryptoScheme::GCM);
        auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
        encryptionMaterials.EncryptCEK(contentCryptoMaterial);
        auto encryptedContentKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();
        ASSERT_NE(contentEncryptionKey, encryptedContentKey);

        //Use separate crypto material for decryption but add fields to test
        ContentCryptoMaterial encryptedContentCryptoMaterial(ContentCryptoScheme::GCM);
        encryptedContentCryptoMaterial.SetMaterialsDescription(contentCryptoMaterial.GetMaterialsDescription());
        encryptedContentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS_CONTEXT);
        encryptedContentCryptoMaterial.SetEncryptedContentEncryptionKey(encryptedContentKey);

        encryptionMaterials.DecryptCEK(encryptedContentCryptoMaterial);
        auto decryptedContentKey = contentCryptoMaterial.GetContentEncryptionKey();
        ASSERT_NE(encryptedContentKey, decryptedContentKey);

        ASSERT_EQ(myClient->m_genDataKeyCalledCount, 1u);
        ASSERT_EQ(myClient->m_decryptCalledCount, 1u);
        ASSERT_NE(contentEncryptionKey, encryptedContentKey);
        ASSERT_NE(encryptedContentKey, decryptedContentKey);
    }

    //This tests KMS Encryption Materials Decrypt CEK by using a mock KMS Client with an invalid customer master key.
    TEST_F(KMSWithContextEncryptionMaterialsTest, TestInvalidKeyWrapAlgorithmDecryptCEK)
    {
        auto myClient = Aws::MakeShared<MockKMSClient>(AllocationTag, ClientConfiguration());
        KMSWithContextEncryptionMaterials encryptionMaterials(TEST_CMK_ID, myClient);

        ContentCryptoMaterial contentCryptoMaterial;
        contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);
        //randomly generate an encrypted content encryption key
        contentCryptoMaterial.SetEncryptedContentEncryptionKey(SymmetricCipher::GenerateKey());
        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        encryptionMaterials.DecryptCEK(contentCryptoMaterial);

        auto decryptedContentKey = contentCryptoMaterial.GetContentEncryptionKey();

        ASSERT_EQ(decryptedContentKey.GetLength(), 0u);
        ASSERT_NE(encryptedContentEncryptionKey, decryptedContentKey);
        ASSERT_EQ(encryptedContentEncryptionKey, contentCryptoMaterial.GetEncryptedContentEncryptionKey());
        //Decrypt returns early, so counter not incremented
        ASSERT_EQ(myClient->m_decryptCalledCount, 0u);
        ASSERT_EQ(myClient->m_genDataKeyCalledCount, 0u);
    }

    //This tests KMS Encryption Materials Decrypt CEK by using a mock KMS Client with an invalid materials description.
    TEST_F(KMSWithContextEncryptionMaterialsTest, TestInvalidMaterialsDescriptionDecryptCEK)
    {
        auto myClient = Aws::MakeShared<MockKMSClient>(AllocationTag, ClientConfiguration());
        KMSWithContextEncryptionMaterials encryptionMaterials(TEST_CMK_ID, myClient);

        ContentCryptoMaterial contentCryptoMaterial;
        contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS_CONTEXT);
        contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::GCM);
        contentCryptoMaterial.AddMaterialsDescription(kmsEncryptionContextKey, "");
        //randomly generate an encrypted content encryption key
        contentCryptoMaterial.SetEncryptedContentEncryptionKey(SymmetricCipher::GenerateKey());
        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        encryptionMaterials.DecryptCEK(contentCryptoMaterial);

        auto decryptedContentKey = contentCryptoMaterial.GetContentEncryptionKey();

        ASSERT_EQ(decryptedContentKey.GetLength(), 0u);
        ASSERT_NE(encryptedContentEncryptionKey, decryptedContentKey);
        ASSERT_EQ(encryptedContentEncryptionKey, contentCryptoMaterial.GetEncryptedContentEncryptionKey());
        //Decrypt returns early, so counter not incremented
        ASSERT_EQ(myClient->m_decryptCalledCount, 0u);
        ASSERT_EQ(myClient->m_genDataKeyCalledCount, 0u);
    }

    //This tests KMS Encryption Materials Decrypt CEK by using a mock KMS Client with a missing encrypted key.
    TEST_F(KMSWithContextEncryptionMaterialsTest, TestMissingEncryptedContentKeyDecryptCEK)
    {
        auto myClient = Aws::MakeShared<MockKMSClient>(AllocationTag, ClientConfiguration());
        KMSWithContextEncryptionMaterials encryptionMaterials(TEST_CMK_ID, myClient);

        ContentCryptoMaterial contentCryptoMaterial;
        //Have a crypto material with no encrypted key
        contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::KMS_CONTEXT);
        contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::GCM);
        auto encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();

        encryptionMaterials.DecryptCEK(contentCryptoMaterial);

        auto decryptedContentKey = contentCryptoMaterial.GetContentEncryptionKey();

        ASSERT_EQ(decryptedContentKey.GetLength(), 0u);
        ASSERT_EQ(encryptedContentEncryptionKey, contentCryptoMaterial.GetEncryptedContentEncryptionKey());
        //Decrypt returns early, so counter not incremented
        ASSERT_EQ(myClient->m_decryptCalledCount, 0u);
        ASSERT_EQ(myClient->m_genDataKeyCalledCount, 0u);
    }
}

#endif
