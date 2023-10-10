/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/NumberStatus.h>
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
      namespace NumberStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ASSOCIATING_HASH = HashingUtils::HashString("ASSOCIATING");
        static const int DISASSOCIATING_HASH = HashingUtils::HashString("DISASSOCIATING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        NumberStatus GetNumberStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return NumberStatus::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return NumberStatus::ACTIVE;
          }
          else if (hashCode == ASSOCIATING_HASH)
          {
            return NumberStatus::ASSOCIATING;
          }
          else if (hashCode == DISASSOCIATING_HASH)
          {
            return NumberStatus::DISASSOCIATING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return NumberStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NumberStatus>(hashCode);
          }

          return NumberStatus::NOT_SET;
        }

        Aws::String GetNameForNumberStatus(NumberStatus enumValue)
        {
          switch(enumValue)
          {
          case NumberStatus::NOT_SET:
            return {};
          case NumberStatus::PENDING:
            return "PENDING";
          case NumberStatus::ACTIVE:
            return "ACTIVE";
          case NumberStatus::ASSOCIATING:
            return "ASSOCIATING";
          case NumberStatus::DISASSOCIATING:
            return "DISASSOCIATING";
          case NumberStatus::DELETED:
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

      } // namespace NumberStatusMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
