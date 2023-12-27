/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/RecordsFormatType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDSDataService
  {
    namespace Model
    {
      namespace RecordsFormatTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        RecordsFormatType GetRecordsFormatTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return RecordsFormatType::NONE;
          }
          else if (hashCode == JSON_HASH)
          {
            return RecordsFormatType::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordsFormatType>(hashCode);
          }

          return RecordsFormatType::NOT_SET;
        }

        Aws::String GetNameForRecordsFormatType(RecordsFormatType enumValue)
        {
          switch(enumValue)
          {
          case RecordsFormatType::NOT_SET:
            return {};
          case RecordsFormatType::NONE:
            return "NONE";
          case RecordsFormatType::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordsFormatTypeMapper
    } // namespace Model
  } // namespace RDSDataService
} // namespace Aws
