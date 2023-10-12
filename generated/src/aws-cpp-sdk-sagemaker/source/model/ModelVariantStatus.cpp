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

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t InService_HASH = ConstExprHashingUtils::HashString("InService");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Deleted_HASH = ConstExprHashingUtils::HashString("Deleted");


        ModelVariantStatus GetModelVariantStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ModelVariantStatus::NOT_SET:
            return {};
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
