/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DatasetParameterValueType.h>
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
      namespace DatasetParameterValueTypeMapper
      {

        static const int MULTI_VALUED_HASH = HashingUtils::HashString("MULTI_VALUED");
        static const int SINGLE_VALUED_HASH = HashingUtils::HashString("SINGLE_VALUED");


        DatasetParameterValueType GetDatasetParameterValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTI_VALUED_HASH)
          {
            return DatasetParameterValueType::MULTI_VALUED;
          }
          else if (hashCode == SINGLE_VALUED_HASH)
          {
            return DatasetParameterValueType::SINGLE_VALUED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetParameterValueType>(hashCode);
          }

          return DatasetParameterValueType::NOT_SET;
        }

        Aws::String GetNameForDatasetParameterValueType(DatasetParameterValueType enumValue)
        {
          switch(enumValue)
          {
          case DatasetParameterValueType::NOT_SET:
            return {};
          case DatasetParameterValueType::MULTI_VALUED:
            return "MULTI_VALUED";
          case DatasetParameterValueType::SINGLE_VALUED:
            return "SINGLE_VALUED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetParameterValueTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
