/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AlgorithmStatus.h>
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
      namespace AlgorithmStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");


        AlgorithmStatus GetAlgorithmStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return AlgorithmStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return AlgorithmStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return AlgorithmStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return AlgorithmStatus::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return AlgorithmStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlgorithmStatus>(hashCode);
          }

          return AlgorithmStatus::NOT_SET;
        }

        Aws::String GetNameForAlgorithmStatus(AlgorithmStatus enumValue)
        {
          switch(enumValue)
          {
          case AlgorithmStatus::NOT_SET:
            return {};
          case AlgorithmStatus::Pending:
            return "Pending";
          case AlgorithmStatus::InProgress:
            return "InProgress";
          case AlgorithmStatus::Completed:
            return "Completed";
          case AlgorithmStatus::Failed:
            return "Failed";
          case AlgorithmStatus::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlgorithmStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
