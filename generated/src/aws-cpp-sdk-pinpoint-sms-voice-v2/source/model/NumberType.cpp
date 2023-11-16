/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/NumberType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace NumberTypeMapper
      {

        static const int SHORT_CODE_HASH = HashingUtils::HashString("SHORT_CODE");
        static const int LONG_CODE_HASH = HashingUtils::HashString("LONG_CODE");
        static const int TOLL_FREE_HASH = HashingUtils::HashString("TOLL_FREE");
        static const int TEN_DLC_HASH = HashingUtils::HashString("TEN_DLC");
        static const int SIMULATOR_HASH = HashingUtils::HashString("SIMULATOR");


        NumberType GetNumberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHORT_CODE_HASH)
          {
            return NumberType::SHORT_CODE;
          }
          else if (hashCode == LONG_CODE_HASH)
          {
            return NumberType::LONG_CODE;
          }
          else if (hashCode == TOLL_FREE_HASH)
          {
            return NumberType::TOLL_FREE;
          }
          else if (hashCode == TEN_DLC_HASH)
          {
            return NumberType::TEN_DLC;
          }
          else if (hashCode == SIMULATOR_HASH)
          {
            return NumberType::SIMULATOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NumberType>(hashCode);
          }

          return NumberType::NOT_SET;
        }

        Aws::String GetNameForNumberType(NumberType enumValue)
        {
          switch(enumValue)
          {
          case NumberType::NOT_SET:
            return {};
          case NumberType::SHORT_CODE:
            return "SHORT_CODE";
          case NumberType::LONG_CODE:
            return "LONG_CODE";
          case NumberType::TOLL_FREE:
            return "TOLL_FREE";
          case NumberType::TEN_DLC:
            return "TEN_DLC";
          case NumberType::SIMULATOR:
            return "SIMULATOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NumberTypeMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
