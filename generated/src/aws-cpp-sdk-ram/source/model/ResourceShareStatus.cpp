/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ResourceShareStatus.h>
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
      namespace ResourceShareStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        ResourceShareStatus GetResourceShareStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ResourceShareStatus::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ResourceShareStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResourceShareStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ResourceShareStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ResourceShareStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceShareStatus>(hashCode);
          }

          return ResourceShareStatus::NOT_SET;
        }

        Aws::String GetNameForResourceShareStatus(ResourceShareStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceShareStatus::NOT_SET:
            return {};
          case ResourceShareStatus::PENDING:
            return "PENDING";
          case ResourceShareStatus::ACTIVE:
            return "ACTIVE";
          case ResourceShareStatus::FAILED:
            return "FAILED";
          case ResourceShareStatus::DELETING:
            return "DELETING";
          case ResourceShareStatus::DELETED:
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

      } // namespace ResourceShareStatusMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
