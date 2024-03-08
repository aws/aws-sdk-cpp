/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/WorkgroupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftServerless
  {
    namespace Model
    {
      namespace WorkgroupStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        WorkgroupStatus GetWorkgroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return WorkgroupStatus::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return WorkgroupStatus::AVAILABLE;
          }
          else if (hashCode == MODIFYING_HASH)
          {
            return WorkgroupStatus::MODIFYING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return WorkgroupStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkgroupStatus>(hashCode);
          }

          return WorkgroupStatus::NOT_SET;
        }

        Aws::String GetNameForWorkgroupStatus(WorkgroupStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkgroupStatus::NOT_SET:
            return {};
          case WorkgroupStatus::CREATING:
            return "CREATING";
          case WorkgroupStatus::AVAILABLE:
            return "AVAILABLE";
          case WorkgroupStatus::MODIFYING:
            return "MODIFYING";
          case WorkgroupStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkgroupStatusMapper
    } // namespace Model
  } // namespace RedshiftServerless
} // namespace Aws
