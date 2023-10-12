/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ClusterState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace ClusterStateMapper
      {

        static constexpr uint32_t AwaitingQuorum_HASH = ConstExprHashingUtils::HashString("AwaitingQuorum");
        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InUse_HASH = ConstExprHashingUtils::HashString("InUse");
        static constexpr uint32_t Complete_HASH = ConstExprHashingUtils::HashString("Complete");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");


        ClusterState GetClusterStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AwaitingQuorum_HASH)
          {
            return ClusterState::AwaitingQuorum;
          }
          else if (hashCode == Pending_HASH)
          {
            return ClusterState::Pending;
          }
          else if (hashCode == InUse_HASH)
          {
            return ClusterState::InUse;
          }
          else if (hashCode == Complete_HASH)
          {
            return ClusterState::Complete;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return ClusterState::Cancelled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterState>(hashCode);
          }

          return ClusterState::NOT_SET;
        }

        Aws::String GetNameForClusterState(ClusterState enumValue)
        {
          switch(enumValue)
          {
          case ClusterState::NOT_SET:
            return {};
          case ClusterState::AwaitingQuorum:
            return "AwaitingQuorum";
          case ClusterState::Pending:
            return "Pending";
          case ClusterState::InUse:
            return "InUse";
          case ClusterState::Complete:
            return "Complete";
          case ClusterState::Cancelled:
            return "Cancelled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterStateMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
