/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/WorkerReplacementStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MWAA
  {
    namespace Model
    {
      namespace WorkerReplacementStrategyMapper
      {

        static const int FORCED_HASH = HashingUtils::HashString("FORCED");
        static const int GRACEFUL_HASH = HashingUtils::HashString("GRACEFUL");


        WorkerReplacementStrategy GetWorkerReplacementStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORCED_HASH)
          {
            return WorkerReplacementStrategy::FORCED;
          }
          else if (hashCode == GRACEFUL_HASH)
          {
            return WorkerReplacementStrategy::GRACEFUL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkerReplacementStrategy>(hashCode);
          }

          return WorkerReplacementStrategy::NOT_SET;
        }

        Aws::String GetNameForWorkerReplacementStrategy(WorkerReplacementStrategy enumValue)
        {
          switch(enumValue)
          {
          case WorkerReplacementStrategy::NOT_SET:
            return {};
          case WorkerReplacementStrategy::FORCED:
            return "FORCED";
          case WorkerReplacementStrategy::GRACEFUL:
            return "GRACEFUL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkerReplacementStrategyMapper
    } // namespace Model
  } // namespace MWAA
} // namespace Aws
