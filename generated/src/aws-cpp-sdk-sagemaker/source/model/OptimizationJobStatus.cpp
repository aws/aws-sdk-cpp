/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OptimizationJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace OptimizationJobStatusMapper
      {

        static const int INPROGRESS_HASH = HashingUtils::HashString("INPROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        OptimizationJobStatus GetOptimizationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INPROGRESS_HASH)
          {
            return OptimizationJobStatus::INPROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return OptimizationJobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return OptimizationJobStatus::FAILED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return OptimizationJobStatus::STARTING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return OptimizationJobStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return OptimizationJobStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OptimizationJobStatus>(hashCode);
          }

          return OptimizationJobStatus::NOT_SET;
        }

        Aws::String GetNameForOptimizationJobStatus(OptimizationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case OptimizationJobStatus::NOT_SET:
            return {};
          case OptimizationJobStatus::INPROGRESS:
            return "INPROGRESS";
          case OptimizationJobStatus::COMPLETED:
            return "COMPLETED";
          case OptimizationJobStatus::FAILED:
            return "FAILED";
          case OptimizationJobStatus::STARTING:
            return "STARTING";
          case OptimizationJobStatus::STOPPING:
            return "STOPPING";
          case OptimizationJobStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OptimizationJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
