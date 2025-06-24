/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/SymmetricKeyAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PaymentCryptographyData
  {
    namespace Model
    {
      namespace SymmetricKeyAlgorithmMapper
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


        SymmetricKeyAlgorithm GetSymmetricKeyAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TDES_2KEY_HASH)
          {
            return SymmetricKeyAlgorithm::TDES_2KEY;
          }
          else if (hashCode == TDES_3KEY_HASH)
          {
            return SymmetricKeyAlgorithm::TDES_3KEY;
          }
          else if (hashCode == AES_128_HASH)
          {
            return SymmetricKeyAlgorithm::AES_128;
          }
          else if (hashCode == AES_192_HASH)
          {
            return SymmetricKeyAlgorithm::AES_192;
          }
          else if (hashCode == AES_256_HASH)
          {
            return SymmetricKeyAlgorithm::AES_256;
          }
          else if (hashCode == HMAC_SHA256_HASH)
          {
            return SymmetricKeyAlgorithm::HMAC_SHA256;
          }
          else if (hashCode == HMAC_SHA384_HASH)
          {
            return SymmetricKeyAlgorithm::HMAC_SHA384;
          }
          else if (hashCode == HMAC_SHA512_HASH)
          {
            return SymmetricKeyAlgorithm::HMAC_SHA512;
          }
          else if (hashCode == HMAC_SHA224_HASH)
          {
            return SymmetricKeyAlgorithm::HMAC_SHA224;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SymmetricKeyAlgorithm>(hashCode);
          }

          return SymmetricKeyAlgorithm::NOT_SET;
        }

        Aws::String GetNameForSymmetricKeyAlgorithm(SymmetricKeyAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case SymmetricKeyAlgorithm::NOT_SET:
            return {};
          case SymmetricKeyAlgorithm::TDES_2KEY:
            return "TDES_2KEY";
          case SymmetricKeyAlgorithm::TDES_3KEY:
            return "TDES_3KEY";
          case SymmetricKeyAlgorithm::AES_128:
            return "AES_128";
          case SymmetricKeyAlgorithm::AES_192:
            return "AES_192";
          case SymmetricKeyAlgorithm::AES_256:
            return "AES_256";
          case SymmetricKeyAlgorithm::HMAC_SHA256:
            return "HMAC_SHA256";
          case SymmetricKeyAlgorithm::HMAC_SHA384:
            return "HMAC_SHA384";
          case SymmetricKeyAlgorithm::HMAC_SHA512:
            return "HMAC_SHA512";
          case SymmetricKeyAlgorithm::HMAC_SHA224:
            return "HMAC_SHA224";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SymmetricKeyAlgorithmMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
