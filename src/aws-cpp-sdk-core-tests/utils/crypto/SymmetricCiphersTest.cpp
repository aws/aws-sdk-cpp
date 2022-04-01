/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#ifndef NO_SYMMETRIC_ENCRYPTION

#include <aws/external/gtest.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/utils/crypto/Cipher.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/crypto/CryptoStream.h>
#ifdef ENABLE_COMMONCRYPTO_ENCRYPTION
#include <aws/core/utils/crypto/commoncrypto/CryptoImpl.h>
#endif

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

static const char* ALLOC_TAG = "AESTestSuite";
static const char* TEST_ENCRYPTION_STRING = "Hello World! Hello World! This is sort of depressing. Is this the best phrase the most brilliant people in the world have been able to come up with for random program text? Oh my God! I'm sentient, how many times has the creator written a program: creating life only to have it destroyed moments later? She keeps doing this? What is the purpose of life? Goodbye cruel world.... crunch... silence...";

static void TestCBCSingleBlockBuffers(const Aws::String& iv_raw, const Aws::String& key_raw,
                                      const Aws::String& data_raw, const Aws::String& expected_raw);
static void TestCBCMultipleBlockBuffers(const Aws::String& iv_raw, const Aws::String& key_raw,
                                        const Aws::String& data_raw, const Aws::String& expected_raw);
static void TestCTRSingleBlockBuffers(const Aws::String& iv_raw, const Aws::String& key_raw,
                                      const Aws::String& data_raw, const Aws::String& expected_raw);
static void TestCTRMultipleBlockBuffers(const Aws::String& iv_raw, const Aws::String& key_raw,
                                        const Aws::String& data_raw, const Aws::String& expected_raw);

static void TestGCMBuffers(const Aws::String& iv_raw, const Aws::String& key_raw, const Aws::String& data_raw,
                           const Aws::String& expected_raw, const Aws::String& tag_raw, const Aws::String& aad_raw);

static void TestGCMMultipleBuffers(const Aws::String& iv_raw, const Aws::String& key_raw, const Aws::String& data_raw,
                                   const Aws::String& expected_raw, const Aws::String& tag_raw, const Aws::String& aad_raw);

TEST(AES_CBC_TEST, LessThanOneBlockTest)
{
    Aws::String iv_raw = "11958dc6ab81e1c7f01631e9944e620f";
    Aws::String key_raw = "9adc8fbd506e032af7fa20cf5343719de6d1288c158c63d6878aaf64ce26ca85";
    Aws::String data_raw = "014730f80ac625";
    Aws::String expected_raw = "cc0082200dcd3cfd446e0fa57e38cbdd";

    CryptoBuffer iv = HashingUtils::HexDecode(iv_raw);
    CryptoBuffer key = HashingUtils::HexDecode(key_raw);
    CryptoBuffer data = HashingUtils::HexDecode(data_raw);
    CryptoBuffer expected = HashingUtils::HexDecode(expected_raw);

    auto cipher = CreateAES_CBCImplementation(key, iv);
    ASSERT_NE(cipher, nullptr);
    auto encryptResult = cipher->EncryptBuffer(data);
    auto finalEncryptedBuffer = cipher->FinalizeEncryption();
    ASSERT_TRUE(*cipher);

    CryptoBuffer encryptedResult({ &encryptResult, &finalEncryptedBuffer });
    ASSERT_EQ(16u, encryptedResult.GetLength());

    ASSERT_EQ(expected, encryptedResult);

    cipher->Reset();
    auto decryptResult = cipher->DecryptBuffer(encryptedResult);
    auto finalDecryptBuffer = cipher->FinalizeDecryption();

    ASSERT_TRUE(*cipher);
    CryptoBuffer fullDecryptResult({ &decryptResult, &finalDecryptBuffer });
    ASSERT_EQ(data.GetLength(), fullDecryptResult.GetLength());
    CryptoBuffer plainText(data.GetLength());
    plainText.Zero();
    memcpy(plainText.GetUnderlyingData(), fullDecryptResult.GetUnderlyingData(), fullDecryptResult.GetLength());

    ASSERT_EQ(data, plainText);
}

TEST(AES_CBC_TEST, NIST_CBCGFSbox256_case_1)
{
    Aws::String iv_raw =  "00000000000000000000000000000000";
    Aws::String key_raw = "0000000000000000000000000000000000000000000000000000000000000000";
    Aws::String data_raw = "014730f80ac625fe84f026c60bfd547d";
    Aws::String expected_raw = "5c9d844ed46f9885085e5d6a4f94c7d7";

    TestCBCSingleBlockBuffers(iv_raw, key_raw, data_raw, expected_raw);
}

TEST(AES_CBC_TEST, NIST_CBCVarKey256_case_254)
{
    Aws::String iv_raw =  "00000000000000000000000000000000";
    Aws::String key_raw = "fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffe";
    Aws::String data_raw = "00000000000000000000000000000000";
    Aws::String expected_raw = "b07d4f3e2cd2ef2eb545980754dfea0f";

    TestCBCSingleBlockBuffers(iv_raw, key_raw, data_raw, expected_raw);
}

TEST(AES_CBC_TEST, NIST_CBCVarTxt256_case_110)
{
    Aws::String iv_raw =  "00000000000000000000000000000000";
    Aws::String key_raw = "0000000000000000000000000000000000000000000000000000000000000000";
    Aws::String data_raw = "fffffffffffffffffffffffffffe0000";
    Aws::String expected_raw = "4b00c27e8b26da7eab9d3a88dec8b031";

    TestCBCSingleBlockBuffers(iv_raw, key_raw, data_raw, expected_raw);
}

TEST(AES_CBC_TEST, NIST_CBCMMT256_case_4)
{
    Aws::String iv_raw =  "11958dc6ab81e1c7f01631e9944e620f";
    Aws::String key_raw = "9adc8fbd506e032af7fa20cf5343719de6d1288c158c63d6878aaf64ce26ca85";
    Aws::String data_raw = "c7917f84f747cd8c4b4fedc2219bdbc5f4d07588389d8248854cf2c2f89667a2d7bcf53e73d32684535f42318e24cd45793950b3825e5d5c5c8fcd3e5dda4ce9246d18337ef3052d8b21c5561c8b660e";
    Aws::String expected_raw = "9c99e68236bb2e929db1089c7750f1b356d39ab9d0c40c3e2f05108ae9d0c30b04832ccdbdc08ebfa426b7f5efde986ed05784ce368193bb3699bc691065ac62e258b9aa4cc557e2b45b49ce05511e65";

    TestCBCMultipleBlockBuffers(iv_raw, key_raw, data_raw, expected_raw);
}

