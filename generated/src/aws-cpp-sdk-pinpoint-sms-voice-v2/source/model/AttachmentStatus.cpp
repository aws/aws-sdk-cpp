/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/AttachmentStatus.h>
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
      namespace AttachmentStatusMapper
      {

        static const int UPLOAD_IN_PROGRESS_HASH = HashingUtils::HashString("UPLOAD_IN_PROGRESS");
        static const int UPLOAD_COMPLETE_HASH = HashingUtils::HashString("UPLOAD_COMPLETE");
        static const int UPLOAD_FAILED_HASH = HashingUtils::HashString("UPLOAD_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        AttachmentStatus GetAttachmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPLOAD_IN_PROGRESS_HASH)
          {
            return AttachmentStatus::UPLOAD_IN_PROGRESS;
          }
          else if (hashCode == UPLOAD_COMPLETE_HASH)
          {
            return AttachmentStatus::UPLOAD_COMPLETE;
          }
          else if (hashCode == UPLOAD_FAILED_HASH)
          {
            return AttachmentStatus::UPLOAD_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return AttachmentStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentStatus>(hashCode);
          }

          return AttachmentStatus::NOT_SET;
        }

        Aws::String GetNameForAttachmentStatus(AttachmentStatus enumValue)
        {
          switch(enumValue)
          {
          case AttachmentStatus::NOT_SET:
            return {};
          case AttachmentStatus::UPLOAD_IN_PROGRESS:
            return "UPLOAD_IN_PROGRESS";
          case AttachmentStatus::UPLOAD_COMPLETE:
            return "UPLOAD_COMPLETE";
          case AttachmentStatus::UPLOAD_FAILED:
            return "UPLOAD_FAILED";
          case AttachmentStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentStatusMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
