/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationAttachmentFilterName.h>
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
      namespace RegistrationAttachmentFilterNameMapper
      {

        static const int attachment_status_HASH = HashingUtils::HashString("attachment-status");


        RegistrationAttachmentFilterName GetRegistrationAttachmentFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == attachment_status_HASH)
          {
            return RegistrationAttachmentFilterName::attachment_status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationAttachmentFilterName>(hashCode);
          }

          return RegistrationAttachmentFilterName::NOT_SET;
        }

        Aws::String GetNameForRegistrationAttachmentFilterName(RegistrationAttachmentFilterName enumValue)
        {
          switch(enumValue)
          {
          case RegistrationAttachmentFilterName::NOT_SET:
            return {};
          case RegistrationAttachmentFilterName::attachment_status:
            return "attachment-status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationAttachmentFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
