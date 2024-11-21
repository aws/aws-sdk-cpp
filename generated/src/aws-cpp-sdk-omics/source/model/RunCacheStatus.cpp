/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/RunCacheStatus.h>
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
      namespace RunCacheStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        RunCacheStatus GetRunCacheStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return RunCacheStatus::ACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return RunCacheStatus::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RunCacheStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunCacheStatus>(hashCode);
          }

          return RunCacheStatus::NOT_SET;
        }

        Aws::String GetNameForRunCacheStatus(RunCacheStatus enumValue)
        {
          switch(enumValue)
          {
          case RunCacheStatus::NOT_SET:
            return {};
          case RunCacheStatus::ACTIVE:
            return "ACTIVE";
          case RunCacheStatus::DELETED:
            return "DELETED";
          case RunCacheStatus::FAILED:
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

      } // namespace RunCacheStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
