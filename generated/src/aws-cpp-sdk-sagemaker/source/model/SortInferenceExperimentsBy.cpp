/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortInferenceExperimentsBy.h>
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
      namespace SortInferenceExperimentsByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        SortInferenceExperimentsBy GetSortInferenceExperimentsByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return SortInferenceExperimentsBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return SortInferenceExperimentsBy::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return SortInferenceExperimentsBy::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortInferenceExperimentsBy>(hashCode);
          }

          return SortInferenceExperimentsBy::NOT_SET;
        }

        Aws::String GetNameForSortInferenceExperimentsBy(SortInferenceExperimentsBy enumValue)
        {
          switch(enumValue)
          {
          case SortInferenceExperimentsBy::Name:
            return "Name";
          case SortInferenceExperimentsBy::CreationTime:
            return "CreationTime";
          case SortInferenceExperimentsBy::Status:
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

      } // namespace SortInferenceExperimentsByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
