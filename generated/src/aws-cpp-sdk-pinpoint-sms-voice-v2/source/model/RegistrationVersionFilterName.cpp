/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationVersionFilterName.h>
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
      namespace RegistrationVersionFilterNameMapper
      {

        static const int registration_version_status_HASH = HashingUtils::HashString("registration-version-status");


        RegistrationVersionFilterName GetRegistrationVersionFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == registration_version_status_HASH)
          {
            return RegistrationVersionFilterName::registration_version_status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationVersionFilterName>(hashCode);
          }

          return RegistrationVersionFilterName::NOT_SET;
        }

        Aws::String GetNameForRegistrationVersionFilterName(RegistrationVersionFilterName enumValue)
        {
          switch(enumValue)
          {
          case RegistrationVersionFilterName::NOT_SET:
            return {};
          case RegistrationVersionFilterName::registration_version_status:
            return "registration-version-status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationVersionFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
