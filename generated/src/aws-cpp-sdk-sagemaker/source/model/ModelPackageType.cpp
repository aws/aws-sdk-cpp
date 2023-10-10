/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackageType.h>
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
      namespace ModelPackageTypeMapper
      {

        static const int Versioned_HASH = HashingUtils::HashString("Versioned");
        static const int Unversioned_HASH = HashingUtils::HashString("Unversioned");
        static const int Both_HASH = HashingUtils::HashString("Both");


        ModelPackageType GetModelPackageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Versioned_HASH)
          {
            return ModelPackageType::Versioned;
          }
          else if (hashCode == Unversioned_HASH)
          {
            return ModelPackageType::Unversioned;
          }
          else if (hashCode == Both_HASH)
          {
            return ModelPackageType::Both;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelPackageType>(hashCode);
          }

          return ModelPackageType::NOT_SET;
        }

        Aws::String GetNameForModelPackageType(ModelPackageType enumValue)
        {
          switch(enumValue)
          {
          case ModelPackageType::NOT_SET:
            return {};
          case ModelPackageType::Versioned:
            return "Versioned";
          case ModelPackageType::Unversioned:
            return "Unversioned";
          case ModelPackageType::Both:
            return "Both";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelPackageTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
