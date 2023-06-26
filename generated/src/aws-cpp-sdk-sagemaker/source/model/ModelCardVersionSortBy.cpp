/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCardVersionSortBy.h>
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
      namespace ModelCardVersionSortByMapper
      {

        static const int Version_HASH = HashingUtils::HashString("Version");


        ModelCardVersionSortBy GetModelCardVersionSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Version_HASH)
          {
            return ModelCardVersionSortBy::Version;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCardVersionSortBy>(hashCode);
          }

          return ModelCardVersionSortBy::NOT_SET;
        }

        Aws::String GetNameForModelCardVersionSortBy(ModelCardVersionSortBy enumValue)
        {
          switch(enumValue)
          {
          case ModelCardVersionSortBy::Version:
            return "Version";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelCardVersionSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
