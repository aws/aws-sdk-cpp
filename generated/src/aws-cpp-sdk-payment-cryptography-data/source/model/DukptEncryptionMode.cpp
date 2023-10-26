/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/DukptEncryptionMode.h>
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
      namespace DukptEncryptionModeMapper
      {

        static const int ECB_HASH = HashingUtils::HashString("ECB");
        static const int CBC_HASH = HashingUtils::HashString("CBC");


        DukptEncryptionMode GetDukptEncryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ECB_HASH)
          {
            return DukptEncryptionMode::ECB;
          }
          else if (hashCode == CBC_HASH)
          {
            return DukptEncryptionMode::CBC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DukptEncryptionMode>(hashCode);
          }

          return DukptEncryptionMode::NOT_SET;
        }

        Aws::String GetNameForDukptEncryptionMode(DukptEncryptionMode enumValue)
        {
          switch(enumValue)
          {
          case DukptEncryptionMode::NOT_SET:
            return {};
          case DukptEncryptionMode::ECB:
            return "ECB";
          case DukptEncryptionMode::CBC:
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

      } // namespace DukptEncryptionModeMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
