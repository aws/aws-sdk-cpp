/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/AccountLimitName.h>
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
      namespace AccountLimitNameMapper
      {

        static constexpr uint32_t PHONE_NUMBERS_HASH = ConstExprHashingUtils::HashString("PHONE_NUMBERS");
        static constexpr uint32_t POOLS_HASH = ConstExprHashingUtils::HashString("POOLS");
        static constexpr uint32_t CONFIGURATION_SETS_HASH = ConstExprHashingUtils::HashString("CONFIGURATION_SETS");
        static constexpr uint32_t OPT_OUT_LISTS_HASH = ConstExprHashingUtils::HashString("OPT_OUT_LISTS");


        AccountLimitName GetAccountLimitNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PHONE_NUMBERS_HASH)
          {
            return AccountLimitName::PHONE_NUMBERS;
          }
          else if (hashCode == POOLS_HASH)
          {
            return AccountLimitName::POOLS;
          }
          else if (hashCode == CONFIGURATION_SETS_HASH)
          {
            return AccountLimitName::CONFIGURATION_SETS;
          }
          else if (hashCode == OPT_OUT_LISTS_HASH)
          {
            return AccountLimitName::OPT_OUT_LISTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountLimitName>(hashCode);
          }

          return AccountLimitName::NOT_SET;
        }

        Aws::String GetNameForAccountLimitName(AccountLimitName enumValue)
        {
          switch(enumValue)
          {
          case AccountLimitName::NOT_SET:
            return {};
          case AccountLimitName::PHONE_NUMBERS:
            return "PHONE_NUMBERS";
          case AccountLimitName::POOLS:
            return "POOLS";
          case AccountLimitName::CONFIGURATION_SETS:
            return "CONFIGURATION_SETS";
          case AccountLimitName::OPT_OUT_LISTS:
            return "OPT_OUT_LISTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountLimitNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
