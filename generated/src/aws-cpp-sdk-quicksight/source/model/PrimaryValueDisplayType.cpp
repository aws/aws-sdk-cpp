/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PrimaryValueDisplayType.h>
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
      namespace PrimaryValueDisplayTypeMapper
      {

        static const int HIDDEN_HASH = HashingUtils::HashString("HIDDEN");
        static const int COMPARISON_HASH = HashingUtils::HashString("COMPARISON");
        static const int ACTUAL_HASH = HashingUtils::HashString("ACTUAL");


        PrimaryValueDisplayType GetPrimaryValueDisplayTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIDDEN_HASH)
          {
            return PrimaryValueDisplayType::HIDDEN;
          }
          else if (hashCode == COMPARISON_HASH)
          {
            return PrimaryValueDisplayType::COMPARISON;
          }
          else if (hashCode == ACTUAL_HASH)
          {
            return PrimaryValueDisplayType::ACTUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrimaryValueDisplayType>(hashCode);
          }

          return PrimaryValueDisplayType::NOT_SET;
        }

        Aws::String GetNameForPrimaryValueDisplayType(PrimaryValueDisplayType enumValue)
        {
          switch(enumValue)
          {
          case PrimaryValueDisplayType::HIDDEN:
            return "HIDDEN";
          case PrimaryValueDisplayType::COMPARISON:
            return "COMPARISON";
          case PrimaryValueDisplayType::ACTUAL:
            return "ACTUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrimaryValueDisplayTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
