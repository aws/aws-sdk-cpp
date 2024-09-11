/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ClusterState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace ClusterStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ClusterState GetClusterStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ClusterState::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ClusterState::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ClusterState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ClusterState::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ClusterState::DELETE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ClusterState::DELETED;
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
          case ClusterState::CREATING:
            return "CREATING";
          case ClusterState::CREATE_FAILED:
            return "CREATE_FAILED";
          case ClusterState::ACTIVE:
            return "ACTIVE";
          case ClusterState::DELETING:
            return "DELETING";
          case ClusterState::DELETE_FAILED:
            return "DELETE_FAILED";
          case ClusterState::DELETED:
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

      } // namespace ClusterStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
