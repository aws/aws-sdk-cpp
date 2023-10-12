/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DetailedAlgorithmStatus.h>
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
      namespace DetailedAlgorithmStatusMapper
      {

        static constexpr uint32_t NotStarted_HASH = ConstExprHashingUtils::HashString("NotStarted");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        DetailedAlgorithmStatus GetDetailedAlgorithmStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotStarted_HASH)
          {
            return DetailedAlgorithmStatus::NotStarted;
          }
          else if (hashCode == InProgress_HASH)
          {
            return DetailedAlgorithmStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return DetailedAlgorithmStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return DetailedAlgorithmStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetailedAlgorithmStatus>(hashCode);
          }

          return DetailedAlgorithmStatus::NOT_SET;
        }

        Aws::String GetNameForDetailedAlgorithmStatus(DetailedAlgorithmStatus enumValue)
        {
          switch(enumValue)
          {
          case DetailedAlgorithmStatus::NOT_SET:
            return {};
          case DetailedAlgorithmStatus::NotStarted:
            return "NotStarted";
          case DetailedAlgorithmStatus::InProgress:
            return "InProgress";
          case DetailedAlgorithmStatus::Completed:
            return "Completed";
          case DetailedAlgorithmStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DetailedAlgorithmStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
