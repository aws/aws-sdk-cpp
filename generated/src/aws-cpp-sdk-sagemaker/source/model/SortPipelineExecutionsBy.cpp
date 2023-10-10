/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortPipelineExecutionsBy.h>
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
      namespace SortPipelineExecutionsByMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int PipelineExecutionArn_HASH = HashingUtils::HashString("PipelineExecutionArn");


        SortPipelineExecutionsBy GetSortPipelineExecutionsByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return SortPipelineExecutionsBy::CreationTime;
          }
          else if (hashCode == PipelineExecutionArn_HASH)
          {
            return SortPipelineExecutionsBy::PipelineExecutionArn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortPipelineExecutionsBy>(hashCode);
          }

          return SortPipelineExecutionsBy::NOT_SET;
        }

        Aws::String GetNameForSortPipelineExecutionsBy(SortPipelineExecutionsBy enumValue)
        {
          switch(enumValue)
          {
          case SortPipelineExecutionsBy::NOT_SET:
            return {};
          case SortPipelineExecutionsBy::CreationTime:
            return "CreationTime";
          case SortPipelineExecutionsBy::PipelineExecutionArn:
            return "PipelineExecutionArn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortPipelineExecutionsByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
