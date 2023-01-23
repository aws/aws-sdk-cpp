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

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        AlgorithmStatus GetAlgorithmStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
