/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ChannelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Notifications
  {
    namespace Model
    {
      namespace ChannelTypeMapper
      {

        static const int MOBILE_HASH = HashingUtils::HashString("MOBILE");
        static const int CHATBOT_HASH = HashingUtils::HashString("CHATBOT");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int ACCOUNT_CONTACT_HASH = HashingUtils::HashString("ACCOUNT_CONTACT");


        ChannelType GetChannelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MOBILE_HASH)
          {
            return ChannelType::MOBILE;
          }
          else if (hashCode == CHATBOT_HASH)
          {
            return ChannelType::CHATBOT;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return ChannelType::EMAIL;
          }
          else if (hashCode == ACCOUNT_CONTACT_HASH)
          {
            return ChannelType::ACCOUNT_CONTACT;
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
          case ChannelType::MOBILE:
            return "MOBILE";
          case ChannelType::CHATBOT:
            return "CHATBOT";
          case ChannelType::EMAIL:
            return "EMAIL";
          case ChannelType::ACCOUNT_CONTACT:
            return "ACCOUNT_CONTACT";
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
  } // namespace Notifications
} // namespace Aws
