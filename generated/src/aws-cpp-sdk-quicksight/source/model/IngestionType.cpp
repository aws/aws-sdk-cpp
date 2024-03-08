/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IngestionType.h>
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
      namespace IngestionTypeMapper
      {

        static const int INCREMENTAL_REFRESH_HASH = HashingUtils::HashString("INCREMENTAL_REFRESH");
        static const int FULL_REFRESH_HASH = HashingUtils::HashString("FULL_REFRESH");


        IngestionType GetIngestionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCREMENTAL_REFRESH_HASH)
          {
            return IngestionType::INCREMENTAL_REFRESH;
          }
          else if (hashCode == FULL_REFRESH_HASH)
          {
            return IngestionType::FULL_REFRESH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionType>(hashCode);
          }

          return IngestionType::NOT_SET;
        }

        Aws::String GetNameForIngestionType(IngestionType enumValue)
        {
          switch(enumValue)
          {
          case IngestionType::NOT_SET:
            return {};
          case IngestionType::INCREMENTAL_REFRESH:
            return "INCREMENTAL_REFRESH";
          case IngestionType::FULL_REFRESH:
            return "FULL_REFRESH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
