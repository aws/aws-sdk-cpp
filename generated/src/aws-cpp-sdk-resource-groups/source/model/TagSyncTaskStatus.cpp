/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/TagSyncTaskStatus.h>
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
      namespace TagSyncTaskStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        TagSyncTaskStatus GetTagSyncTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return TagSyncTaskStatus::ACTIVE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return TagSyncTaskStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TagSyncTaskStatus>(hashCode);
          }

          return TagSyncTaskStatus::NOT_SET;
        }

        Aws::String GetNameForTagSyncTaskStatus(TagSyncTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case TagSyncTaskStatus::NOT_SET:
            return {};
          case TagSyncTaskStatus::ACTIVE:
            return "ACTIVE";
          case TagSyncTaskStatus::ERROR_:
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

      } // namespace TagSyncTaskStatusMapper
    } // namespace Model
  } // namespace ResourceGroups
} // namespace Aws
