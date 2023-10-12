/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/EncryptionMode.h>
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
      namespace EncryptionModeMapper
      {

        static constexpr uint32_t ECB_HASH = ConstExprHashingUtils::HashString("ECB");
        static constexpr uint32_t CBC_HASH = ConstExprHashingUtils::HashString("CBC");
        static constexpr uint32_t CFB_HASH = ConstExprHashingUtils::HashString("CFB");
        static constexpr uint32_t CFB1_HASH = ConstExprHashingUtils::HashString("CFB1");
        static constexpr uint32_t CFB8_HASH = ConstExprHashingUtils::HashString("CFB8");
        static constexpr uint32_t CFB64_HASH = ConstExprHashingUtils::HashString("CFB64");
        static constexpr uint32_t CFB128_HASH = ConstExprHashingUtils::HashString("CFB128");
        static constexpr uint32_t OFB_HASH = ConstExprHashingUtils::HashString("OFB");


        EncryptionMode GetEncryptionModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ECB_HASH)
          {
            return EncryptionMode::ECB;
          }
          else if (hashCode == CBC_HASH)
          {
            return EncryptionMode::CBC;
          }
          else if (hashCode == CFB_HASH)
          {
            return EncryptionMode::CFB;
          }
          else if (hashCode == CFB1_HASH)
          {
            return EncryptionMode::CFB1;
          }
          else if (hashCode == CFB8_HASH)
          {
            return EncryptionMode::CFB8;
          }
          else if (hashCode == CFB64_HASH)
          {
            return EncryptionMode::CFB64;
          }
          else if (hashCode == CFB128_HASH)
          {
            return EncryptionMode::CFB128;
          }
          else if (hashCode == OFB_HASH)
          {
            return EncryptionMode::OFB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionMode>(hashCode);
          }

          return EncryptionMode::NOT_SET;
        }

        Aws::String GetNameForEncryptionMode(EncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case EncryptionMode::NOT_SET:
            return {};
          case EncryptionMode::ECB:
            return "ECB";
          case EncryptionMode::CBC:
            return "CBC";
          case EncryptionMode::CFB:
            return "CFB";
          case EncryptionMode::CFB1:
            return "CFB1";
          case EncryptionMode::CFB8:
            return "CFB8";
          case EncryptionMode::CFB64:
            return "CFB64";
          case EncryptionMode::CFB128:
            return "CFB128";
          case EncryptionMode::OFB:
            return "OFB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionModeMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
