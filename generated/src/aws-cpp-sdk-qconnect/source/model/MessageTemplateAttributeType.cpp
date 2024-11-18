/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageTemplateAttributeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace MessageTemplateAttributeTypeMapper
      {

        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");
        static const int AGENT_HASH = HashingUtils::HashString("AGENT");
        static const int CUSTOMER_PROFILE_HASH = HashingUtils::HashString("CUSTOMER_PROFILE");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        MessageTemplateAttributeType GetMessageTemplateAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYSTEM_HASH)
          {
            return MessageTemplateAttributeType::SYSTEM;
          }
          else if (hashCode == AGENT_HASH)
          {
            return MessageTemplateAttributeType::AGENT;
          }
          else if (hashCode == CUSTOMER_PROFILE_HASH)
          {
            return MessageTemplateAttributeType::CUSTOMER_PROFILE;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return MessageTemplateAttributeType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageTemplateAttributeType>(hashCode);
          }

          return MessageTemplateAttributeType::NOT_SET;
        }

        Aws::String GetNameForMessageTemplateAttributeType(MessageTemplateAttributeType enumValue)
        {
          switch(enumValue)
          {
          case MessageTemplateAttributeType::NOT_SET:
            return {};
          case MessageTemplateAttributeType::SYSTEM:
            return "SYSTEM";
          case MessageTemplateAttributeType::AGENT:
            return "AGENT";
          case MessageTemplateAttributeType::CUSTOMER_PROFILE:
            return "CUSTOMER_PROFILE";
          case MessageTemplateAttributeType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageTemplateAttributeTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
