/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ChannelPlacementGroupState.h>
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
      namespace ChannelPlacementGroupStateMapper
      {

        static const int UNASSIGNED_HASH = HashingUtils::HashString("UNASSIGNED");
        static const int ASSIGNING_HASH = HashingUtils::HashString("ASSIGNING");
        static const int ASSIGNED_HASH = HashingUtils::HashString("ASSIGNED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int UNASSIGNING_HASH = HashingUtils::HashString("UNASSIGNING");


        ChannelPlacementGroupState GetChannelPlacementGroupStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNASSIGNED_HASH)
          {
            return ChannelPlacementGroupState::UNASSIGNED;
          }
          else if (hashCode == ASSIGNING_HASH)
          {
            return ChannelPlacementGroupState::ASSIGNING;
          }
          else if (hashCode == ASSIGNED_HASH)
          {
            return ChannelPlacementGroupState::ASSIGNED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ChannelPlacementGroupState::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ChannelPlacementGroupState::DELETE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ChannelPlacementGroupState::DELETED;
          }
          else if (hashCode == UNASSIGNING_HASH)
          {
            return ChannelPlacementGroupState::UNASSIGNING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelPlacementGroupState>(hashCode);
          }

          return ChannelPlacementGroupState::NOT_SET;
        }

        Aws::String GetNameForChannelPlacementGroupState(ChannelPlacementGroupState enumValue)
        {
          switch(enumValue)
          {
          case ChannelPlacementGroupState::NOT_SET:
            return {};
          case ChannelPlacementGroupState::UNASSIGNED:
            return "UNASSIGNED";
          case ChannelPlacementGroupState::ASSIGNING:
            return "ASSIGNING";
          case ChannelPlacementGroupState::ASSIGNED:
            return "ASSIGNED";
          case ChannelPlacementGroupState::DELETING:
            return "DELETING";
          case ChannelPlacementGroupState::DELETE_FAILED:
            return "DELETE_FAILED";
          case ChannelPlacementGroupState::DELETED:
            return "DELETED";
          case ChannelPlacementGroupState::UNASSIGNING:
            return "UNASSIGNING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelPlacementGroupStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
