/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CandidateSortBy.h>
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
      namespace CandidateSortByMapper
      {

        static constexpr uint32_t CreationTime_HASH = ConstExprHashingUtils::HashString("CreationTime");
        static constexpr uint32_t Status_HASH = ConstExprHashingUtils::HashString("Status");
        static constexpr uint32_t FinalObjectiveMetricValue_HASH = ConstExprHashingUtils::HashString("FinalObjectiveMetricValue");


        CandidateSortBy GetCandidateSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return CandidateSortBy::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return CandidateSortBy::Status;
          }
          else if (hashCode == FinalObjectiveMetricValue_HASH)
          {
            return CandidateSortBy::FinalObjectiveMetricValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CandidateSortBy>(hashCode);
          }

          return CandidateSortBy::NOT_SET;
        }

        Aws::String GetNameForCandidateSortBy(CandidateSortBy enumValue)
        {
          switch(enumValue)
          {
          case CandidateSortBy::NOT_SET:
            return {};
          case CandidateSortBy::CreationTime:
            return "CreationTime";
          case CandidateSortBy::Status:
            return "Status";
          case CandidateSortBy::FinalObjectiveMetricValue:
            return "FinalObjectiveMetricValue";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CandidateSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
