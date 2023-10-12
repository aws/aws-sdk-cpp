/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/SnapshotAttributeToSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace SnapshotAttributeToSortByMapper
      {

        static constexpr uint32_t SOURCE_TYPE_HASH = ConstExprHashingUtils::HashString("SOURCE_TYPE");
        static constexpr uint32_t TOTAL_SIZE_HASH = ConstExprHashingUtils::HashString("TOTAL_SIZE");
        static constexpr uint32_t CREATE_TIME_HASH = ConstExprHashingUtils::HashString("CREATE_TIME");


        SnapshotAttributeToSortBy GetSnapshotAttributeToSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_TYPE_HASH)
          {
            return SnapshotAttributeToSortBy::SOURCE_TYPE;
          }
          else if (hashCode == TOTAL_SIZE_HASH)
          {
            return SnapshotAttributeToSortBy::TOTAL_SIZE;
          }
          else if (hashCode == CREATE_TIME_HASH)
          {
            return SnapshotAttributeToSortBy::CREATE_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotAttributeToSortBy>(hashCode);
          }

          return SnapshotAttributeToSortBy::NOT_SET;
        }

        Aws::String GetNameForSnapshotAttributeToSortBy(SnapshotAttributeToSortBy enumValue)
        {
          switch(enumValue)
          {
          case SnapshotAttributeToSortBy::NOT_SET:
            return {};
          case SnapshotAttributeToSortBy::SOURCE_TYPE:
            return "SOURCE_TYPE";
          case SnapshotAttributeToSortBy::TOTAL_SIZE:
            return "TOTAL_SIZE";
          case SnapshotAttributeToSortBy::CREATE_TIME:
            return "CREATE_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotAttributeToSortByMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
