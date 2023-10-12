/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelVariantAction.h>
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
      namespace ModelVariantActionMapper
      {

        static constexpr uint32_t Retain_HASH = ConstExprHashingUtils::HashString("Retain");
        static constexpr uint32_t Remove_HASH = ConstExprHashingUtils::HashString("Remove");
        static constexpr uint32_t Promote_HASH = ConstExprHashingUtils::HashString("Promote");


        ModelVariantAction GetModelVariantActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Retain_HASH)
          {
            return ModelVariantAction::Retain;
          }
          else if (hashCode == Remove_HASH)
          {
            return ModelVariantAction::Remove;
          }
          else if (hashCode == Promote_HASH)
          {
            return ModelVariantAction::Promote;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelVariantAction>(hashCode);
          }

          return ModelVariantAction::NOT_SET;
        }

        Aws::String GetNameForModelVariantAction(ModelVariantAction enumValue)
        {
          switch(enumValue)
          {
          case ModelVariantAction::NOT_SET:
            return {};
          case ModelVariantAction::Retain:
            return "Retain";
          case ModelVariantAction::Remove:
            return "Remove";
          case ModelVariantAction::Promote:
            return "Promote";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelVariantActionMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
