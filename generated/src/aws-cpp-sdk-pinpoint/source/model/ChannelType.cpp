/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ChannelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace ChannelTypeMapper
      {

        static constexpr uint32_t PUSH_HASH = ConstExprHashingUtils::HashString("PUSH");
        static constexpr uint32_t GCM_HASH = ConstExprHashingUtils::HashString("GCM");
        static constexpr uint32_t APNS_HASH = ConstExprHashingUtils::HashString("APNS");
        static constexpr uint32_t APNS_SANDBOX_HASH = ConstExprHashingUtils::HashString("APNS_SANDBOX");
        static constexpr uint32_t APNS_VOIP_HASH = ConstExprHashingUtils::HashString("APNS_VOIP");
        static constexpr uint32_t APNS_VOIP_SANDBOX_HASH = ConstExprHashingUtils::HashString("APNS_VOIP_SANDBOX");
        static constexpr uint32_t ADM_HASH = ConstExprHashingUtils::HashString("ADM");
        static constexpr uint32_t SMS_HASH = ConstExprHashingUtils::HashString("SMS");
        static constexpr uint32_t VOICE_HASH = ConstExprHashingUtils::HashString("VOICE");
        static constexpr uint32_t EMAIL_HASH = ConstExprHashingUtils::HashString("EMAIL");
        static constexpr uint32_t BAIDU_HASH = ConstExprHashingUtils::HashString("BAIDU");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");
        static constexpr uint32_t IN_APP_HASH = ConstExprHashingUtils::HashString("IN_APP");


        ChannelType GetChannelTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUSH_HASH)
          {
            return ChannelType::PUSH;
          }
          else if (hashCode == GCM_HASH)
          {
            return ChannelType::GCM;
          }
          else if (hashCode == APNS_HASH)
          {
            return ChannelType::APNS;
          }
          else if (hashCode == APNS_SANDBOX_HASH)
          {
            return ChannelType::APNS_SANDBOX;
          }
          else if (hashCode == APNS_VOIP_HASH)
          {
            return ChannelType::APNS_VOIP;
          }
          else if (hashCode == APNS_VOIP_SANDBOX_HASH)
          {
            return ChannelType::APNS_VOIP_SANDBOX;
          }
          else if (hashCode == ADM_HASH)
          {
            return ChannelType::ADM;
          }
          else if (hashCode == SMS_HASH)
          {
            return ChannelType::SMS;
          }
          else if (hashCode == VOICE_HASH)
          {
            return ChannelType::VOICE;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return ChannelType::EMAIL;
          }
          else if (hashCode == BAIDU_HASH)
          {
            return ChannelType::BAIDU;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ChannelType::CUSTOM;
          }
          else if (hashCode == IN_APP_HASH)
          {
            return ChannelType::IN_APP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelType>(hashCode);
          }

          return ChannelType::NOT_SET;
        }

        Aws::String GetNameForChannelType(ChannelType enumValue)
        {
          switch(enumValue)
          {
          case ChannelType::NOT_SET:
            return {};
          case ChannelType::PUSH:
            return "PUSH";
          case ChannelType::GCM:
            return "GCM";
          case ChannelType::APNS:
            return "APNS";
          case ChannelType::APNS_SANDBOX:
            return "APNS_SANDBOX";
          case ChannelType::APNS_VOIP:
            return "APNS_VOIP";
          case ChannelType::APNS_VOIP_SANDBOX:
            return "APNS_VOIP_SANDBOX";
          case ChannelType::ADM:
            return "ADM";
          case ChannelType::SMS:
            return "SMS";
          case ChannelType::VOICE:
            return "VOICE";
          case ChannelType::EMAIL:
            return "EMAIL";
          case ChannelType::BAIDU:
            return "BAIDU";
          case ChannelType::CUSTOM:
            return "CUSTOM";
          case ChannelType::IN_APP:
            return "IN_APP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelTypeMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
