/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationFilterName.h>
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
      namespace RegistrationFilterNameMapper
      {

        static const int registration_type_HASH = HashingUtils::HashString("registration-type");
        static const int registration_status_HASH = HashingUtils::HashString("registration-status");


        RegistrationFilterName GetRegistrationFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == registration_type_HASH)
          {
            return RegistrationFilterName::registration_type;
          }
          else if (hashCode == registration_status_HASH)
          {
            return RegistrationFilterName::registration_status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationFilterName>(hashCode);
          }

          return RegistrationFilterName::NOT_SET;
        }

        Aws::String GetNameForRegistrationFilterName(RegistrationFilterName enumValue)
        {
          switch(enumValue)
          {
          case RegistrationFilterName::NOT_SET:
            return {};
          case RegistrationFilterName::registration_type:
            return "registration-type";
          case RegistrationFilterName::registration_status:
            return "registration-status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
