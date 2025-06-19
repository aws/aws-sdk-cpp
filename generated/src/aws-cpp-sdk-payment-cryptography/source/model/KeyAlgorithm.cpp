/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PaymentCryptography
  {
    namespace Model
    {
      namespace KeyAlgorithmMapper
      {

        static const int TDES_2KEY_HASH = HashingUtils::HashString("TDES_2KEY");
        static const int TDES_3KEY_HASH = HashingUtils::HashString("TDES_3KEY");
        static const int AES_128_HASH = HashingUtils::HashString("AES_128");
        static const int AES_192_HASH = HashingUtils::HashString("AES_192");
        static const int AES_256_HASH = HashingUtils::HashString("AES_256");
        static const int HMAC_SHA256_HASH = HashingUtils::HashString("HMAC_SHA256");
        static const int HMAC_SHA384_HASH = HashingUtils::HashString("HMAC_SHA384");
        static const int HMAC_SHA512_HASH = HashingUtils::HashString("HMAC_SHA512");
        static const int HMAC_SHA224_HASH = HashingUtils::HashString("HMAC_SHA224");
        static const int RSA_2048_HASH = HashingUtils::HashString("RSA_2048");
        static const int RSA_3072_HASH = HashingUtils::HashString("RSA_3072");
        static const int RSA_4096_HASH = HashingUtils::HashString("RSA_4096");
        static const int ECC_NIST_P256_HASH = HashingUtils::HashString("ECC_NIST_P256");
        static const int ECC_NIST_P384_HASH = HashingUtils::HashString("ECC_NIST_P384");
        static const int ECC_NIST_P521_HASH = HashingUtils::HashString("ECC_NIST_P521");


        KeyAlgorithm GetKeyAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TDES_2KEY_HASH)
          {
            return KeyAlgorithm::TDES_2KEY;
          }
          else if (hashCode == TDES_3KEY_HASH)
          {
            return KeyAlgorithm::TDES_3KEY;
          }
          else if (hashCode == AES_128_HASH)
          {
            return KeyAlgorithm::AES_128;
          }
          else if (hashCode == AES_192_HASH)
          {
            return KeyAlgorithm::AES_192;
          }
          else if (hashCode == AES_256_HASH)
          {
            return KeyAlgorithm::AES_256;
          }
          else if (hashCode == HMAC_SHA256_HASH)
          {
            return KeyAlgorithm::HMAC_SHA256;
          }
          else if (hashCode == HMAC_SHA384_HASH)
          {
            return KeyAlgorithm::HMAC_SHA384;
          }
          else if (hashCode == HMAC_SHA512_HASH)
          {
            return KeyAlgorithm::HMAC_SHA512;
          }
          else if (hashCode == HMAC_SHA224_HASH)
          {
            return KeyAlgorithm::HMAC_SHA224;
          }
          else if (hashCode == RSA_2048_HASH)
          {
            return KeyAlgorithm::RSA_2048;
          }
          else if (hashCode == RSA_3072_HASH)
          {
            return KeyAlgorithm::RSA_3072;
          }
          else if (hashCode == RSA_4096_HASH)
          {
            return KeyAlgorithm::RSA_4096;
          }
          else if (hashCode == ECC_NIST_P256_HASH)
          {
            return KeyAlgorithm::ECC_NIST_P256;
          }
          else if (hashCode == ECC_NIST_P384_HASH)
          {
            return KeyAlgorithm::ECC_NIST_P384;
          }
          else if (hashCode == ECC_NIST_P521_HASH)
          {
            return KeyAlgorithm::ECC_NIST_P521;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyAlgorithm>(hashCode);
          }

          return KeyAlgorithm::NOT_SET;
        }

        Aws::String GetNameForKeyAlgorithm(KeyAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case KeyAlgorithm::NOT_SET:
            return {};
          case KeyAlgorithm::TDES_2KEY:
            return "TDES_2KEY";
          case KeyAlgorithm::TDES_3KEY:
            return "TDES_3KEY";
          case KeyAlgorithm::AES_128:
            return "AES_128";
          case KeyAlgorithm::AES_192:
            return "AES_192";
          case KeyAlgorithm::AES_256:
            return "AES_256";
          case KeyAlgorithm::HMAC_SHA256:
            return "HMAC_SHA256";
          case KeyAlgorithm::HMAC_SHA384:
            return "HMAC_SHA384";
          case KeyAlgorithm::HMAC_SHA512:
            return "HMAC_SHA512";
          case KeyAlgorithm::HMAC_SHA224:
            return "HMAC_SHA224";
          case KeyAlgorithm::RSA_2048:
            return "RSA_2048";
          case KeyAlgorithm::RSA_3072:
            return "RSA_3072";
          case KeyAlgorithm::RSA_4096:
            return "RSA_4096";
          case KeyAlgorithm::ECC_NIST_P256:
            return "ECC_NIST_P256";
          case KeyAlgorithm::ECC_NIST_P384:
            return "ECC_NIST_P384";
          case KeyAlgorithm::ECC_NIST_P521:
            return "ECC_NIST_P521";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyAlgorithmMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
