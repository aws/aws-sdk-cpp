/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/AccountAttributeName.h>
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
      namespace AccountAttributeNameMapper
      {

        static const int ACCOUNT_TIER_HASH = HashingUtils::HashString("ACCOUNT_TIER");


        AccountAttributeName GetAccountAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_TIER_HASH)
          {
            return AccountAttributeName::ACCOUNT_TIER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountAttributeName>(hashCode);
          }

          return AccountAttributeName::NOT_SET;
        }

        Aws::String GetNameForAccountAttributeName(AccountAttributeName enumValue)
        {
          switch(enumValue)
          {
          case AccountAttributeName::NOT_SET:
            return {};
          case AccountAttributeName::ACCOUNT_TIER:
            return "ACCOUNT_TIER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountAttributeNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
