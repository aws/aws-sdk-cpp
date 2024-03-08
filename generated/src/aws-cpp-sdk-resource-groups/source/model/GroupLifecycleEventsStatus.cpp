/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/GroupLifecycleEventsStatus.h>
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
      namespace GroupLifecycleEventsStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        GroupLifecycleEventsStatus GetGroupLifecycleEventsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return GroupLifecycleEventsStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return GroupLifecycleEventsStatus::INACTIVE;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return GroupLifecycleEventsStatus::IN_PROGRESS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return GroupLifecycleEventsStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupLifecycleEventsStatus>(hashCode);
          }

          return GroupLifecycleEventsStatus::NOT_SET;
        }

        Aws::String GetNameForGroupLifecycleEventsStatus(GroupLifecycleEventsStatus enumValue)
        {
          switch(enumValue)
          {
          case GroupLifecycleEventsStatus::NOT_SET:
            return {};
          case GroupLifecycleEventsStatus::ACTIVE:
            return "ACTIVE";
          case GroupLifecycleEventsStatus::INACTIVE:
            return "INACTIVE";
          case GroupLifecycleEventsStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case GroupLifecycleEventsStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupLifecycleEventsStatusMapper
    } // namespace Model
  } // namespace ResourceGroups
} // namespace Aws
