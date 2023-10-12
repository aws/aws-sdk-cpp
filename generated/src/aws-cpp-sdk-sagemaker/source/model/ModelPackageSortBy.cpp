/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackageSortBy.h>
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
      namespace ModelPackageSortByMapper
      {

        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");
        static constexpr uint32_t CreationTime_HASH = ConstExprHashingUtils::HashString("CreationTime");


        ModelPackageSortBy GetModelPackageSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ModelPackageSortBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return ModelPackageSortBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelPackageSortBy>(hashCode);
          }

          return ModelPackageSortBy::NOT_SET;
        }

        Aws::String GetNameForModelPackageSortBy(ModelPackageSortBy enumValue)
        {
          switch(enumValue)
          {
          case ModelPackageSortBy::NOT_SET:
            return {};
          case ModelPackageSortBy::Name:
            return "Name";
          case ModelPackageSortBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelPackageSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
