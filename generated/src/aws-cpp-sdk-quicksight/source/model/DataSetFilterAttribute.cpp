/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSetFilterAttribute.h>
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
      namespace DataSetFilterAttributeMapper
      {

        static constexpr uint32_t QUICKSIGHT_VIEWER_OR_OWNER_HASH = ConstExprHashingUtils::HashString("QUICKSIGHT_VIEWER_OR_OWNER");
        static constexpr uint32_t QUICKSIGHT_OWNER_HASH = ConstExprHashingUtils::HashString("QUICKSIGHT_OWNER");
        static constexpr uint32_t DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH = ConstExprHashingUtils::HashString("DIRECT_QUICKSIGHT_VIEWER_OR_OWNER");
        static constexpr uint32_t DIRECT_QUICKSIGHT_OWNER_HASH = ConstExprHashingUtils::HashString("DIRECT_QUICKSIGHT_OWNER");
        static constexpr uint32_t DIRECT_QUICKSIGHT_SOLE_OWNER_HASH = ConstExprHashingUtils::HashString("DIRECT_QUICKSIGHT_SOLE_OWNER");
        static constexpr uint32_t DATASET_NAME_HASH = ConstExprHashingUtils::HashString("DATASET_NAME");


        DataSetFilterAttribute GetDataSetFilterAttributeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUICKSIGHT_VIEWER_OR_OWNER_HASH)
          {
            return DataSetFilterAttribute::QUICKSIGHT_VIEWER_OR_OWNER;
          }
          else if (hashCode == QUICKSIGHT_OWNER_HASH)
          {
            return DataSetFilterAttribute::QUICKSIGHT_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH)
          {
            return DataSetFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_OWNER_HASH)
          {
            return DataSetFilterAttribute::DIRECT_QUICKSIGHT_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_SOLE_OWNER_HASH)
          {
            return DataSetFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER;
          }
          else if (hashCode == DATASET_NAME_HASH)
          {
            return DataSetFilterAttribute::DATASET_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSetFilterAttribute>(hashCode);
          }

          return DataSetFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForDataSetFilterAttribute(DataSetFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case DataSetFilterAttribute::NOT_SET:
            return {};
          case DataSetFilterAttribute::QUICKSIGHT_VIEWER_OR_OWNER:
            return "QUICKSIGHT_VIEWER_OR_OWNER";
          case DataSetFilterAttribute::QUICKSIGHT_OWNER:
            return "QUICKSIGHT_OWNER";
          case DataSetFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER:
            return "DIRECT_QUICKSIGHT_VIEWER_OR_OWNER";
          case DataSetFilterAttribute::DIRECT_QUICKSIGHT_OWNER:
            return "DIRECT_QUICKSIGHT_OWNER";
          case DataSetFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER:
            return "DIRECT_QUICKSIGHT_SOLE_OWNER";
          case DataSetFilterAttribute::DATASET_NAME:
            return "DATASET_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSetFilterAttributeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
