/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/ResultFormatString.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftDataAPIService
  {
    namespace Model
    {
      namespace ResultFormatStringMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int CSV_HASH = HashingUtils::HashString("CSV");


        ResultFormatString GetResultFormatStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return ResultFormatString::JSON;
          }
          else if (hashCode == CSV_HASH)
          {
            return ResultFormatString::CSV;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResultFormatString>(hashCode);
          }

          return ResultFormatString::NOT_SET;
        }

        Aws::String GetNameForResultFormatString(ResultFormatString enumValue)
        {
          switch(enumValue)
          {
          case ResultFormatString::NOT_SET:
            return {};
          case ResultFormatString::JSON:
            return "JSON";
          case ResultFormatString::CSV:
            return "CSV";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResultFormatStringMapper
    } // namespace Model
  } // namespace RedshiftDataAPIService
} // namespace Aws
