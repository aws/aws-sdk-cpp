/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SenderIdFilterName.h>
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
      namespace SenderIdFilterNameMapper
      {

        static const int sender_id_HASH = HashingUtils::HashString("sender-id");
        static const int iso_country_code_HASH = HashingUtils::HashString("iso-country-code");
        static const int message_type_HASH = HashingUtils::HashString("message-type");


        SenderIdFilterName GetSenderIdFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sender_id_HASH)
          {
            return SenderIdFilterName::sender_id;
          }
          else if (hashCode == iso_country_code_HASH)
          {
            return SenderIdFilterName::iso_country_code;
          }
          else if (hashCode == message_type_HASH)
          {
            return SenderIdFilterName::message_type;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SenderIdFilterName>(hashCode);
          }

          return SenderIdFilterName::NOT_SET;
        }

        Aws::String GetNameForSenderIdFilterName(SenderIdFilterName enumValue)
        {
          switch(enumValue)
          {
          case SenderIdFilterName::NOT_SET:
            return {};
          case SenderIdFilterName::sender_id:
            return "sender-id";
          case SenderIdFilterName::iso_country_code:
            return "iso-country-code";
          case SenderIdFilterName::message_type:
            return "message-type";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SenderIdFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
