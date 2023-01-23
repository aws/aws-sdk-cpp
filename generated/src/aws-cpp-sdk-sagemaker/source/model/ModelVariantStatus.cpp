/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelVariantStatus.h>
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
      namespace ModelVariantStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");


        ModelVariantStatus GetModelVariantStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return ModelVariantStatus::Creating;
          }
          else if (hashCode == Updating_HASH)
          {
            return ModelVariantStatus::Updating;
          }
          else if (hashCode == InService_HASH)
          {
            return ModelVariantStatus::InService;
          }
          else if (hashCode == Deleting_HASH)
          {
            return ModelVariantStatus::Deleting;
          }
          else if (hashCode == Deleted_HASH)
          {
            return ModelVariantStatus::Deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelVariantStatus>(hashCode);
          }

          return ModelVariantStatus::NOT_SET;
        }

        Aws::String GetNameForModelVariantStatus(ModelVariantStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelVariantStatus::Creating:
            return "Creating";
          case ModelVariantStatus::Updating:
            return "Updating";
          case ModelVariantStatus::InService:
            return "InService";
          case ModelVariantStatus::Deleting:
            return "Deleting";
          case ModelVariantStatus::Deleted:
            return "Deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelVariantStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
