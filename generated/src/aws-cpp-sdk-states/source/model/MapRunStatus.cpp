/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/MapRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace MapRunStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");


        MapRunStatus GetMapRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return MapRunStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return MapRunStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MapRunStatus::FAILED;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return MapRunStatus::ABORTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MapRunStatus>(hashCode);
          }

          return MapRunStatus::NOT_SET;
        }

        Aws::String GetNameForMapRunStatus(MapRunStatus enumValue)
        {
          switch(enumValue)
          {
          case MapRunStatus::RUNNING:
            return "RUNNING";
          case MapRunStatus::SUCCEEDED:
            return "SUCCEEDED";
          case MapRunStatus::FAILED:
            return "FAILED";
          case MapRunStatus::ABORTED:
            return "ABORTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MapRunStatusMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