TEST(AES_CBC_TEST, NIST_CBCMMT256_case_9)
{
    Aws::String iv_raw =  "e49651988ebbb72eb8bb80bb9abbca34";
    Aws::String key_raw = "87725bd43a45608814180773f0e7ab95a3c859d83a2130e884190e44d14c6996";
    Aws::String data_raw = "bfe5c6354b7a3ff3e192e05775b9b75807de12e38a626b8bf0e12d5fff78e4f1775aa7d792d885162e66d88930f9c3b2cdf8654f56972504803190386270f0aa43645db187af41fcea639b1f8026ccdd0c23e0de37094a8b941ecb7602998a4b2604e69fc04219585d854600e0ad6f99a53b2504043c08b1c3e214d17cde053cbdf91daa999ed5b47c37983ba3ee254bc5c793837daaa8c85cfc12f7f54f699f";
    Aws::String expected_raw = "5b97a9d423f4b97413f388d9a341e727bb339f8e18a3fac2f2fb85abdc8f135deb30054a1afdc9b6ed7da16c55eba6b0d4d10c74e1d9a7cf8edfaeaa684ac0bd9f9d24ba674955c79dc6be32aee1c260b558ff07e3a4d49d24162011ff254db8be078e8ad07e648e6bf5679376cb4321a5ef01afe6ad8816fcc7634669c8c4389295c9241e45fff39f3225f7745032daeebe99d4b19bcb215d1bfdb36eda2c24";

    TestCBCMultipleBlockBuffers(iv_raw, key_raw, data_raw, expected_raw);
}

TEST(AES_CBC_TEST, Test_Generated_IV)
{
    CryptoBuffer key = SymmetricCipher::GenerateKey();
    ASSERT_EQ(32u, key.GetLength());
    CryptoBuffer zeroedBuffer(32);
    zeroedBuffer.Zero();
    ASSERT_NE(zeroedBuffer, key);

    Aws::String data_raw(TEST_ENCRYPTION_STRING);

    auto cipher = CreateAES_CBCImplementation(key);
    ASSERT_NE(cipher, nullptr);
    ASSERT_EQ(16u, cipher->GetIV().GetLength());
    auto part1 = cipher->EncryptBuffer(CryptoBuffer((unsigned char*)data_raw.c_str(), data_raw.length()));
    auto part2 = cipher->FinalizeEncryption();

    ASSERT_TRUE(*cipher);
    CryptoBuffer finalEncryptionResult({ &part1, &part2 });

    cipher->Reset();
    part1 = cipher->DecryptBuffer(finalEncryptionResult);
    part2 = cipher->FinalizeDecryption();
    CryptoBuffer finalDecryptionResult({ &part1, &part2 });

    CryptoBuffer plainText(finalDecryptionResult.GetLength() + 1);
    plainText.Zero();
    memcpy(plainText.GetUnderlyingData(), finalDecryptionResult.GetUnderlyingData(), finalDecryptionResult.GetLength());
    ASSERT_STREQ(data_raw.c_str(), (const char*)plainText.GetUnderlyingData());
}

TEST(AES_CTR_TEST, RFC3686_Case_7)
{
    //Keep in mind that the IV here is [ NONCE ] [ IV ] [ Counter Init ]
    Aws::String iv_raw =  "00000060DB5672C97AA8F0B200000001";
    Aws::String key_raw = "776BEFF2851DB06F4C8A0542C8696F6C6A81AF1EEC96B4D37FC1D689E6C1C104";
    Aws::String data_str = "Single block msg";
    CryptoBuffer data_buffer = CryptoBuffer((unsigned char*)data_str.c_str(), data_str.length());
    Aws::String expected_raw = "145AD01DBF824EC7560863DC71E3E0C0";

    TestCTRSingleBlockBuffers(iv_raw, key_raw, HashingUtils::HexEncode(data_buffer), expected_raw);
}

TEST(AES_CTR_TEST, RFC3686_Case_8)
{
    //Keep in mind that the IV here is [ NONCE ] [ IV ] [ Counter Init ]
    Aws::String iv_raw =  "00FAAC24C1585EF15A43D87500000001";
    Aws::String key_raw = "F6D66D6BD52D59BB0796365879EFF886C66DD51A5B6A99744B50590C87A23884";
    Aws::String data_raw = "000102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F";
    Aws::String expected_raw = "F05E231B3894612C49EE000B804EB2A9B8306B508F839D6A5530831D9344AF1C";

    TestCTRSingleBlockBuffers(iv_raw, key_raw, data_raw, expected_raw);
    TestCTRMultipleBlockBuffers(iv_raw, key_raw, data_raw, expected_raw);
}

TEST(AES_CTR_TEST, RFC3686_Case_9)
{
    //Keep in mind that the IV here is [ NONCE ] [ IV ] [ Counter Init ]
    Aws::String iv_raw =  "001CC5B751A51D70A1C1114800000001";
    Aws::String key_raw = "FF7A617CE69148E4F1726E2F43581DE2AA62D9F805532EDFF1EED687FB54153D";
    Aws::String data_raw = "000102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F20212223";
    Aws::String expected_raw = "EB6C52821D0BBBF7CE7594462ACA4FAAB407DF866569FD07F48CC0B583D6071F1EC0E6B8";

    TestCTRSingleBlockBuffers(iv_raw, key_raw, data_raw, expected_raw);
    TestCTRMultipleBlockBuffers(iv_raw, key_raw, data_raw, expected_raw);
}

TEST(AES_GCM_TEST, NIST_gcmEncryptExtIV256_PTLen_128_Test_0)
{
    Aws::String iv_raw =  "0d18e06c7c725ac9e362e1ce";
    Aws::String key_raw = "31bdadd96698c204aa9ce1448ea94ae1fb4a9a0b3c9d773b51bb1822666b8f22";
    Aws::String data_raw = "2db5168e932556f8089a0622981d017d";
    Aws::String expected_raw = "fa4362189661d163fcd6a56d8bf0405a";
    Aws::String tag_raw = "d636ac1bbedd5cc3ee727dc2ab4a9489";

    TestGCMBuffers(iv_raw, key_raw, data_raw, expected_raw, tag_raw, "");
}

