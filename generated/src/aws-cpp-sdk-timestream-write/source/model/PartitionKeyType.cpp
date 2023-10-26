/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/PartitionKeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamWrite
  {
    namespace Model
    {
      namespace PartitionKeyTypeMapper
      {

        static const int DIMENSION_HASH = HashingUtils::HashString("DIMENSION");
        static const int MEASURE_HASH = HashingUtils::HashString("MEASURE");


        PartitionKeyType GetPartitionKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIMENSION_HASH)
          {
            return PartitionKeyType::DIMENSION;
          }
          else if (hashCode == MEASURE_HASH)
          {
            return PartitionKeyType::MEASURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartitionKeyType>(hashCode);
          }

          return PartitionKeyType::NOT_SET;
        }

        Aws::String GetNameForPartitionKeyType(PartitionKeyType enumValue)
        {
          switch(enumValue)
          {
          case PartitionKeyType::NOT_SET:
            return {};
          case PartitionKeyType::DIMENSION:
            return "DIMENSION";
          case PartitionKeyType::MEASURE:
            return "MEASURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartitionKeyTypeMapper
    } // namespace Model
  } // namespace TimestreamWrite
} // namespace Aws
