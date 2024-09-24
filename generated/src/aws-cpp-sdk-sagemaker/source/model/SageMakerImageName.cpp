/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SageMakerImageName.h>
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
      namespace SageMakerImageNameMapper
      {

        static const int sagemaker_distribution_HASH = HashingUtils::HashString("sagemaker_distribution");


        SageMakerImageName GetSageMakerImageNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sagemaker_distribution_HASH)
          {
            return SageMakerImageName::sagemaker_distribution;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SageMakerImageName>(hashCode);
          }

          return SageMakerImageName::NOT_SET;
        }

        Aws::String GetNameForSageMakerImageName(SageMakerImageName enumValue)
        {
          switch(enumValue)
          {
          case SageMakerImageName::NOT_SET:
            return {};
          case SageMakerImageName::sagemaker_distribution:
            return "sagemaker_distribution";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SageMakerImageNameMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