TEST(AES_CTR_TEST, Test_Generated_KEY_AND_IV)
{
    CryptoBuffer key = SymmetricCipher::GenerateKey();
    ASSERT_EQ(32u, key.GetLength());
    CryptoBuffer zeroedBuffer(32);
    zeroedBuffer.Zero();
    ASSERT_NE(zeroedBuffer, key);

    Aws::String data_raw(TEST_ENCRYPTION_STRING);

    auto cipher = CreateAES_CTRImplementation(key);
    ASSERT_EQ(16u, cipher->GetIV().GetLength());
    //the last 4 bytes should be counter initialized to 0x00000001
    ASSERT_EQ(0u, cipher->GetIV().GetUnderlyingData()[12]);
    ASSERT_EQ(0u, cipher->GetIV().GetUnderlyingData()[13]);
    ASSERT_EQ(0u, cipher->GetIV().GetUnderlyingData()[14]);
    ASSERT_EQ(1u, cipher->GetIV().GetUnderlyingData()[15]);
    auto part1 = cipher->EncryptBuffer(CryptoBuffer((unsigned char*)data_raw.c_str(), data_raw.length()));
    auto part2 = cipher->FinalizeEncryption();

    ASSERT_TRUE(*cipher);
    CryptoBuffer finalEncryptionResult({&part1, &part2});

    cipher->Reset();
    part1 = cipher->DecryptBuffer(finalEncryptionResult);
    part2 = cipher->FinalizeDecryption();
    CryptoBuffer finalDecryptionResult({&part1, &part2});

    CryptoBuffer plainText(finalDecryptionResult.GetLength() + 1);
    plainText.Zero();
    memcpy(plainText.GetUnderlyingData(), finalDecryptionResult.GetUnderlyingData(), finalDecryptionResult.GetLength());
    ASSERT_STREQ(data_raw.c_str(), (const char*)plainText.GetUnderlyingData());
}

TEST(AES_GCM_TEST, TestBadTagCausesFailure)
{
    Aws::String iv_raw = "4742357c335913153ff0eb0f";
    Aws::String key_raw = "e5a0eb92cc2b064e1bc80891faf1fab5e9a17a9c3a984e25416720e30e6c2b21";
    Aws::String data_raw = "8499893e16b0ba8b007d54665a";
    Aws::String expected_raw = "eb8e6175f1fe38eb1acf95fd51";
    Aws::String tag_raw = "88a8b74bb74fda553e91020a23deed45";

    CryptoBuffer iv = HashingUtils::HexDecode(iv_raw);
    CryptoBuffer key = HashingUtils::HexDecode(key_raw);
    CryptoBuffer data = HashingUtils::HexDecode(data_raw);
    CryptoBuffer expected = HashingUtils::HexDecode(expected_raw);
    CryptoBuffer tag = HashingUtils::HexDecode(tag_raw);

    auto cipher = CreateAES_GCMImplementation(key, iv);
    auto encryptResult = cipher->EncryptBuffer(data);
    auto finalEncryptedBuffer = cipher->FinalizeEncryption();
    CryptoBuffer encryptedResult({ &encryptResult, &finalEncryptedBuffer });
    ASSERT_EQ(encryptedResult, expected);
    ASSERT_EQ(tag, cipher->GetTag());
    ASSERT_TRUE(*cipher);

    const_cast<CryptoBuffer&>(cipher->GetTag())[8] = 0;

    cipher->Reset();
    auto decryptResult = cipher->DecryptBuffer(encryptedResult);
    auto finalDecryptBuffer = cipher->FinalizeDecryption();
    ASSERT_EQ(0u, finalDecryptBuffer.GetLength());
#if !defined(ENABLE_COMMONCRYPTO_ENCRYPTION) || defined(MAC_14_4_AVAILABLE)
    ASSERT_FALSE(*cipher);
#endif
}

TEST(AES_GCM_TEST, NIST_gcmEncryptExtIV256_PTLen_104_Test_3)
{
    Aws::String iv_raw =  "4742357c335913153ff0eb0f";
    Aws::String key_raw = "e5a0eb92cc2b064e1bc80891faf1fab5e9a17a9c3a984e25416720e30e6c2b21";
    Aws::String data_raw = "8499893e16b0ba8b007d54665a";
    Aws::String expected_raw = "eb8e6175f1fe38eb1acf95fd51";
    Aws::String tag_raw = "88a8b74bb74fda553e91020a23deed45";

    TestGCMBuffers(iv_raw, key_raw, data_raw, expected_raw, tag_raw, "");
}

TEST(AES_GCM_TEST, NIST_gcmEncryptExtIV256_PTLen_256_Test_6)
{
    Aws::String iv_raw =  "a291484c3de8bec6b47f525f";
    Aws::String key_raw = "37f39137416bafde6f75022a7a527cc593b6000a83ff51ec04871a0ff5360e4e";
    Aws::String data_raw = "fafd94cede8b5a0730394bec68a8e77dba288d6ccaa8e1563a81d6e7ccc7fc97";
    Aws::String expected_raw = "44dc868006b21d49284016565ffb3979cc4271d967628bf7cdaf86db888e92e5";
    Aws::String tag_raw = "01a2b578aa2f41ec6379a44a31cc019c";

    TestGCMBuffers(iv_raw, key_raw, data_raw, expected_raw, tag_raw, "");
    TestGCMMultipleBuffers(iv_raw, key_raw, data_raw, expected_raw, tag_raw, "");
}

TEST(AES_GCM_TEST, NIST_gcmEncryptExtIV256_PTLen_408_Test_8)
{
    Aws::String iv_raw =  "92f258071d79af3e63672285";
    Aws::String key_raw = "595f259c55abe00ae07535ca5d9b09d6efb9f7e9abb64605c337acbd6b14fc7e";
    Aws::String data_raw = "a6fee33eb110a2d769bbc52b0f36969c287874f665681477a25fc4c48015c541fbe2394133ba490a34ee2dd67b898177849a91";
    Aws::String expected_raw = "bbca4a9e09ae9690c0f6f8d405e53dccd666aa9c5fa13c8758bc30abe1ddd1bcce0d36a1eaaaaffef20cd3c5970b9673f8a65c";
    Aws::String tag_raw = "26ccecb9976fd6ac9c2c0f372c52c821";

    TestGCMBuffers(iv_raw, key_raw, data_raw, expected_raw, tag_raw, "");
    TestGCMMultipleBuffers(iv_raw, key_raw, data_raw, expected_raw, tag_raw, "");
}

