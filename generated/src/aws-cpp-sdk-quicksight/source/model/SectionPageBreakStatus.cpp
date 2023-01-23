/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SectionPageBreakStatus.h>
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
      namespace SectionPageBreakStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        SectionPageBreakStatus GetSectionPageBreakStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return SectionPageBreakStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return SectionPageBreakStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SectionPageBreakStatus>(hashCode);
          }

          return SectionPageBreakStatus::NOT_SET;
        }

        Aws::String GetNameForSectionPageBreakStatus(SectionPageBreakStatus enumValue)
        {
          switch(enumValue)
          {
          case SectionPageBreakStatus::ENABLED:
            return "ENABLED";
          case SectionPageBreakStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SectionPageBreakStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
