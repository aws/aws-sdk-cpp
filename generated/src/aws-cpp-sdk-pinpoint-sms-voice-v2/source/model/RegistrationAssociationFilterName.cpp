/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationAssociationFilterName.h>
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
      namespace RegistrationAssociationFilterNameMapper
      {

        static const int resource_type_HASH = HashingUtils::HashString("resource-type");
        static const int iso_country_code_HASH = HashingUtils::HashString("iso-country-code");


        RegistrationAssociationFilterName GetRegistrationAssociationFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == resource_type_HASH)
          {
            return RegistrationAssociationFilterName::resource_type;
          }
          else if (hashCode == iso_country_code_HASH)
          {
            return RegistrationAssociationFilterName::iso_country_code;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationAssociationFilterName>(hashCode);
          }

          return RegistrationAssociationFilterName::NOT_SET;
        }

        Aws::String GetNameForRegistrationAssociationFilterName(RegistrationAssociationFilterName enumValue)
        {
          switch(enumValue)
          {
          case RegistrationAssociationFilterName::NOT_SET:
            return {};
          case RegistrationAssociationFilterName::resource_type:
            return "resource-type";
          case RegistrationAssociationFilterName::iso_country_code:
            return "iso-country-code";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationAssociationFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
