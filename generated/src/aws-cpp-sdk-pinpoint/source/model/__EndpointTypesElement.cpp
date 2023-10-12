/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/__EndpointTypesElement.h>
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
      namespace __EndpointTypesElementMapper
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


        __EndpointTypesElement Get__EndpointTypesElementForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUSH_HASH)
          {
            return __EndpointTypesElement::PUSH;
          }
          else if (hashCode == GCM_HASH)
          {
            return __EndpointTypesElement::GCM;
          }
          else if (hashCode == APNS_HASH)
          {
            return __EndpointTypesElement::APNS;
          }
          else if (hashCode == APNS_SANDBOX_HASH)
          {
            return __EndpointTypesElement::APNS_SANDBOX;
          }
          else if (hashCode == APNS_VOIP_HASH)
          {
            return __EndpointTypesElement::APNS_VOIP;
          }
          else if (hashCode == APNS_VOIP_SANDBOX_HASH)
          {
            return __EndpointTypesElement::APNS_VOIP_SANDBOX;
          }
          else if (hashCode == ADM_HASH)
          {
            return __EndpointTypesElement::ADM;
          }
          else if (hashCode == SMS_HASH)
          {
            return __EndpointTypesElement::SMS;
          }
          else if (hashCode == VOICE_HASH)
          {
            return __EndpointTypesElement::VOICE;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return __EndpointTypesElement::EMAIL;
          }
          else if (hashCode == BAIDU_HASH)
          {
            return __EndpointTypesElement::BAIDU;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return __EndpointTypesElement::CUSTOM;
          }
          else if (hashCode == IN_APP_HASH)
          {
            return __EndpointTypesElement::IN_APP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<__EndpointTypesElement>(hashCode);
          }

          return __EndpointTypesElement::NOT_SET;
        }

        Aws::String GetNameFor__EndpointTypesElement(__EndpointTypesElement enumValue)
        {
          switch(enumValue)
          {
          case __EndpointTypesElement::NOT_SET:
            return {};
          case __EndpointTypesElement::PUSH:
            return "PUSH";
          case __EndpointTypesElement::GCM:
            return "GCM";
          case __EndpointTypesElement::APNS:
            return "APNS";
          case __EndpointTypesElement::APNS_SANDBOX:
            return "APNS_SANDBOX";
          case __EndpointTypesElement::APNS_VOIP:
            return "APNS_VOIP";
          case __EndpointTypesElement::APNS_VOIP_SANDBOX:
            return "APNS_VOIP_SANDBOX";
          case __EndpointTypesElement::ADM:
            return "ADM";
          case __EndpointTypesElement::SMS:
            return "SMS";
          case __EndpointTypesElement::VOICE:
            return "VOICE";
          case __EndpointTypesElement::EMAIL:
            return "EMAIL";
          case __EndpointTypesElement::BAIDU:
            return "BAIDU";
          case __EndpointTypesElement::CUSTOM:
            return "CUSTOM";
          case __EndpointTypesElement::IN_APP:
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

      } // namespace __EndpointTypesElementMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
