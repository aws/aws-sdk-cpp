/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace ResourceStatusMapper
      {

        static constexpr uint32_t CREATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATION_IN_PROGRESS");
        static constexpr uint32_t CREATION_SUCCESSFUL_HASH = ConstExprHashingUtils::HashString("CREATION_SUCCESSFUL");
        static constexpr uint32_t CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("CREATION_FAILED");
        static constexpr uint32_t UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_IN_PROGRESS");
        static constexpr uint32_t UPDATE_SUCCESSFUL_HASH = ConstExprHashingUtils::HashString("UPDATE_SUCCESSFUL");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        ResourceStatus GetResourceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATION_IN_PROGRESS_HASH)
          {
            return ResourceStatus::CREATION_IN_PROGRESS;
          }
          else if (hashCode == CREATION_SUCCESSFUL_HASH)
          {
            return ResourceStatus::CREATION_SUCCESSFUL;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return ResourceStatus::CREATION_FAILED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ResourceStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_SUCCESSFUL_HASH)
          {
            return ResourceStatus::UPDATE_SUCCESSFUL;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ResourceStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ResourceStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceStatus>(hashCode);
          }

          return ResourceStatus::NOT_SET;
        }

        Aws::String GetNameForResourceStatus(ResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceStatus::NOT_SET:
            return {};
          case ResourceStatus::CREATION_IN_PROGRESS:
            return "CREATION_IN_PROGRESS";
          case ResourceStatus::CREATION_SUCCESSFUL:
            return "CREATION_SUCCESSFUL";
          case ResourceStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          case ResourceStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case ResourceStatus::UPDATE_SUCCESSFUL:
            return "UPDATE_SUCCESSFUL";
          case ResourceStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case ResourceStatus::DELETED:
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

      } // namespace ResourceStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
