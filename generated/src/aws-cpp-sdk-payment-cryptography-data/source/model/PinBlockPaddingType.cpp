/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/PinBlockPaddingType.h>
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
      namespace PinBlockPaddingTypeMapper
      {

        static const int NO_PADDING_HASH = HashingUtils::HashString("NO_PADDING");
        static const int ISO_IEC_7816_4_HASH = HashingUtils::HashString("ISO_IEC_7816_4");


        PinBlockPaddingType GetPinBlockPaddingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PADDING_HASH)
          {
            return PinBlockPaddingType::NO_PADDING;
          }
          else if (hashCode == ISO_IEC_7816_4_HASH)
          {
            return PinBlockPaddingType::ISO_IEC_7816_4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PinBlockPaddingType>(hashCode);
          }

          return PinBlockPaddingType::NOT_SET;
        }

        Aws::String GetNameForPinBlockPaddingType(PinBlockPaddingType enumValue)
        {
          switch(enumValue)
          {
          case PinBlockPaddingType::NOT_SET:
            return {};
          case PinBlockPaddingType::NO_PADDING:
            return "NO_PADDING";
          case PinBlockPaddingType::ISO_IEC_7816_4:
            return "ISO_IEC_7816_4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PinBlockPaddingTypeMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
