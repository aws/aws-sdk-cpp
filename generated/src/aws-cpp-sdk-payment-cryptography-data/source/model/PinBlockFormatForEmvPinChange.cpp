/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/PinBlockFormatForEmvPinChange.h>
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
      namespace PinBlockFormatForEmvPinChangeMapper
      {

        static const int ISO_FORMAT_0_HASH = HashingUtils::HashString("ISO_FORMAT_0");
        static const int ISO_FORMAT_1_HASH = HashingUtils::HashString("ISO_FORMAT_1");
        static const int ISO_FORMAT_3_HASH = HashingUtils::HashString("ISO_FORMAT_3");


        PinBlockFormatForEmvPinChange GetPinBlockFormatForEmvPinChangeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ISO_FORMAT_0_HASH)
          {
            return PinBlockFormatForEmvPinChange::ISO_FORMAT_0;
          }
          else if (hashCode == ISO_FORMAT_1_HASH)
          {
            return PinBlockFormatForEmvPinChange::ISO_FORMAT_1;
          }
          else if (hashCode == ISO_FORMAT_3_HASH)
          {
            return PinBlockFormatForEmvPinChange::ISO_FORMAT_3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PinBlockFormatForEmvPinChange>(hashCode);
          }

          return PinBlockFormatForEmvPinChange::NOT_SET;
        }

        Aws::String GetNameForPinBlockFormatForEmvPinChange(PinBlockFormatForEmvPinChange enumValue)
        {
          switch(enumValue)
          {
          case PinBlockFormatForEmvPinChange::NOT_SET:
            return {};
          case PinBlockFormatForEmvPinChange::ISO_FORMAT_0:
            return "ISO_FORMAT_0";
          case PinBlockFormatForEmvPinChange::ISO_FORMAT_1:
            return "ISO_FORMAT_1";
          case PinBlockFormatForEmvPinChange::ISO_FORMAT_3:
            return "ISO_FORMAT_3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PinBlockFormatForEmvPinChangeMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
