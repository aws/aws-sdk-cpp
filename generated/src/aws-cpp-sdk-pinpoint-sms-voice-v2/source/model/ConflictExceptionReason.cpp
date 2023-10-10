﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ConflictExceptionReason.h>
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
      namespace ConflictExceptionReasonMapper
      {

        static const int DELETION_PROTECTION_ENABLED_HASH = HashingUtils::HashString("DELETION_PROTECTION_ENABLED");
        static const int DESTINATION_PHONE_NUMBER_NOT_VERIFIED_HASH = HashingUtils::HashString("DESTINATION_PHONE_NUMBER_NOT_VERIFIED");
        static const int DESTINATION_PHONE_NUMBER_OPTED_OUT_HASH = HashingUtils::HashString("DESTINATION_PHONE_NUMBER_OPTED_OUT");
        static const int EVENT_DESTINATION_MISMATCH_HASH = HashingUtils::HashString("EVENT_DESTINATION_MISMATCH");
        static const int KEYWORD_MISMATCH_HASH = HashingUtils::HashString("KEYWORD_MISMATCH");
        static const int LAST_PHONE_NUMBER_HASH = HashingUtils::HashString("LAST_PHONE_NUMBER");
        static const int SELF_MANAGED_OPT_OUTS_MISMATCH_HASH = HashingUtils::HashString("SELF_MANAGED_OPT_OUTS_MISMATCH");
        static const int MESSAGE_TYPE_MISMATCH_HASH = HashingUtils::HashString("MESSAGE_TYPE_MISMATCH");
        static const int NO_ORIGINATION_IDENTITIES_FOUND_HASH = HashingUtils::HashString("NO_ORIGINATION_IDENTITIES_FOUND");
        static const int OPT_OUT_LIST_MISMATCH_HASH = HashingUtils::HashString("OPT_OUT_LIST_MISMATCH");
        static const int PHONE_NUMBER_ASSOCIATED_TO_POOL_HASH = HashingUtils::HashString("PHONE_NUMBER_ASSOCIATED_TO_POOL");
        static const int PHONE_NUMBER_NOT_ASSOCIATED_TO_POOL_HASH = HashingUtils::HashString("PHONE_NUMBER_NOT_ASSOCIATED_TO_POOL");
        static const int PHONE_NUMBER_NOT_IN_REGISTRATION_REGION_HASH = HashingUtils::HashString("PHONE_NUMBER_NOT_IN_REGISTRATION_REGION");
        static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("RESOURCE_ALREADY_EXISTS");
        static const int RESOURCE_DELETION_NOT_ALLOWED_HASH = HashingUtils::HashString("RESOURCE_DELETION_NOT_ALLOWED");
        static const int RESOURCE_MODIFICATION_NOT_ALLOWED_HASH = HashingUtils::HashString("RESOURCE_MODIFICATION_NOT_ALLOWED");
        static const int RESOURCE_NOT_ACTIVE_HASH = HashingUtils::HashString("RESOURCE_NOT_ACTIVE");
        static const int RESOURCE_NOT_EMPTY_HASH = HashingUtils::HashString("RESOURCE_NOT_EMPTY");
        static const int TWO_WAY_CONFIG_MISMATCH_HASH = HashingUtils::HashString("TWO_WAY_CONFIG_MISMATCH");


        ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETION_PROTECTION_ENABLED_HASH)
          {
            return ConflictExceptionReason::DELETION_PROTECTION_ENABLED;
          }
          else if (hashCode == DESTINATION_PHONE_NUMBER_NOT_VERIFIED_HASH)
          {
            return ConflictExceptionReason::DESTINATION_PHONE_NUMBER_NOT_VERIFIED;
          }
          else if (hashCode == DESTINATION_PHONE_NUMBER_OPTED_OUT_HASH)
          {
            return ConflictExceptionReason::DESTINATION_PHONE_NUMBER_OPTED_OUT;
          }
          else if (hashCode == EVENT_DESTINATION_MISMATCH_HASH)
          {
            return ConflictExceptionReason::EVENT_DESTINATION_MISMATCH;
          }
          else if (hashCode == KEYWORD_MISMATCH_HASH)
          {
            return ConflictExceptionReason::KEYWORD_MISMATCH;
          }
          else if (hashCode == LAST_PHONE_NUMBER_HASH)
          {
            return ConflictExceptionReason::LAST_PHONE_NUMBER;
          }
          else if (hashCode == SELF_MANAGED_OPT_OUTS_MISMATCH_HASH)
          {
            return ConflictExceptionReason::SELF_MANAGED_OPT_OUTS_MISMATCH;
          }
          else if (hashCode == MESSAGE_TYPE_MISMATCH_HASH)
          {
            return ConflictExceptionReason::MESSAGE_TYPE_MISMATCH;
          }
          else if (hashCode == NO_ORIGINATION_IDENTITIES_FOUND_HASH)
          {
            return ConflictExceptionReason::NO_ORIGINATION_IDENTITIES_FOUND;
          }
          else if (hashCode == OPT_OUT_LIST_MISMATCH_HASH)
          {
            return ConflictExceptionReason::OPT_OUT_LIST_MISMATCH;
          }
          else if (hashCode == PHONE_NUMBER_ASSOCIATED_TO_POOL_HASH)
          {
            return ConflictExceptionReason::PHONE_NUMBER_ASSOCIATED_TO_POOL;
          }
          else if (hashCode == PHONE_NUMBER_NOT_ASSOCIATED_TO_POOL_HASH)
          {
            return ConflictExceptionReason::PHONE_NUMBER_NOT_ASSOCIATED_TO_POOL;
          }
          else if (hashCode == PHONE_NUMBER_NOT_IN_REGISTRATION_REGION_HASH)
          {
            return ConflictExceptionReason::PHONE_NUMBER_NOT_IN_REGISTRATION_REGION;
          }
          else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
          {
            return ConflictExceptionReason::RESOURCE_ALREADY_EXISTS;
          }
          else if (hashCode == RESOURCE_DELETION_NOT_ALLOWED_HASH)
          {
            return ConflictExceptionReason::RESOURCE_DELETION_NOT_ALLOWED;
          }
          else if (hashCode == RESOURCE_MODIFICATION_NOT_ALLOWED_HASH)
          {
            return ConflictExceptionReason::RESOURCE_MODIFICATION_NOT_ALLOWED;
          }
          else if (hashCode == RESOURCE_NOT_ACTIVE_HASH)
          {
            return ConflictExceptionReason::RESOURCE_NOT_ACTIVE;
          }
          else if (hashCode == RESOURCE_NOT_EMPTY_HASH)
          {
            return ConflictExceptionReason::RESOURCE_NOT_EMPTY;
          }
          else if (hashCode == TWO_WAY_CONFIG_MISMATCH_HASH)
          {
            return ConflictExceptionReason::TWO_WAY_CONFIG_MISMATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictExceptionReason>(hashCode);
          }

          return ConflictExceptionReason::NOT_SET;
        }

        Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ConflictExceptionReason::NOT_SET:
            return {};
          case ConflictExceptionReason::DELETION_PROTECTION_ENABLED:
            return "DELETION_PROTECTION_ENABLED";
          case ConflictExceptionReason::DESTINATION_PHONE_NUMBER_NOT_VERIFIED:
            return "DESTINATION_PHONE_NUMBER_NOT_VERIFIED";
          case ConflictExceptionReason::DESTINATION_PHONE_NUMBER_OPTED_OUT:
            return "DESTINATION_PHONE_NUMBER_OPTED_OUT";
          case ConflictExceptionReason::EVENT_DESTINATION_MISMATCH:
            return "EVENT_DESTINATION_MISMATCH";
          case ConflictExceptionReason::KEYWORD_MISMATCH:
            return "KEYWORD_MISMATCH";
          case ConflictExceptionReason::LAST_PHONE_NUMBER:
            return "LAST_PHONE_NUMBER";
          case ConflictExceptionReason::SELF_MANAGED_OPT_OUTS_MISMATCH:
            return "SELF_MANAGED_OPT_OUTS_MISMATCH";
          case ConflictExceptionReason::MESSAGE_TYPE_MISMATCH:
            return "MESSAGE_TYPE_MISMATCH";
          case ConflictExceptionReason::NO_ORIGINATION_IDENTITIES_FOUND:
            return "NO_ORIGINATION_IDENTITIES_FOUND";
          case ConflictExceptionReason::OPT_OUT_LIST_MISMATCH:
            return "OPT_OUT_LIST_MISMATCH";
          case ConflictExceptionReason::PHONE_NUMBER_ASSOCIATED_TO_POOL:
            return "PHONE_NUMBER_ASSOCIATED_TO_POOL";
          case ConflictExceptionReason::PHONE_NUMBER_NOT_ASSOCIATED_TO_POOL:
            return "PHONE_NUMBER_NOT_ASSOCIATED_TO_POOL";
          case ConflictExceptionReason::PHONE_NUMBER_NOT_IN_REGISTRATION_REGION:
            return "PHONE_NUMBER_NOT_IN_REGISTRATION_REGION";
          case ConflictExceptionReason::RESOURCE_ALREADY_EXISTS:
            return "RESOURCE_ALREADY_EXISTS";
          case ConflictExceptionReason::RESOURCE_DELETION_NOT_ALLOWED:
            return "RESOURCE_DELETION_NOT_ALLOWED";
          case ConflictExceptionReason::RESOURCE_MODIFICATION_NOT_ALLOWED:
            return "RESOURCE_MODIFICATION_NOT_ALLOWED";
          case ConflictExceptionReason::RESOURCE_NOT_ACTIVE:
            return "RESOURCE_NOT_ACTIVE";
          case ConflictExceptionReason::RESOURCE_NOT_EMPTY:
            return "RESOURCE_NOT_EMPTY";
          case ConflictExceptionReason::TWO_WAY_CONFIG_MISMATCH:
            return "TWO_WAY_CONFIG_MISMATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConflictExceptionReasonMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
