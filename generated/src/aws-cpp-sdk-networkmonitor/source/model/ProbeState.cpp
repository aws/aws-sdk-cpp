/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/ProbeState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkMonitor
  {
    namespace Model
    {
      namespace ProbeStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ProbeState GetProbeStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ProbeState::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ProbeState::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ProbeState::INACTIVE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ProbeState::ERROR_;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ProbeState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ProbeState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProbeState>(hashCode);
          }

          return ProbeState::NOT_SET;
        }

        Aws::String GetNameForProbeState(ProbeState enumValue)
        {
          switch(enumValue)
          {
          case ProbeState::NOT_SET:
            return {};
          case ProbeState::PENDING:
            return "PENDING";
          case ProbeState::ACTIVE:
            return "ACTIVE";
          case ProbeState::INACTIVE:
            return "INACTIVE";
          case ProbeState::ERROR_:
            return "ERROR";
          case ProbeState::DELETING:
            return "DELETING";
          case ProbeState::DELETED:
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

      } // namespace ProbeStateMapper
    } // namespace Model
  } // namespace NetworkMonitor
} // namespace Aws
