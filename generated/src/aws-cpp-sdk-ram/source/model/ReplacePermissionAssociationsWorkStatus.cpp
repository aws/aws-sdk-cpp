/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ReplacePermissionAssociationsWorkStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace ReplacePermissionAssociationsWorkStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ReplacePermissionAssociationsWorkStatus GetReplacePermissionAssociationsWorkStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ReplacePermissionAssociationsWorkStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ReplacePermissionAssociationsWorkStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReplacePermissionAssociationsWorkStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplacePermissionAssociationsWorkStatus>(hashCode);
          }

          return ReplacePermissionAssociationsWorkStatus::NOT_SET;
        }

        Aws::String GetNameForReplacePermissionAssociationsWorkStatus(ReplacePermissionAssociationsWorkStatus enumValue)
        {
          switch(enumValue)
          {
          case ReplacePermissionAssociationsWorkStatus::NOT_SET:
            return {};
          case ReplacePermissionAssociationsWorkStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReplacePermissionAssociationsWorkStatus::COMPLETED:
            return "COMPLETED";
          case ReplacePermissionAssociationsWorkStatus::FAILED:
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

      } // namespace ReplacePermissionAssociationsWorkStatusMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
