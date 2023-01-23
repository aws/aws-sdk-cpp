/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CrossDatasetTypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace CrossDatasetTypesMapper
      {

        static const int ALL_DATASETS_HASH = HashingUtils::HashString("ALL_DATASETS");
        static const int SINGLE_DATASET_HASH = HashingUtils::HashString("SINGLE_DATASET");


        CrossDatasetTypes GetCrossDatasetTypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_DATASETS_HASH)
          {
            return CrossDatasetTypes::ALL_DATASETS;
          }
          else if (hashCode == SINGLE_DATASET_HASH)
          {
            return CrossDatasetTypes::SINGLE_DATASET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CrossDatasetTypes>(hashCode);
          }

          return CrossDatasetTypes::NOT_SET;
        }

        Aws::String GetNameForCrossDatasetTypes(CrossDatasetTypes enumValue)
        {
          switch(enumValue)
          {
          case CrossDatasetTypes::ALL_DATASETS:
            return "ALL_DATASETS";
          case CrossDatasetTypes::SINGLE_DATASET:
            return "SINGLE_DATASET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CrossDatasetTypesMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
