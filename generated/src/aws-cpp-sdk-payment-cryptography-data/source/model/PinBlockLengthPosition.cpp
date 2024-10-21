/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/PinBlockLengthPosition.h>
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
      namespace PinBlockLengthPositionMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int FRONT_OF_PIN_BLOCK_HASH = HashingUtils::HashString("FRONT_OF_PIN_BLOCK");


        PinBlockLengthPosition GetPinBlockLengthPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return PinBlockLengthPosition::NONE;
          }
          else if (hashCode == FRONT_OF_PIN_BLOCK_HASH)
          {
            return PinBlockLengthPosition::FRONT_OF_PIN_BLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PinBlockLengthPosition>(hashCode);
          }

          return PinBlockLengthPosition::NOT_SET;
        }

        Aws::String GetNameForPinBlockLengthPosition(PinBlockLengthPosition enumValue)
        {
          switch(enumValue)
          {
          case PinBlockLengthPosition::NOT_SET:
            return {};
          case PinBlockLengthPosition::NONE:
            return "NONE";
          case PinBlockLengthPosition::FRONT_OF_PIN_BLOCK:
            return "FRONT_OF_PIN_BLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PinBlockLengthPositionMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
