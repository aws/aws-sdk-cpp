/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/RepositorySyncStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace RepositorySyncStatusMapper
      {

        static constexpr uint32_t INITIATED_HASH = ConstExprHashingUtils::HashString("INITIATED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t QUEUED_HASH = ConstExprHashingUtils::HashString("QUEUED");


        RepositorySyncStatus GetRepositorySyncStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIATED_HASH)
          {
            return RepositorySyncStatus::INITIATED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return RepositorySyncStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return RepositorySyncStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RepositorySyncStatus::FAILED;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return RepositorySyncStatus::QUEUED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RepositorySyncStatus>(hashCode);
          }

          return RepositorySyncStatus::NOT_SET;
        }

        Aws::String GetNameForRepositorySyncStatus(RepositorySyncStatus enumValue)
        {
          switch(enumValue)
          {
          case RepositorySyncStatus::NOT_SET:
            return {};
          case RepositorySyncStatus::INITIATED:
            return "INITIATED";
          case RepositorySyncStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case RepositorySyncStatus::SUCCEEDED:
            return "SUCCEEDED";
          case RepositorySyncStatus::FAILED:
            return "FAILED";
          case RepositorySyncStatus::QUEUED:
            return "QUEUED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RepositorySyncStatusMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