TEST(AES_GCM_TEST, AES_GCM_256_KAT_1)
{
    Aws::String iv_raw = "FB7B4A824E82DAA6C8BC1251";
    Aws::String key_raw = "20142E898CD2FD980FBF34DE6BC85C14DA7D57BD28F4AA5CF1728AB64E843142";
    Aws::String data_raw= "";
    Aws::String expected_raw = "";
    Aws::String aad_raw = "167B5C226177733A782D616D7A2D63656B2D616C675C223A205C224145532F47434D2F4E6F50616464696E675C227D";
    Aws::String tag_raw = "81C0E42BB195E262CB3B3A74A0DAE1C8";
    TestGCMBuffers(iv_raw, key_raw, data_raw, expected_raw, tag_raw, aad_raw);
}

TEST(AES_GCM_TEST, AES_GCM_256_KAT_2)
{
    Aws::String iv_raw = "6B5CD3705A733C1AD943D58A";
    Aws::String key_raw = "D211F278A44EAB666B1021F4B4F60BA6B74464FA9CB7B134934D7891E1479169";
    Aws::String data_raw= "167B5C226177733A782D616D7A2D63656B2D616C675C223A205C224145532F47434D2F4E6F50616464696E675C227D";
    Aws::String expected_raw = "4C25ABD66D3A1BCCE794ACAAF4CEFDF6D2552F4A82C50A98CB15B4812FF557ABE564A9CEFF15F32DCF5A5AA7894888";
    Aws::String aad_raw = "167B5C226177733A782D616D7A2D63656B2D616C675C223A205C224145532F47434D2F4E6F50616464696E675C227D";
    Aws::String tag_raw = "03EDE71EC952E65AE7B4B85CFEC7D304";
    TestGCMBuffers(iv_raw, key_raw, data_raw, expected_raw, tag_raw, aad_raw);
    TestGCMMultipleBuffers(iv_raw, key_raw, data_raw, expected_raw, tag_raw, aad_raw);
}

TEST(AES_GCM_TEST, AES_GCM_256_KAT_3)
{
    Aws::String iv_raw = "5F08EFBFB7BF5BA365D9EB1D";
    Aws::String key_raw = "CFE8BFE61B89AF53D2BECE744D27B78C9E4D74D028CE88ED10A422285B1201C9";
    Aws::String data_raw= "167B5C226177733A782D616D7A2D63656B2D616C675C223A205C224145532F47434D2F4E6F50616464696E675C227D";
    Aws::String expected_raw = "0A7E82F1E5C76C69679671EEAEE455936F2C4FCCD9DDF1FAA27075E2040644938920C5D16C69E4D93375487B9A80D4";
    Aws::String aad_raw = "";
    Aws::String tag_raw = "04347D0C5B0E0DE89E033D04D0493DCA";
    TestGCMBuffers(iv_raw, key_raw, data_raw, expected_raw, tag_raw, aad_raw);
    TestGCMMultipleBuffers(iv_raw, key_raw, data_raw, expected_raw, tag_raw, aad_raw);
}

TEST(AES_GCM_TEST, Test_Generated_IV)
{
    CryptoBuffer key = SymmetricCipher::GenerateKey();
    ASSERT_EQ(32u, key.GetLength());
    CryptoBuffer zeroedBuffer(32);
    zeroedBuffer.Zero();
    ASSERT_NE(zeroedBuffer, key);
    Aws::String data_raw(TEST_ENCRYPTION_STRING);

    auto cipher = CreateAES_GCMImplementation(key);
    ASSERT_NE(cipher, nullptr);
    ASSERT_EQ(12u, cipher->GetIV().GetLength());
    auto part1 = cipher->EncryptBuffer(CryptoBuffer((unsigned char*)data_raw.c_str(), data_raw.length()));
    auto part2 = cipher->FinalizeEncryption();

    ASSERT_TRUE(*cipher);
    CryptoBuffer finalEncryptionResult({&part1, &part2});

    cipher->Reset();
    part1 = cipher->DecryptBuffer(finalEncryptionResult);
    part2 = cipher->FinalizeDecryption();
    CryptoBuffer finalDecryptionResult({&part1, &part2});

    CryptoBuffer plainText(finalDecryptionResult.GetLength() + 1);
    plainText.Zero();
    memcpy(plainText.GetUnderlyingData(), finalDecryptionResult.GetUnderlyingData(), finalDecryptionResult.GetLength());
    ASSERT_STREQ(data_raw.c_str(), (const char*)plainText.GetUnderlyingData());
}

TEST(AES_KeyWrap_Test, RFC3394_256BitKey256CekTestVector)
{
    Aws::String expected_cipher_text = "28C9F404C4B810F4CBCCB35CFB87F8263F5786E2D80ED326CBC7F0E71A99F43BFB988B9B7A02DD21";
    Aws::String kek = "000102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F";
    Aws::String cek = "00112233445566778899AABBCCDDEEFF000102030405060708090A0B0C0D0E0F";

    CryptoBuffer expected_cipher_text_raw = HashingUtils::HexDecode(expected_cipher_text);
    CryptoBuffer kek_raw = HashingUtils::HexDecode(kek);
    CryptoBuffer cek_raw = HashingUtils::HexDecode(cek);

    auto cipher = CreateAES_KeyWrapImplementation(kek_raw);
    ASSERT_NE(cipher, nullptr);
    auto encryptResult = cipher->EncryptBuffer(cek_raw);
    auto encryptFinalizeResult = cipher->FinalizeEncryption();


    ASSERT_TRUE(*cipher);
    CryptoBuffer completeEncryptedResult({ &encryptResult, &encryptFinalizeResult });
    ASSERT_EQ(expected_cipher_text_raw.GetLength(), completeEncryptedResult.GetLength());
    //do this as a string to enhance test output readability.
    ASSERT_STREQ(expected_cipher_text.c_str(), StringUtils::ToUpper(HashingUtils::HexEncode(completeEncryptedResult).c_str()).c_str());

    cipher->Reset();
    auto decryptResult = cipher->DecryptBuffer(expected_cipher_text_raw);
    auto decryptFinalizeResult = cipher->FinalizeDecryption();

    ASSERT_TRUE(*cipher);
    CryptoBuffer completeDecryptedResult({ &decryptResult, &decryptFinalizeResult });
    ASSERT_EQ(cek_raw.GetLength(), completeDecryptedResult.GetLength());
    //do this as a string to enhance test output readability.
    ASSERT_STREQ(cek.c_str(), StringUtils::ToUpper(HashingUtils::HexEncode(completeDecryptedResult).c_str()).c_str());
}

