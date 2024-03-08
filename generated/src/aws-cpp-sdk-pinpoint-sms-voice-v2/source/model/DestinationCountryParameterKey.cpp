/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DestinationCountryParameterKey.h>
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
      namespace DestinationCountryParameterKeyMapper
      {

        static const int IN_TEMPLATE_ID_HASH = HashingUtils::HashString("IN_TEMPLATE_ID");
        static const int IN_ENTITY_ID_HASH = HashingUtils::HashString("IN_ENTITY_ID");


        DestinationCountryParameterKey GetDestinationCountryParameterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_TEMPLATE_ID_HASH)
          {
            return DestinationCountryParameterKey::IN_TEMPLATE_ID;
          }
          else if (hashCode == IN_ENTITY_ID_HASH)
          {
            return DestinationCountryParameterKey::IN_ENTITY_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DestinationCountryParameterKey>(hashCode);
          }

          return DestinationCountryParameterKey::NOT_SET;
        }

        Aws::String GetNameForDestinationCountryParameterKey(DestinationCountryParameterKey enumValue)
        {
          switch(enumValue)
          {
          case DestinationCountryParameterKey::NOT_SET:
            return {};
          case DestinationCountryParameterKey::IN_TEMPLATE_ID:
            return "IN_TEMPLATE_ID";
          case DestinationCountryParameterKey::IN_ENTITY_ID:
            return "IN_ENTITY_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DestinationCountryParameterKeyMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
