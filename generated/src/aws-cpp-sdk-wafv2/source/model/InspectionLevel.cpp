/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/InspectionLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace InspectionLevelMapper
      {

        static const int COMMON_HASH = HashingUtils::HashString("COMMON");
        static const int TARGETED_HASH = HashingUtils::HashString("TARGETED");


        InspectionLevel GetInspectionLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMMON_HASH)
          {
            return InspectionLevel::COMMON;
          }
          else if (hashCode == TARGETED_HASH)
          {
            return InspectionLevel::TARGETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InspectionLevel>(hashCode);
          }

          return InspectionLevel::NOT_SET;
        }

        Aws::String GetNameForInspectionLevel(InspectionLevel enumValue)
        {
          switch(enumValue)
          {
          case InspectionLevel::COMMON:
            return "COMMON";
          case InspectionLevel::TARGETED:
            return "TARGETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InspectionLevelMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
