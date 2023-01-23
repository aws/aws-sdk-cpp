/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/InsightCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace XRay
  {
    namespace Model
    {
      namespace InsightCategoryMapper
      {

        static const int FAULT_HASH = HashingUtils::HashString("FAULT");


        InsightCategory GetInsightCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAULT_HASH)
          {
            return InsightCategory::FAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsightCategory>(hashCode);
          }

          return InsightCategory::NOT_SET;
        }

        Aws::String GetNameForInsightCategory(InsightCategory enumValue)
        {
          switch(enumValue)
          {
          case InsightCategory::FAULT:
            return "FAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsightCategoryMapper
    } // namespace Model
  } // namespace XRay
} // namespace Aws
