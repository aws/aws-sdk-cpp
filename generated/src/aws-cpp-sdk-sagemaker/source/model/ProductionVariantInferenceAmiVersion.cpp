/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProductionVariantInferenceAmiVersion.h>
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
      namespace ProductionVariantInferenceAmiVersionMapper
      {

        static const int al2_ami_sagemaker_inference_gpu_2_HASH = HashingUtils::HashString("al2-ami-sagemaker-inference-gpu-2");


        ProductionVariantInferenceAmiVersion GetProductionVariantInferenceAmiVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == al2_ami_sagemaker_inference_gpu_2_HASH)
          {
            return ProductionVariantInferenceAmiVersion::al2_ami_sagemaker_inference_gpu_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProductionVariantInferenceAmiVersion>(hashCode);
          }

          return ProductionVariantInferenceAmiVersion::NOT_SET;
        }

        Aws::String GetNameForProductionVariantInferenceAmiVersion(ProductionVariantInferenceAmiVersion enumValue)
        {
          switch(enumValue)
          {
          case ProductionVariantInferenceAmiVersion::NOT_SET:
            return {};
          case ProductionVariantInferenceAmiVersion::al2_ami_sagemaker_inference_gpu_2:
            return "al2-ami-sagemaker-inference-gpu-2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProductionVariantInferenceAmiVersionMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
