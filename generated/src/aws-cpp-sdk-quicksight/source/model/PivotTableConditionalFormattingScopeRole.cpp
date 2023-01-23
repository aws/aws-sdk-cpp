/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableConditionalFormattingScopeRole.h>
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
      namespace PivotTableConditionalFormattingScopeRoleMapper
      {

        static const int FIELD_HASH = HashingUtils::HashString("FIELD");
        static const int FIELD_TOTAL_HASH = HashingUtils::HashString("FIELD_TOTAL");
        static const int GRAND_TOTAL_HASH = HashingUtils::HashString("GRAND_TOTAL");


        PivotTableConditionalFormattingScopeRole GetPivotTableConditionalFormattingScopeRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIELD_HASH)
          {
            return PivotTableConditionalFormattingScopeRole::FIELD;
          }
          else if (hashCode == FIELD_TOTAL_HASH)
          {
            return PivotTableConditionalFormattingScopeRole::FIELD_TOTAL;
          }
          else if (hashCode == GRAND_TOTAL_HASH)
          {
            return PivotTableConditionalFormattingScopeRole::GRAND_TOTAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PivotTableConditionalFormattingScopeRole>(hashCode);
          }

          return PivotTableConditionalFormattingScopeRole::NOT_SET;
        }

        Aws::String GetNameForPivotTableConditionalFormattingScopeRole(PivotTableConditionalFormattingScopeRole enumValue)
        {
          switch(enumValue)
          {
          case PivotTableConditionalFormattingScopeRole::FIELD:
            return "FIELD";
          case PivotTableConditionalFormattingScopeRole::FIELD_TOTAL:
            return "FIELD_TOTAL";
          case PivotTableConditionalFormattingScopeRole::GRAND_TOTAL:
            return "GRAND_TOTAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PivotTableConditionalFormattingScopeRoleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
