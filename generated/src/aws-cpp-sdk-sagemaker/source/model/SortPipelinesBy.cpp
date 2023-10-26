/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortPipelinesBy.h>
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
      namespace SortPipelinesByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        SortPipelinesBy GetSortPipelinesByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return SortPipelinesBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return SortPipelinesBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortPipelinesBy>(hashCode);
          }

          return SortPipelinesBy::NOT_SET;
        }

        Aws::String GetNameForSortPipelinesBy(SortPipelinesBy enumValue)
        {
          switch(enumValue)
          {
          case SortPipelinesBy::NOT_SET:
            return {};
          case SortPipelinesBy::Name:
            return "Name";
          case SortPipelinesBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortPipelinesByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
