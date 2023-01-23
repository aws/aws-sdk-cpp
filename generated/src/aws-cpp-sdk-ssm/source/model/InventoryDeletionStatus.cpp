/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InventoryDeletionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace InventoryDeletionStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Complete_HASH = HashingUtils::HashString("Complete");


        InventoryDeletionStatus GetInventoryDeletionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return InventoryDeletionStatus::InProgress;
          }
          else if (hashCode == Complete_HASH)
          {
            return InventoryDeletionStatus::Complete;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InventoryDeletionStatus>(hashCode);
          }

          return InventoryDeletionStatus::NOT_SET;
        }

        Aws::String GetNameForInventoryDeletionStatus(InventoryDeletionStatus enumValue)
        {
          switch(enumValue)
          {
          case InventoryDeletionStatus::InProgress:
            return "InProgress";
          case InventoryDeletionStatus::Complete:
            return "Complete";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InventoryDeletionStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
