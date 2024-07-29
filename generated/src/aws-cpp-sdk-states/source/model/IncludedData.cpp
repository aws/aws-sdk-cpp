/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/IncludedData.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace IncludedDataMapper
      {

        static const int ALL_DATA_HASH = HashingUtils::HashString("ALL_DATA");
        static const int METADATA_ONLY_HASH = HashingUtils::HashString("METADATA_ONLY");


        IncludedData GetIncludedDataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_DATA_HASH)
          {
            return IncludedData::ALL_DATA;
          }
          else if (hashCode == METADATA_ONLY_HASH)
          {
            return IncludedData::METADATA_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncludedData>(hashCode);
          }

          return IncludedData::NOT_SET;
        }

        Aws::String GetNameForIncludedData(IncludedData enumValue)
        {
          switch(enumValue)
          {
          case IncludedData::NOT_SET:
            return {};
          case IncludedData::ALL_DATA:
            return "ALL_DATA";
          case IncludedData::METADATA_ONLY:
            return "METADATA_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncludedDataMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
