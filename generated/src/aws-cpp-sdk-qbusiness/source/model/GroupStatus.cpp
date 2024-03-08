/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GroupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace GroupStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        GroupStatus GetGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return GroupStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return GroupStatus::SUCCEEDED;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return GroupStatus::PROCESSING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return GroupStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return GroupStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupStatus>(hashCode);
          }

          return GroupStatus::NOT_SET;
        }

        Aws::String GetNameForGroupStatus(GroupStatus enumValue)
        {
          switch(enumValue)
          {
          case GroupStatus::NOT_SET:
            return {};
          case GroupStatus::FAILED:
            return "FAILED";
          case GroupStatus::SUCCEEDED:
            return "SUCCEEDED";
          case GroupStatus::PROCESSING:
            return "PROCESSING";
          case GroupStatus::DELETING:
            return "DELETING";
          case GroupStatus::DELETED:
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

      } // namespace GroupStatusMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
