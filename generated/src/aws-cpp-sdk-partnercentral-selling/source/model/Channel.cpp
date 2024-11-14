/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/Channel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace ChannelMapper
      {

        static const int AWS_Marketing_Central_HASH = HashingUtils::HashString("AWS Marketing Central");
        static const int Content_Syndication_HASH = HashingUtils::HashString("Content Syndication");
        static const int Display_HASH = HashingUtils::HashString("Display");
        static const int Email_HASH = HashingUtils::HashString("Email");
        static const int Live_Event_HASH = HashingUtils::HashString("Live Event");
        static const int Out_Of_Home_OOH_HASH = HashingUtils::HashString("Out Of Home (OOH)");
        static const int Print_HASH = HashingUtils::HashString("Print");
        static const int Search_HASH = HashingUtils::HashString("Search");
        static const int Social_HASH = HashingUtils::HashString("Social");
        static const int Telemarketing_HASH = HashingUtils::HashString("Telemarketing");
        static const int TV_HASH = HashingUtils::HashString("TV");
        static const int Video_HASH = HashingUtils::HashString("Video");
        static const int Virtual_Event_HASH = HashingUtils::HashString("Virtual Event");


        Channel GetChannelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_Marketing_Central_HASH)
          {
            return Channel::AWS_Marketing_Central;
          }
          else if (hashCode == Content_Syndication_HASH)
          {
            return Channel::Content_Syndication;
          }
          else if (hashCode == Display_HASH)
          {
            return Channel::Display;
          }
          else if (hashCode == Email_HASH)
          {
            return Channel::Email;
          }
          else if (hashCode == Live_Event_HASH)
          {
            return Channel::Live_Event;
          }
          else if (hashCode == Out_Of_Home_OOH_HASH)
          {
            return Channel::Out_Of_Home_OOH;
          }
          else if (hashCode == Print_HASH)
          {
            return Channel::Print;
          }
          else if (hashCode == Search_HASH)
          {
            return Channel::Search;
          }
          else if (hashCode == Social_HASH)
          {
            return Channel::Social;
          }
          else if (hashCode == Telemarketing_HASH)
          {
            return Channel::Telemarketing;
          }
          else if (hashCode == TV_HASH)
          {
            return Channel::TV;
          }
          else if (hashCode == Video_HASH)
          {
            return Channel::Video;
          }
          else if (hashCode == Virtual_Event_HASH)
          {
            return Channel::Virtual_Event;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Channel>(hashCode);
          }

          return Channel::NOT_SET;
        }

        Aws::String GetNameForChannel(Channel enumValue)
        {
          switch(enumValue)
          {
          case Channel::NOT_SET:
            return {};
          case Channel::AWS_Marketing_Central:
            return "AWS Marketing Central";
          case Channel::Content_Syndication:
            return "Content Syndication";
          case Channel::Display:
            return "Display";
          case Channel::Email:
            return "Email";
          case Channel::Live_Event:
            return "Live Event";
          case Channel::Out_Of_Home_OOH:
            return "Out Of Home (OOH)";
          case Channel::Print:
            return "Print";
          case Channel::Search:
            return "Search";
          case Channel::Social:
            return "Social";
          case Channel::Telemarketing:
            return "Telemarketing";
          case Channel::TV:
            return "TV";
          case Channel::Video:
            return "Video";
          case Channel::Virtual_Event:
            return "Virtual Event";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
