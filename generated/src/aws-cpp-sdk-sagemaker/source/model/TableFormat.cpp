/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TableFormat.h>
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
      namespace TableFormatMapper
      {

        static constexpr uint32_t Glue_HASH = ConstExprHashingUtils::HashString("Glue");
        static constexpr uint32_t Iceberg_HASH = ConstExprHashingUtils::HashString("Iceberg");


        TableFormat GetTableFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Glue_HASH)
          {
            return TableFormat::Glue;
          }
          else if (hashCode == Iceberg_HASH)
          {
            return TableFormat::Iceberg;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableFormat>(hashCode);
          }

          return TableFormat::NOT_SET;
        }

        Aws::String GetNameForTableFormat(TableFormat enumValue)
        {
          switch(enumValue)
          {
          case TableFormat::NOT_SET:
            return {};
          case TableFormat::Glue:
            return "Glue";
          case TableFormat::Iceberg:
            return "Iceberg";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableFormatMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
