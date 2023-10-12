/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/ContentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectWisdomService
  {
    namespace Model
    {
      namespace ContentStatusMapper
      {

        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        ContentStatus GetContentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ContentStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ContentStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ContentStatus::ACTIVE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ContentStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ContentStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ContentStatus::DELETED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ContentStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentStatus>(hashCode);
          }

          return ContentStatus::NOT_SET;
        }

        Aws::String GetNameForContentStatus(ContentStatus enumValue)
        {
          switch(enumValue)
          {
          case ContentStatus::NOT_SET:
            return {};
          case ContentStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ContentStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ContentStatus::ACTIVE:
            return "ACTIVE";
          case ContentStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ContentStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ContentStatus::DELETED:
            return "DELETED";
          case ContentStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentStatusMapper
    } // namespace Model
  } // namespace ConnectWisdomService
} // namespace Aws
