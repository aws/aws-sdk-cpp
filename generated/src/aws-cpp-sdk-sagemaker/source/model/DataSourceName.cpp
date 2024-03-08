/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DataSourceName.h>
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
      namespace DataSourceNameMapper
      {

        static const int SalesforceGenie_HASH = HashingUtils::HashString("SalesforceGenie");
        static const int Snowflake_HASH = HashingUtils::HashString("Snowflake");


        DataSourceName GetDataSourceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SalesforceGenie_HASH)
          {
            return DataSourceName::SalesforceGenie;
          }
          else if (hashCode == Snowflake_HASH)
          {
            return DataSourceName::Snowflake;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceName>(hashCode);
          }

          return DataSourceName::NOT_SET;
        }

        Aws::String GetNameForDataSourceName(DataSourceName enumValue)
        {
          switch(enumValue)
          {
          case DataSourceName::NOT_SET:
            return {};
          case DataSourceName::SalesforceGenie:
            return "SalesforceGenie";
          case DataSourceName::Snowflake:
            return "Snowflake";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceNameMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
