/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackageGroupSortBy.h>
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
      namespace ModelPackageGroupSortByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        ModelPackageGroupSortBy GetModelPackageGroupSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ModelPackageGroupSortBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return ModelPackageGroupSortBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelPackageGroupSortBy>(hashCode);
          }

          return ModelPackageGroupSortBy::NOT_SET;
        }

        Aws::String GetNameForModelPackageGroupSortBy(ModelPackageGroupSortBy enumValue)
        {
          switch(enumValue)
          {
          case ModelPackageGroupSortBy::NOT_SET:
            return {};
          case ModelPackageGroupSortBy::Name:
            return "Name";
          case ModelPackageGroupSortBy::CreationTime:
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

      } // namespace ModelPackageGroupSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
