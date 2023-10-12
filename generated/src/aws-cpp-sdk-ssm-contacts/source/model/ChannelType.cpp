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

        static constexpr uint32_t SMS_HASH = ConstExprHashingUtils::HashString("SMS");
        static constexpr uint32_t VOICE_HASH = ConstExprHashingUtils::HashString("VOICE");
        static constexpr uint32_t EMAIL_HASH = ConstExprHashingUtils::HashString("EMAIL");


        ChannelType GetChannelTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
