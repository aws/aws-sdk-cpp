/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FeatureGroupSortOrder.h>
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
      namespace FeatureGroupSortOrderMapper
      {

        static constexpr uint32_t Ascending_HASH = ConstExprHashingUtils::HashString("Ascending");
        static constexpr uint32_t Descending_HASH = ConstExprHashingUtils::HashString("Descending");


        FeatureGroupSortOrder GetFeatureGroupSortOrderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ascending_HASH)
          {
            return FeatureGroupSortOrder::Ascending;
          }
          else if (hashCode == Descending_HASH)
          {
            return FeatureGroupSortOrder::Descending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureGroupSortOrder>(hashCode);
          }

          return FeatureGroupSortOrder::NOT_SET;
        }

        Aws::String GetNameForFeatureGroupSortOrder(FeatureGroupSortOrder enumValue)
        {
          switch(enumValue)
          {
          case FeatureGroupSortOrder::NOT_SET:
            return {};
          case FeatureGroupSortOrder::Ascending:
            return "Ascending";
          case FeatureGroupSortOrder::Descending:
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

      } // namespace FeatureGroupSortOrderMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