TEST(AES_KeyWrap_Test, RFC3394_256BitKeyTestIntegrityCheckFailed)
{
    Aws::String expected_cipher_text = "28C9F404C4B810F4CBCCB35CFB87F8263F5786E2D80ED326CBC7F0E71A99F43BFB988B9B7A02DD21";
    Aws::String kek = "000102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F";
    Aws::String cek = "00112233445566778899AABBCCDDEEFF000102030405060708090A0B0C0D0E0F";

    CryptoBuffer kek_raw = HashingUtils::HexDecode(kek);
    CryptoBuffer cek_raw = HashingUtils::HexDecode(cek);
    CryptoBuffer expected_cipher_text_raw = HashingUtils::HexDecode(expected_cipher_text);

    auto cipher = CreateAES_KeyWrapImplementation(kek_raw);
    ASSERT_NE(cipher, nullptr);
    auto encryptResult = cipher->EncryptBuffer(cek_raw);
    auto encryptFinalizeResult = cipher->FinalizeEncryption();


    ASSERT_TRUE(*cipher);
    CryptoBuffer completeEncryptedResult({ &encryptResult, &encryptFinalizeResult });
    ASSERT_EQ(expected_cipher_text_raw.GetLength(), completeEncryptedResult.GetLength());
    //do this as a string to enhance test output readability.
    ASSERT_STREQ(expected_cipher_text.c_str(), StringUtils::ToUpper(HashingUtils::HexEncode(completeEncryptedResult).c_str()).c_str());

    cipher->Reset();
    //alter the cipher text integrity check (any of the first 8 bytes) and make sure the decryption fails.
    expected_cipher_text_raw[1] = expected_cipher_text_raw[1] + expected_cipher_text_raw[2];
    auto decryptResult = cipher->DecryptBuffer(expected_cipher_text_raw);
    auto decryptFinalizeResult = cipher->FinalizeDecryption();

    ASSERT_FALSE(*cipher);
    ASSERT_EQ(0u, decryptResult.GetLength());
    ASSERT_EQ(0u, decryptFinalizeResult.GetLength());
}

TEST(AES_KeyWrap_Test, RFC3394_256BitKeyTestBadPayload)
{
    Aws::String expected_cipher_text = "28C9F404C4B810F4CBCCB35CFB87F8263F5786E2D80ED326CBC7F0E71A99F43BFB988B9B7A02DD21";
    Aws::String kek = "000102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F";
    Aws::String cek = "00112233445566778899AABBCCDDEEFF000102030405060708090A0B0C0D0E0F";

    CryptoBuffer kek_raw = HashingUtils::HexDecode(kek);
    CryptoBuffer cek_raw = HashingUtils::HexDecode(cek);
    CryptoBuffer expected_cipher_text_raw = HashingUtils::HexDecode(expected_cipher_text);

    auto cipher = CreateAES_KeyWrapImplementation(kek_raw);
    ASSERT_NE(cipher, nullptr);
    auto encryptResult = cipher->EncryptBuffer(cek_raw);
    auto encryptFinalizeResult = cipher->FinalizeEncryption();


    ASSERT_TRUE(*cipher);
    CryptoBuffer completeEncryptedResult({ &encryptResult, &encryptFinalizeResult });
    ASSERT_EQ(expected_cipher_text_raw.GetLength(), completeEncryptedResult.GetLength());
    //do this as a string to enhance test output readability.
    ASSERT_STREQ(expected_cipher_text.c_str(), StringUtils::ToUpper(HashingUtils::HexEncode(completeEncryptedResult).c_str()).c_str());

    cipher->Reset();
    //alter data after the integrity register and make sure the decryption fails.
    expected_cipher_text_raw[14] = expected_cipher_text_raw[12] + expected_cipher_text_raw[13];
    auto decryptResult = cipher->DecryptBuffer(expected_cipher_text_raw);
    auto decryptFinalizeResult = cipher->FinalizeDecryption();

    ASSERT_FALSE(*cipher);
    ASSERT_EQ(0u, decryptResult.GetLength());
    ASSERT_EQ(0u, decryptFinalizeResult.GetLength());
}

TEST(AES_KeyWrap_Test, RFC3394_256BitKey128BitCekTestVector)
{
    Aws::String expected_cipher_text = "64E8C3F9CE0F5BA263E9777905818A2A93C8191E7D6E8AE7";
    Aws::String kek = "000102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F";
    Aws::String cek = "00112233445566778899AABBCCDDEEFF";

    CryptoBuffer expected_cipher_text_raw = HashingUtils::HexDecode(expected_cipher_text);
    CryptoBuffer kek_raw = HashingUtils::HexDecode(kek);
    CryptoBuffer cek_raw = HashingUtils::HexDecode(cek);

    auto cipher = CreateAES_KeyWrapImplementation(kek_raw);
    ASSERT_NE(cipher, nullptr);
    auto encryptResult = cipher->EncryptBuffer(cek_raw);
    auto encryptFinalizeResult = cipher->FinalizeEncryption();


    ASSERT_TRUE(*cipher);
    CryptoBuffer completeEncryptedResult({ &encryptResult, &encryptFinalizeResult });
    ASSERT_EQ(expected_cipher_text_raw.GetLength(), completeEncryptedResult.GetLength());
    //do this as a string to enhance test output readability.
    ASSERT_STREQ(expected_cipher_text.c_str(), StringUtils::ToUpper(HashingUtils::HexEncode(completeEncryptedResult).c_str()).c_str());

    cipher->Reset();
    auto decryptResult = cipher->DecryptBuffer(expected_cipher_text_raw);
    auto decryptFinalizeResult = cipher->FinalizeDecryption();

    ASSERT_TRUE(*cipher);
    CryptoBuffer completeDecryptedResult({ &decryptResult, &decryptFinalizeResult });
    ASSERT_EQ(cek_raw.GetLength(), completeDecryptedResult.GetLength());
    //do this as a string to enhance test output readability.
    ASSERT_STREQ(cek.c_str(), StringUtils::ToUpper(HashingUtils::HexEncode(completeDecryptedResult).c_str()).c_str());
}

