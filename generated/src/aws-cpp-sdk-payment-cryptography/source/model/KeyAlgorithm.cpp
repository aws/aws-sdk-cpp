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

        static constexpr uint32_t TDES_2KEY_HASH = ConstExprHashingUtils::HashString("TDES_2KEY");
        static constexpr uint32_t TDES_3KEY_HASH = ConstExprHashingUtils::HashString("TDES_3KEY");
        static constexpr uint32_t AES_128_HASH = ConstExprHashingUtils::HashString("AES_128");
        static constexpr uint32_t AES_192_HASH = ConstExprHashingUtils::HashString("AES_192");
        static constexpr uint32_t AES_256_HASH = ConstExprHashingUtils::HashString("AES_256");
        static constexpr uint32_t RSA_2048_HASH = ConstExprHashingUtils::HashString("RSA_2048");
        static constexpr uint32_t RSA_3072_HASH = ConstExprHashingUtils::HashString("RSA_3072");
        static constexpr uint32_t RSA_4096_HASH = ConstExprHashingUtils::HashString("RSA_4096");


        KeyAlgorithm GetKeyAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case KeyAlgorithm::RSA_2048:
            return "RSA_2048";
          case KeyAlgorithm::RSA_3072:
            return "RSA_3072";
          case KeyAlgorithm::RSA_4096:
            return "RSA_4096";
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
