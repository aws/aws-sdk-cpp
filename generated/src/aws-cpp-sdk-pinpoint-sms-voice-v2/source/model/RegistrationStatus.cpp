/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationStatus.h>
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
      namespace RegistrationStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int REVIEWING_HASH = HashingUtils::HashString("REVIEWING");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int REQUIRES_UPDATES_HASH = HashingUtils::HashString("REQUIRES_UPDATES");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        RegistrationStatus GetRegistrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return RegistrationStatus::CREATED;
          }
          else if (hashCode == SUBMITTED_HASH)
          {
            return RegistrationStatus::SUBMITTED;
          }
          else if (hashCode == REVIEWING_HASH)
          {
            return RegistrationStatus::REVIEWING;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return RegistrationStatus::PROVISIONING;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return RegistrationStatus::COMPLETE;
          }
          else if (hashCode == REQUIRES_UPDATES_HASH)
          {
            return RegistrationStatus::REQUIRES_UPDATES;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return RegistrationStatus::CLOSED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return RegistrationStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationStatus>(hashCode);
          }

          return RegistrationStatus::NOT_SET;
        }

        Aws::String GetNameForRegistrationStatus(RegistrationStatus enumValue)
        {
          switch(enumValue)
          {
          case RegistrationStatus::NOT_SET:
            return {};
          case RegistrationStatus::CREATED:
            return "CREATED";
          case RegistrationStatus::SUBMITTED:
            return "SUBMITTED";
          case RegistrationStatus::REVIEWING:
            return "REVIEWING";
          case RegistrationStatus::PROVISIONING:
            return "PROVISIONING";
          case RegistrationStatus::COMPLETE:
            return "COMPLETE";
          case RegistrationStatus::REQUIRES_UPDATES:
            return "REQUIRES_UPDATES";
          case RegistrationStatus::CLOSED:
            return "CLOSED";
          case RegistrationStatus::DELETED:
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

      } // namespace RegistrationStatusMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
