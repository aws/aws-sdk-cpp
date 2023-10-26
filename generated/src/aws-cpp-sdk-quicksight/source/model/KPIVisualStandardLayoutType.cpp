/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/KPIVisualStandardLayoutType.h>
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
      namespace KPIVisualStandardLayoutTypeMapper
      {

        static const int CLASSIC_HASH = HashingUtils::HashString("CLASSIC");
        static const int VERTICAL_HASH = HashingUtils::HashString("VERTICAL");


        KPIVisualStandardLayoutType GetKPIVisualStandardLayoutTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLASSIC_HASH)
          {
            return KPIVisualStandardLayoutType::CLASSIC;
          }
          else if (hashCode == VERTICAL_HASH)
          {
            return KPIVisualStandardLayoutType::VERTICAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KPIVisualStandardLayoutType>(hashCode);
          }

          return KPIVisualStandardLayoutType::NOT_SET;
        }

        Aws::String GetNameForKPIVisualStandardLayoutType(KPIVisualStandardLayoutType enumValue)
        {
          switch(enumValue)
          {
          case KPIVisualStandardLayoutType::NOT_SET:
            return {};
          case KPIVisualStandardLayoutType::CLASSIC:
            return "CLASSIC";
          case KPIVisualStandardLayoutType::VERTICAL:
            return "VERTICAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KPIVisualStandardLayoutTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
