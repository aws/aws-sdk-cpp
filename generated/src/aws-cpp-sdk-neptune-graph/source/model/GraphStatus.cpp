/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GraphStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NeptuneGraph
  {
    namespace Model
    {
      namespace GraphStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int RESETTING_HASH = HashingUtils::HashString("RESETTING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int SNAPSHOTTING_HASH = HashingUtils::HashString("SNAPSHOTTING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        GraphStatus GetGraphStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return GraphStatus::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return GraphStatus::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return GraphStatus::DELETING;
          }
          else if (hashCode == RESETTING_HASH)
          {
            return GraphStatus::RESETTING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return GraphStatus::UPDATING;
          }
          else if (hashCode == SNAPSHOTTING_HASH)
          {
            return GraphStatus::SNAPSHOTTING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return GraphStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GraphStatus>(hashCode);
          }

          return GraphStatus::NOT_SET;
        }

        Aws::String GetNameForGraphStatus(GraphStatus enumValue)
        {
          switch(enumValue)
          {
          case GraphStatus::NOT_SET:
            return {};
          case GraphStatus::CREATING:
            return "CREATING";
          case GraphStatus::AVAILABLE:
            return "AVAILABLE";
          case GraphStatus::DELETING:
            return "DELETING";
          case GraphStatus::RESETTING:
            return "RESETTING";
          case GraphStatus::UPDATING:
            return "UPDATING";
          case GraphStatus::SNAPSHOTTING:
            return "SNAPSHOTTING";
          case GraphStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GraphStatusMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
