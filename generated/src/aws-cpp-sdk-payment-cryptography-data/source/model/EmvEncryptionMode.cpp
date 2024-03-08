/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/EmvEncryptionMode.h>
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
      namespace EmvEncryptionModeMapper
      {

        static const int ECB_HASH = HashingUtils::HashString("ECB");
        static const int CBC_HASH = HashingUtils::HashString("CBC");


        EmvEncryptionMode GetEmvEncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ECB_HASH)
          {
            return EmvEncryptionMode::ECB;
          }
          else if (hashCode == CBC_HASH)
          {
            return EmvEncryptionMode::CBC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmvEncryptionMode>(hashCode);
          }

          return EmvEncryptionMode::NOT_SET;
        }

        Aws::String GetNameForEmvEncryptionMode(EmvEncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case EmvEncryptionMode::NOT_SET:
            return {};
          case EmvEncryptionMode::ECB:
            return "ECB";
          case EmvEncryptionMode::CBC:
            return "CBC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmvEncryptionModeMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
