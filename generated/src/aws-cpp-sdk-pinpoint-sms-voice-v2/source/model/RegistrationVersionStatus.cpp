/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationVersionStatus.h>
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
      namespace RegistrationVersionStatusMapper
      {

        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int REVIEWING_HASH = HashingUtils::HashString("REVIEWING");
        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int DISCARDED_HASH = HashingUtils::HashString("DISCARDED");
        static const int DENIED_HASH = HashingUtils::HashString("DENIED");
        static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        RegistrationVersionStatus GetRegistrationVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAFT_HASH)
          {
            return RegistrationVersionStatus::DRAFT;
          }
          else if (hashCode == SUBMITTED_HASH)
          {
            return RegistrationVersionStatus::SUBMITTED;
          }
          else if (hashCode == REVIEWING_HASH)
          {
            return RegistrationVersionStatus::REVIEWING;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return RegistrationVersionStatus::APPROVED;
          }
          else if (hashCode == DISCARDED_HASH)
          {
            return RegistrationVersionStatus::DISCARDED;
          }
          else if (hashCode == DENIED_HASH)
          {
            return RegistrationVersionStatus::DENIED;
          }
          else if (hashCode == REVOKED_HASH)
          {
            return RegistrationVersionStatus::REVOKED;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return RegistrationVersionStatus::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationVersionStatus>(hashCode);
          }

          return RegistrationVersionStatus::NOT_SET;
        }

        Aws::String GetNameForRegistrationVersionStatus(RegistrationVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case RegistrationVersionStatus::NOT_SET:
            return {};
          case RegistrationVersionStatus::DRAFT:
            return "DRAFT";
          case RegistrationVersionStatus::SUBMITTED:
            return "SUBMITTED";
          case RegistrationVersionStatus::REVIEWING:
            return "REVIEWING";
          case RegistrationVersionStatus::APPROVED:
            return "APPROVED";
          case RegistrationVersionStatus::DISCARDED:
            return "DISCARDED";
          case RegistrationVersionStatus::DENIED:
            return "DENIED";
          case RegistrationVersionStatus::REVOKED:
            return "REVOKED";
          case RegistrationVersionStatus::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationVersionStatusMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
