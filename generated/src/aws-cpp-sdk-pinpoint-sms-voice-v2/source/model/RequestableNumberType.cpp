/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RequestableNumberType.h>
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
      namespace RequestableNumberTypeMapper
      {

        static constexpr uint32_t LONG_CODE_HASH = ConstExprHashingUtils::HashString("LONG_CODE");
        static constexpr uint32_t TOLL_FREE_HASH = ConstExprHashingUtils::HashString("TOLL_FREE");
        static constexpr uint32_t TEN_DLC_HASH = ConstExprHashingUtils::HashString("TEN_DLC");


        RequestableNumberType GetRequestableNumberTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LONG_CODE_HASH)
          {
            return RequestableNumberType::LONG_CODE;
          }
          else if (hashCode == TOLL_FREE_HASH)
          {
            return RequestableNumberType::TOLL_FREE;
          }
          else if (hashCode == TEN_DLC_HASH)
          {
            return RequestableNumberType::TEN_DLC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequestableNumberType>(hashCode);
          }

          return RequestableNumberType::NOT_SET;
        }

        Aws::String GetNameForRequestableNumberType(RequestableNumberType enumValue)
        {
          switch(enumValue)
          {
          case RequestableNumberType::NOT_SET:
            return {};
          case RequestableNumberType::LONG_CODE:
            return "LONG_CODE";
          case RequestableNumberType::TOLL_FREE:
            return "TOLL_FREE";
          case RequestableNumberType::TEN_DLC:
            return "TEN_DLC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequestableNumberTypeMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
