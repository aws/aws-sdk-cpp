/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ShareStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace ShareStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t ACTIVATING_HASH = ConstExprHashingUtils::HashString("ACTIVATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ShareStatus GetShareStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ShareStatus::PENDING;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return ShareStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ShareStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ShareStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ShareStatus::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ShareStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareStatus>(hashCode);
          }

          return ShareStatus::NOT_SET;
        }

        Aws::String GetNameForShareStatus(ShareStatus enumValue)
        {
          switch(enumValue)
          {
          case ShareStatus::NOT_SET:
            return {};
          case ShareStatus::PENDING:
            return "PENDING";
          case ShareStatus::ACTIVATING:
            return "ACTIVATING";
          case ShareStatus::ACTIVE:
            return "ACTIVE";
          case ShareStatus::DELETING:
            return "DELETING";
          case ShareStatus::DELETED:
            return "DELETED";
          case ShareStatus::FAILED:
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

      } // namespace ShareStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
