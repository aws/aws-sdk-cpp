/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentStatus.h>
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
      namespace InferenceComponentStatusMapper
      {

        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        InferenceComponentStatus GetInferenceComponentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InService_HASH)
          {
            return InferenceComponentStatus::InService;
          }
          else if (hashCode == Creating_HASH)
          {
            return InferenceComponentStatus::Creating;
          }
          else if (hashCode == Updating_HASH)
          {
            return InferenceComponentStatus::Updating;
          }
          else if (hashCode == Failed_HASH)
          {
            return InferenceComponentStatus::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return InferenceComponentStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceComponentStatus>(hashCode);
          }

          return InferenceComponentStatus::NOT_SET;
        }

        Aws::String GetNameForInferenceComponentStatus(InferenceComponentStatus enumValue)
        {
          switch(enumValue)
          {
          case InferenceComponentStatus::NOT_SET:
            return {};
          case InferenceComponentStatus::InService:
            return "InService";
          case InferenceComponentStatus::Creating:
            return "Creating";
          case InferenceComponentStatus::Updating:
            return "Updating";
          case InferenceComponentStatus::Failed:
            return "Failed";
          case InferenceComponentStatus::Deleting:
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

      } // namespace InferenceComponentStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