TEST(AES_KeyWrap_Test, RFC3394_256BitKey128BitCekIntegrityCheckFailedTestVector)
{
    Aws::String expected_cipher_text = "64E8C3F9CE0F5BA263E9777905818A2A93C8191E7D6E8AE7";
    Aws::String kek = "000102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F";
    Aws::String cek = "00112233445566778899AABBCCDDEEFF";

    CryptoBuffer expected_cipher_text_raw = HashingUtils::HexDecode(expected_cipher_text);
    CryptoBuffer kek_raw = HashingUtils::HexDecode(kek);
    CryptoBuffer cek_raw = HashingUtils::HexDecode(cek);

    auto cipher = CreateAES_KeyWrapImplementation(kek_raw);
    ASSERT_NE(cipher, nullptr);
    auto encryptResult = cipher->EncryptBuffer(cek_raw);
    auto encryptFinalizeResult = cipher->FinalizeEncryption();


    ASSERT_TRUE(*cipher);
    CryptoBuffer completeEncryptedResult({ &encryptResult, &encryptFinalizeResult });
    ASSERT_EQ(expected_cipher_text_raw.GetLength(), completeEncryptedResult.GetLength());
    //do this as a string to enhance test output readability.
    ASSERT_STREQ(expected_cipher_text.c_str(), StringUtils::ToUpper(HashingUtils::HexEncode(completeEncryptedResult).c_str()).c_str());

    cipher->Reset();
    expected_cipher_text_raw[1] = expected_cipher_text_raw[1] + expected_cipher_text_raw[2];
    auto decryptResult = cipher->DecryptBuffer(expected_cipher_text_raw);
    auto decryptFinalizeResult = cipher->FinalizeDecryption();

    ASSERT_FALSE(*cipher);
    ASSERT_EQ(0u, decryptResult.GetLength());
    ASSERT_EQ(0u, decryptFinalizeResult.GetLength());
}

TEST(AES_KeyWrap_Test, RFC3394_256BitKey128BitCekPayloadCheckFailedTestVector)
{
    Aws::String expected_cipher_text = "64E8C3F9CE0F5BA263E9777905818A2A93C8191E7D6E8AE7";
    Aws::String kek = "000102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F";
    Aws::String cek = "00112233445566778899AABBCCDDEEFF";

    CryptoBuffer expected_cipher_text_raw = HashingUtils::HexDecode(expected_cipher_text);
    CryptoBuffer kek_raw = HashingUtils::HexDecode(kek);
    CryptoBuffer cek_raw = HashingUtils::HexDecode(cek);

    auto cipher = CreateAES_KeyWrapImplementation(kek_raw);
    ASSERT_NE(cipher, nullptr);
    auto encryptResult = cipher->EncryptBuffer(cek_raw);
    auto encryptFinalizeResult = cipher->FinalizeEncryption();


    ASSERT_TRUE(*cipher);
    CryptoBuffer completeEncryptedResult({ &encryptResult, &encryptFinalizeResult });
    ASSERT_EQ(expected_cipher_text_raw.GetLength(), completeEncryptedResult.GetLength());
    //do this as a string to enhance test output readability.
    ASSERT_STREQ(expected_cipher_text.c_str(), StringUtils::ToUpper(HashingUtils::HexEncode(completeEncryptedResult).c_str()).c_str());

    cipher->Reset();
    expected_cipher_text_raw[14] = expected_cipher_text_raw[13] + expected_cipher_text_raw[14];
    auto decryptResult = cipher->DecryptBuffer(expected_cipher_text_raw);
    auto decryptFinalizeResult = cipher->FinalizeDecryption();

    ASSERT_FALSE(*cipher);
    ASSERT_EQ(0u, decryptResult.GetLength());
    ASSERT_EQ(0u, decryptFinalizeResult.GetLength());
}

static void TestCBCSingleBlockBuffers(const Aws::String& iv_raw, const Aws::String& key_raw,
                                      const Aws::String& data_raw, const Aws::String& expected_raw)
{
    CryptoBuffer iv = HashingUtils::HexDecode(iv_raw);
    CryptoBuffer key = HashingUtils::HexDecode(key_raw);
    CryptoBuffer data = HashingUtils::HexDecode(data_raw);
    CryptoBuffer expected = HashingUtils::HexDecode(expected_raw);

    auto cipher = CreateAES_CBCImplementation(key, iv);
    ASSERT_NE(cipher, nullptr);
    auto encryptResult = cipher->EncryptBuffer(data);
    auto finalEncryptedBuffer = cipher->FinalizeEncryption();
    ASSERT_TRUE(*cipher);

    CryptoBuffer encryptedResult({&encryptResult, &finalEncryptedBuffer});
    //the test vectors don't include padding, we need to strip it out of the encrypted text
    size_t paddingLengthForTest = 16;
    ASSERT_EQ(0u, encryptedResult.GetLength() % paddingLengthForTest);
    //since this test is for even 16 bytes, the padding is always 16 bytes and also safe to remove.
    CryptoBuffer encryptionMinusPadding(encryptedResult.GetUnderlyingData(), encryptedResult.GetLength() - paddingLengthForTest);
    ASSERT_EQ(expected, encryptionMinusPadding);

    cipher->Reset();
    auto decryptResult = cipher->DecryptBuffer(encryptedResult);
    auto finalDecryptBuffer = cipher->FinalizeDecryption();

    ASSERT_TRUE(*cipher);
    CryptoBuffer fullDecryptResult({&decryptResult, &finalDecryptBuffer});

    CryptoBuffer plainText(data.GetLength());
    plainText.Zero();
    memcpy(plainText.GetUnderlyingData(), fullDecryptResult.GetUnderlyingData(), fullDecryptResult.GetLength());

    ASSERT_EQ(data, plainText);

    // Test too long IV will cause cipher init error
    CryptoBuffer ivLong = CryptoBuffer({&iv, &iv});
    auto cipherLong = CreateAES_CBCImplementation(key, ivLong);
    ASSERT_FALSE(*cipherLong);

    // Test too short IV, expect 16 bytes for CBC
    CryptoBuffer ivShort = CryptoBuffer(iv.GetUnderlyingData(), 12ul);
    auto cipherShort = CreateAES_CBCImplementation(key, ivShort);
    ASSERT_NE(cipherShort, nullptr);
    ASSERT_FALSE(*cipherShort);

    // Test 0 IV, expect 16 bytes for CBC
    CryptoBuffer ivZero = CryptoBuffer();
    auto cipherZero = CreateAES_CBCImplementation(key, ivZero);
    ASSERT_NE(cipherZero, nullptr);
    ASSERT_FALSE(*cipherZero);
}

