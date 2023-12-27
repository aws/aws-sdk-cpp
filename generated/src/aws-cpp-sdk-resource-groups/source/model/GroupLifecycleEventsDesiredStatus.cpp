/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/GroupLifecycleEventsDesiredStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceGroups
  {
    namespace Model
    {
      namespace GroupLifecycleEventsDesiredStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        GroupLifecycleEventsDesiredStatus GetGroupLifecycleEventsDesiredStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return GroupLifecycleEventsDesiredStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return GroupLifecycleEventsDesiredStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupLifecycleEventsDesiredStatus>(hashCode);
          }

          return GroupLifecycleEventsDesiredStatus::NOT_SET;
        }

        Aws::String GetNameForGroupLifecycleEventsDesiredStatus(GroupLifecycleEventsDesiredStatus enumValue)
        {
          switch(enumValue)
          {
          case GroupLifecycleEventsDesiredStatus::NOT_SET:
            return {};
          case GroupLifecycleEventsDesiredStatus::ACTIVE:
            return "ACTIVE";
          case GroupLifecycleEventsDesiredStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupLifecycleEventsDesiredStatusMapper
    } // namespace Model
  } // namespace ResourceGroups
} // namespace Aws
