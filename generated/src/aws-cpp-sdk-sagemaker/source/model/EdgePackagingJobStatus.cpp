/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgePackagingJobStatus.h>
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
      namespace EdgePackagingJobStatusMapper
      {

        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t INPROGRESS_HASH = ConstExprHashingUtils::HashString("INPROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        EdgePackagingJobStatus GetEdgePackagingJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return EdgePackagingJobStatus::STARTING;
          }
          else if (hashCode == INPROGRESS_HASH)
          {
            return EdgePackagingJobStatus::INPROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return EdgePackagingJobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EdgePackagingJobStatus::FAILED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return EdgePackagingJobStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return EdgePackagingJobStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EdgePackagingJobStatus>(hashCode);
          }

          return EdgePackagingJobStatus::NOT_SET;
        }

        Aws::String GetNameForEdgePackagingJobStatus(EdgePackagingJobStatus enumValue)
        {
          switch(enumValue)
          {
          case EdgePackagingJobStatus::NOT_SET:
            return {};
          case EdgePackagingJobStatus::STARTING:
            return "STARTING";
          case EdgePackagingJobStatus::INPROGRESS:
            return "INPROGRESS";
          case EdgePackagingJobStatus::COMPLETED:
            return "COMPLETED";
          case EdgePackagingJobStatus::FAILED:
            return "FAILED";
          case EdgePackagingJobStatus::STOPPING:
            return "STOPPING";
          case EdgePackagingJobStatus::STOPPED:
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

      } // namespace EdgePackagingJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