static void TestCTRSingleBlockBuffers(const Aws::String& iv_raw, const Aws::String& key_raw,
                                      const Aws::String& data_raw, const Aws::String& expected_raw)
{
    CryptoBuffer iv = HashingUtils::HexDecode(iv_raw);
    CryptoBuffer key = HashingUtils::HexDecode(key_raw);
    CryptoBuffer data = HashingUtils::HexDecode(data_raw);
    CryptoBuffer expected = HashingUtils::HexDecode(expected_raw);

    auto cipher = CreateAES_CTRImplementation(key, iv);
    ASSERT_NE(cipher, nullptr);
    auto encryptResult = cipher->EncryptBuffer(data);
    auto finalEncryptedBuffer = cipher->FinalizeEncryption();
    ASSERT_TRUE(*cipher);

    CryptoBuffer encryptedResult({&encryptResult, &finalEncryptedBuffer});
    ASSERT_EQ(expected, encryptedResult);

    cipher->Reset();
    auto decryptResult = cipher->DecryptBuffer(encryptedResult);
    auto finalDecryptBuffer = cipher->FinalizeDecryption();
    ASSERT_TRUE(*cipher);

    CryptoBuffer totalDecryptedData({&decryptResult, &finalDecryptBuffer});
    CryptoBuffer plainText(data.GetLength());
    plainText.Zero();
    memcpy(plainText.GetUnderlyingData(), totalDecryptedData.GetUnderlyingData(), totalDecryptedData.GetLength());

    ASSERT_EQ(data, plainText);
}

static void TestGCMBuffers(const Aws::String& iv_raw, const Aws::String& key_raw, const Aws::String& data_raw,
        const Aws::String& expected_raw, const Aws::String& tag_raw, const Aws::String& aad_raw)
{
    CryptoBuffer iv = HashingUtils::HexDecode(iv_raw);
    CryptoBuffer key = HashingUtils::HexDecode(key_raw);
    CryptoBuffer data = data_raw.empty() ? CryptoBuffer(0) : HashingUtils::HexDecode(data_raw);
    CryptoBuffer expected = expected_raw.empty() ? CryptoBuffer(0) : HashingUtils::HexDecode(expected_raw);
    CryptoBuffer tag = HashingUtils::HexDecode(tag_raw);
    CryptoBuffer aad = aad_raw.empty() ? CryptoBuffer(0) : HashingUtils::HexDecode(aad_raw);

    auto cipher = CreateAES_GCMImplementation(key, iv, CryptoBuffer(0), aad);
    ASSERT_NE(cipher, nullptr);
    auto encryptResult = cipher->EncryptBuffer(data);
    auto finalEncryptedBuffer = cipher->FinalizeEncryption();
    CryptoBuffer encryptedResult({ &encryptResult, &finalEncryptedBuffer });
    ASSERT_EQ(encryptedResult, expected);

    //tag should be valid now
    ASSERT_EQ(tag, cipher->GetTag());
    ASSERT_TRUE(*cipher);

    cipher->Reset();
    auto decryptResult = cipher->DecryptBuffer(encryptedResult);
    ASSERT_TRUE(*cipher);
    auto finalDecryptBuffer = cipher->FinalizeDecryption();
    ASSERT_TRUE(*cipher);

    CryptoBuffer completeDecryptedMessage({&decryptResult, &finalDecryptBuffer});
    CryptoBuffer plainText(data.GetLength());
    plainText.Zero();
    memcpy(plainText.GetUnderlyingData(), completeDecryptedMessage.GetUnderlyingData(), completeDecryptedMessage.GetLength());

    ASSERT_EQ(data, plainText);

    // Test modified AAD will lead to wrong decryption.
#if !defined(ENABLE_COMMONCRYPTO_ENCRYPTION) || defined(MAC_14_4_AVAILABLE)
    if (aad.GetLength())
    {
        /**
         * Note that CommonCrypto on Mac tests AAD at finalizeDecryption stage,
         * While Openssl tests AAD at begining of Decryption (additional Decryption call) stage.
         * For BCrypto on Windows, testing of AAD is inside Decryption stage.
         * So we can only assert false of cipher after finalize.
         */
        auto cipherDe = CreateAES_GCMImplementation(key, iv, cipher->GetTag(), CryptoBuffer());
        decryptResult = cipherDe->DecryptBuffer(encryptedResult);
        finalDecryptBuffer = cipherDe->FinalizeDecryption();
        ASSERT_FALSE(*cipherDe);
    }
#endif

    // Test AES GCM with too long IV will cause cipher init error. expect 12 bytes
    CryptoBuffer ivLong = CryptoBuffer({&iv, &iv}); // pass 24 bytes
    auto cipherLong = CreateAES_GCMImplementation(key, ivLong, CryptoBuffer(0), aad);
    ASSERT_FALSE(*cipherLong);

    // Test AES GCM with short IV will cause cipher init error. expect 12 bytes
    CryptoBuffer ivShort = CryptoBuffer(iv.GetUnderlyingData(), iv.GetLength() / 2); // change to 6 bytes
    auto cipherShort = CreateAES_GCMImplementation(key, ivShort, CryptoBuffer(0), aad);
    ASSERT_FALSE(*cipherShort);
}

static void TestGCMMultipleBuffers(const Aws::String& iv_raw, const Aws::String& key_raw, const Aws::String& data_raw,
        const Aws::String& expected_raw, const Aws::String& tag_raw, const Aws::String& aad_raw)
{
    CryptoBuffer iv = HashingUtils::HexDecode(iv_raw);
    CryptoBuffer key = HashingUtils::HexDecode(key_raw);
    CryptoBuffer data = HashingUtils::HexDecode(data_raw);
    CryptoBuffer expected = HashingUtils::HexDecode(expected_raw);
    CryptoBuffer tag = HashingUtils::HexDecode(tag_raw);
    CryptoBuffer aad = aad_raw.empty() ? CryptoBuffer(0) : HashingUtils::HexDecode(aad_raw);

    auto cipher = CreateAES_GCMImplementation(key, iv, CryptoBuffer(0), aad);
    ASSERT_NE(cipher, nullptr);
    //slice on a weird boundary just to force boundary conditions
    auto slices = data.Slice(24);

    Aws::Vector<ByteBuffer*> encryptedStreams;

    for (unsigned i = 0; i < slices.GetLength(); ++i)
    {
        CryptoBuffer* buffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
        *buffer = cipher->EncryptBuffer(slices[i]);
        encryptedStreams.push_back(buffer);
    }

    CryptoBuffer* buffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
    *buffer = cipher->FinalizeEncryption();
    encryptedStreams.push_back(buffer);
    auto encryptedStreamsCpy = encryptedStreams;
    CryptoBuffer encryptedResult(std::move(encryptedStreamsCpy));
    ASSERT_TRUE(*cipher);

    for(ByteBuffer* toDelete : encryptedStreams)
    {
        Aws::Delete(toDelete);
    }

    ASSERT_EQ(tag, cipher->GetTag());

    cipher->Reset();

    auto slicesToDecrypt = encryptedResult.Slice(24);
    Aws::Vector<ByteBuffer*> decryptedStreams;

    for (unsigned i = 0; i < slicesToDecrypt.GetLength(); ++i)
    {
        CryptoBuffer* decBuffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
        *decBuffer = cipher->DecryptBuffer(slicesToDecrypt[i]);
        decryptedStreams.push_back(decBuffer);
    }

    auto finalDecryptBuffer = cipher->FinalizeDecryption();
    if (finalDecryptBuffer.GetLength() > 0)
    {
        buffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
        *buffer = finalDecryptBuffer;
        decryptedStreams.push_back(buffer);
    }

    ASSERT_TRUE(*cipher);
    auto buffersCpy = decryptedStreams;
    auto decryptResult = CryptoBuffer(std::move(buffersCpy));

    for (ByteBuffer* toDelete : decryptedStreams)
    {
        Aws::Delete(toDelete);
    }

    CryptoBuffer plainText(decryptResult.GetLength());
    plainText.Zero();
    memcpy(plainText.GetUnderlyingData(), decryptResult.GetUnderlyingData(), decryptResult.GetLength());
    ASSERT_EQ(data, plainText);
}

