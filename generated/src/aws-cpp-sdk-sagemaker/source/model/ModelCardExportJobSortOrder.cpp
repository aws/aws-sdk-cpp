/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCardExportJobSortOrder.h>
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
      namespace ModelCardExportJobSortOrderMapper
      {

        static const int Ascending_HASH = HashingUtils::HashString("Ascending");
        static const int Descending_HASH = HashingUtils::HashString("Descending");


        ModelCardExportJobSortOrder GetModelCardExportJobSortOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ascending_HASH)
          {
            return ModelCardExportJobSortOrder::Ascending;
          }
          else if (hashCode == Descending_HASH)
          {
            return ModelCardExportJobSortOrder::Descending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCardExportJobSortOrder>(hashCode);
          }

          return ModelCardExportJobSortOrder::NOT_SET;
        }

        Aws::String GetNameForModelCardExportJobSortOrder(ModelCardExportJobSortOrder enumValue)
        {
          switch(enumValue)
          {
          case ModelCardExportJobSortOrder::Ascending:
            return "Ascending";
          case ModelCardExportJobSortOrder::Descending:
            return "Descending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelCardExportJobSortOrderMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
