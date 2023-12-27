/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationTypeFilterName.h>
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
      namespace RegistrationTypeFilterNameMapper
      {

        static const int supported_association_resource_type_HASH = HashingUtils::HashString("supported-association-resource-type");
        static const int supported_association_iso_country_code_HASH = HashingUtils::HashString("supported-association-iso-country-code");


        RegistrationTypeFilterName GetRegistrationTypeFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == supported_association_resource_type_HASH)
          {
            return RegistrationTypeFilterName::supported_association_resource_type;
          }
          else if (hashCode == supported_association_iso_country_code_HASH)
          {
            return RegistrationTypeFilterName::supported_association_iso_country_code;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationTypeFilterName>(hashCode);
          }

          return RegistrationTypeFilterName::NOT_SET;
        }

        Aws::String GetNameForRegistrationTypeFilterName(RegistrationTypeFilterName enumValue)
        {
          switch(enumValue)
          {
          case RegistrationTypeFilterName::NOT_SET:
            return {};
          case RegistrationTypeFilterName::supported_association_resource_type:
            return "supported-association-resource-type";
          case RegistrationTypeFilterName::supported_association_iso_country_code:
            return "supported-association-iso-country-code";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationTypeFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
