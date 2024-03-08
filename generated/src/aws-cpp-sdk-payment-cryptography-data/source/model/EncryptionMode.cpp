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

        static const int ECB_HASH = HashingUtils::HashString("ECB");
        static const int CBC_HASH = HashingUtils::HashString("CBC");
        static const int CFB_HASH = HashingUtils::HashString("CFB");
        static const int CFB1_HASH = HashingUtils::HashString("CFB1");
        static const int CFB8_HASH = HashingUtils::HashString("CFB8");
        static const int CFB64_HASH = HashingUtils::HashString("CFB64");
        static const int CFB128_HASH = HashingUtils::HashString("CFB128");
        static const int OFB_HASH = HashingUtils::HashString("OFB");


        EncryptionMode GetEncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
