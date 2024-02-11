/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/AttachmentUploadErrorReason.h>
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
      namespace AttachmentUploadErrorReasonMapper
      {

        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");


        AttachmentUploadErrorReason GetAttachmentUploadErrorReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return AttachmentUploadErrorReason::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentUploadErrorReason>(hashCode);
          }

          return AttachmentUploadErrorReason::NOT_SET;
        }

        Aws::String GetNameForAttachmentUploadErrorReason(AttachmentUploadErrorReason enumValue)
        {
          switch(enumValue)
          {
          case AttachmentUploadErrorReason::NOT_SET:
            return {};
          case AttachmentUploadErrorReason::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentUploadErrorReasonMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
