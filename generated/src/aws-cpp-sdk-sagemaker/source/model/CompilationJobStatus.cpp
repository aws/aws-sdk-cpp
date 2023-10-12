/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CompilationJobStatus.h>
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
      namespace CompilationJobStatusMapper
      {

        static constexpr uint32_t INPROGRESS_HASH = ConstExprHashingUtils::HashString("INPROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        CompilationJobStatus GetCompilationJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INPROGRESS_HASH)
          {
            return CompilationJobStatus::INPROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CompilationJobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CompilationJobStatus::FAILED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return CompilationJobStatus::STARTING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return CompilationJobStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return CompilationJobStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompilationJobStatus>(hashCode);
          }

          return CompilationJobStatus::NOT_SET;
        }

        Aws::String GetNameForCompilationJobStatus(CompilationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case CompilationJobStatus::NOT_SET:
            return {};
          case CompilationJobStatus::INPROGRESS:
            return "INPROGRESS";
          case CompilationJobStatus::COMPLETED:
            return "COMPLETED";
          case CompilationJobStatus::FAILED:
            return "FAILED";
          case CompilationJobStatus::STARTING:
            return "STARTING";
          case CompilationJobStatus::STOPPING:
            return "STOPPING";
          case CompilationJobStatus::STOPPED:
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

      } // namespace CompilationJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
