/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/AcknowledgmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrivateNetworks
  {
    namespace Model
    {
      namespace AcknowledgmentStatusMapper
      {

        static const int ACKNOWLEDGING_HASH = HashingUtils::HashString("ACKNOWLEDGING");
        static const int ACKNOWLEDGED_HASH = HashingUtils::HashString("ACKNOWLEDGED");
        static const int UNACKNOWLEDGED_HASH = HashingUtils::HashString("UNACKNOWLEDGED");


        AcknowledgmentStatus GetAcknowledgmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACKNOWLEDGING_HASH)
          {
            return AcknowledgmentStatus::ACKNOWLEDGING;
          }
          else if (hashCode == ACKNOWLEDGED_HASH)
          {
            return AcknowledgmentStatus::ACKNOWLEDGED;
          }
          else if (hashCode == UNACKNOWLEDGED_HASH)
          {
            return AcknowledgmentStatus::UNACKNOWLEDGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcknowledgmentStatus>(hashCode);
          }

          return AcknowledgmentStatus::NOT_SET;
        }

        Aws::String GetNameForAcknowledgmentStatus(AcknowledgmentStatus enumValue)
        {
          switch(enumValue)
          {
          case AcknowledgmentStatus::NOT_SET:
            return {};
          case AcknowledgmentStatus::ACKNOWLEDGING:
            return "ACKNOWLEDGING";
          case AcknowledgmentStatus::ACKNOWLEDGED:
            return "ACKNOWLEDGED";
          case AcknowledgmentStatus::UNACKNOWLEDGED:
            return "UNACKNOWLEDGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcknowledgmentStatusMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
