/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListOptimizationJobsSortBy.h>
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
      namespace ListOptimizationJobsSortByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        ListOptimizationJobsSortBy GetListOptimizationJobsSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ListOptimizationJobsSortBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return ListOptimizationJobsSortBy::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return ListOptimizationJobsSortBy::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListOptimizationJobsSortBy>(hashCode);
          }

          return ListOptimizationJobsSortBy::NOT_SET;
        }

        Aws::String GetNameForListOptimizationJobsSortBy(ListOptimizationJobsSortBy enumValue)
        {
          switch(enumValue)
          {
          case ListOptimizationJobsSortBy::NOT_SET:
            return {};
          case ListOptimizationJobsSortBy::Name:
            return "Name";
          case ListOptimizationJobsSortBy::CreationTime:
            return "CreationTime";
          case ListOptimizationJobsSortBy::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListOptimizationJobsSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
