/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ChannelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMContacts
  {
    namespace Model
    {
      namespace ChannelTypeMapper
      {

        static const int SMS_HASH = HashingUtils::HashString("SMS");
        static const int VOICE_HASH = HashingUtils::HashString("VOICE");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");


        ChannelType GetChannelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMS_HASH)
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
          case ChannelType::SMS:
            return "SMS";
          case ChannelType::VOICE:
            return "VOICE";
          case ChannelType::EMAIL:
            return "EMAIL";
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
  } // namespace SSMContacts
} // namespace Aws