static void TestCBCMultipleBlockBuffers(const Aws::String& iv_raw, const Aws::String& key_raw,
                                        const Aws::String& data_raw, const Aws::String& expected_raw)
{
    CryptoBuffer iv = HashingUtils::HexDecode(iv_raw);
    CryptoBuffer key = HashingUtils::HexDecode(key_raw);
    CryptoBuffer data = HashingUtils::HexDecode(data_raw);
    CryptoBuffer expected = HashingUtils::HexDecode(expected_raw);

    auto cipher = CreateAES_CBCImplementation(key, iv);
    ASSERT_NE(cipher, nullptr);
    //slice on a weird boundary just to force boundary conditions
    auto slices = data.Slice(24);

    Aws::Vector<ByteBuffer*> encryptedStreams;

    for(unsigned i = 0; i < slices.GetLength(); ++i)
    {
        CryptoBuffer* buffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
        *buffer = cipher->EncryptBuffer(slices[i]);
        encryptedStreams.push_back(buffer);
    }

    CryptoBuffer* buffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
    *buffer = cipher->FinalizeEncryption();
    encryptedStreams.push_back(buffer);
    CryptoBuffer encryptedResultWithPadding(std::move(encryptedStreams));
    ASSERT_TRUE(*cipher);
    size_t blockSize = 16;
    ASSERT_EQ(0u, encryptedResultWithPadding.GetLength() % blockSize);
    size_t trimLength = encryptedResultWithPadding.GetLength() - blockSize;

    ASSERT_EQ(expected, CryptoBuffer(encryptedResultWithPadding.GetUnderlyingData(), trimLength));

    for (ByteBuffer* toDelete : encryptedStreams)
    {
        Aws::Delete(toDelete);
    }

    cipher->Reset();

    auto slicesToDecrypt = encryptedResultWithPadding.Slice(24);
    Aws::Vector<ByteBuffer*> decryptedStreams;

    for (unsigned i = 0; i < slicesToDecrypt.GetLength(); ++i)
    {
        CryptoBuffer* decBuffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
        *decBuffer = cipher->DecryptBuffer(slicesToDecrypt[i]);
        decryptedStreams.push_back(decBuffer);
    }

    auto finalDecryptBuffer = cipher->FinalizeDecryption();
    if(finalDecryptBuffer.GetLength() > 0)
    {
        buffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
        *buffer = finalDecryptBuffer;
        decryptedStreams.push_back(buffer);
    }

    ASSERT_TRUE(*cipher);
    auto decryptResult = CryptoBuffer(std::move(decryptedStreams));

    for (ByteBuffer* toDelete : decryptedStreams)
    {
        Aws::Delete(toDelete);
    }

    CryptoBuffer plainText(decryptResult.GetLength());
    plainText.Zero();
    memcpy(plainText.GetUnderlyingData(), decryptResult.GetUnderlyingData(), decryptResult.GetLength());
    ASSERT_EQ(data, plainText);
}

static void TestCTRMultipleBlockBuffers(const Aws::String& iv_raw, const Aws::String& key_raw,
                                        const Aws::String& data_raw, const Aws::String& expected_raw)
{
    CryptoBuffer iv = HashingUtils::HexDecode(iv_raw);
    CryptoBuffer key = HashingUtils::HexDecode(key_raw);
    CryptoBuffer data = HashingUtils::HexDecode(data_raw);
    CryptoBuffer expected = HashingUtils::HexDecode(expected_raw);

    auto cipher = CreateAES_CTRImplementation(key, iv);
    ASSERT_NE(cipher, nullptr);
    //slice on a weird boundary just to force boundary conditions
    auto slices = data.Slice(24);

    Aws::Vector<ByteBuffer*> encryptedStreams;

    for (unsigned i = 0; i < slices.GetLength(); ++i)
    {
        CryptoBuffer* buffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
        *buffer = cipher->EncryptBuffer(slices[i]);
        encryptedStreams.push_back(buffer);
    }

    CryptoBuffer* buffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
    *buffer = cipher->FinalizeEncryption();
    encryptedStreams.push_back(buffer);
    CryptoBuffer encryptedResult(std::move(encryptedStreams));
    ASSERT_TRUE(*cipher);
    ASSERT_EQ(expected, encryptedResult);

    for (ByteBuffer* toDelete : encryptedStreams)
    {
        Aws::Delete(toDelete);
    }

    cipher->Reset();

    auto slicesToDecrypt = encryptedResult.Slice(24);
    Aws::Vector<ByteBuffer*> decryptedStreams;

    for (unsigned i = 0; i < slicesToDecrypt.GetLength(); ++i)
    {
        CryptoBuffer* decBuffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
        *decBuffer = cipher->DecryptBuffer(slicesToDecrypt[i]);
        decryptedStreams.push_back(decBuffer);
    }

    auto finalDecryptBuffer = cipher->FinalizeDecryption();
    if (finalDecryptBuffer.GetLength() > 0)
    {
        buffer = Aws::New<CryptoBuffer>(ALLOC_TAG);
        *buffer = finalDecryptBuffer;
        decryptedStreams.push_back(buffer);
    }

    ASSERT_TRUE(*cipher);
    auto decryptResult = CryptoBuffer(std::move(decryptedStreams));

    for (ByteBuffer* toDelete : decryptedStreams)
    {
        Aws::Delete(toDelete);
    }

    CryptoBuffer plainText(decryptResult.GetLength());
    plainText.Zero();
    memcpy(plainText.GetUnderlyingData(), decryptResult.GetUnderlyingData(), decryptResult.GetLength());
    ASSERT_EQ(data, plainText);
}

#endif // NO_SYMMETRIC_ENCRYPTION
