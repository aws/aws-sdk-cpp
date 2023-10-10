/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelApprovalStatus.h>
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
      namespace ModelApprovalStatusMapper
      {

        static const int Approved_HASH = HashingUtils::HashString("Approved");
        static const int Rejected_HASH = HashingUtils::HashString("Rejected");
        static const int PendingManualApproval_HASH = HashingUtils::HashString("PendingManualApproval");


        ModelApprovalStatus GetModelApprovalStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Approved_HASH)
          {
            return ModelApprovalStatus::Approved;
          }
          else if (hashCode == Rejected_HASH)
          {
            return ModelApprovalStatus::Rejected;
          }
          else if (hashCode == PendingManualApproval_HASH)
          {
            return ModelApprovalStatus::PendingManualApproval;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelApprovalStatus>(hashCode);
          }

          return ModelApprovalStatus::NOT_SET;
        }

        Aws::String GetNameForModelApprovalStatus(ModelApprovalStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelApprovalStatus::NOT_SET:
            return {};
          case ModelApprovalStatus::Approved:
            return "Approved";
          case ModelApprovalStatus::Rejected:
            return "Rejected";
          case ModelApprovalStatus::PendingManualApproval:
            return "PendingManualApproval";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelApprovalStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
