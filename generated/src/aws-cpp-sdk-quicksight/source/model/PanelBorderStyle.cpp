/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PanelBorderStyle.h>
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
      namespace PanelBorderStyleMapper
      {

        static const int SOLID_HASH = HashingUtils::HashString("SOLID");
        static const int DASHED_HASH = HashingUtils::HashString("DASHED");
        static const int DOTTED_HASH = HashingUtils::HashString("DOTTED");


        PanelBorderStyle GetPanelBorderStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOLID_HASH)
          {
            return PanelBorderStyle::SOLID;
          }
          else if (hashCode == DASHED_HASH)
          {
            return PanelBorderStyle::DASHED;
          }
          else if (hashCode == DOTTED_HASH)
          {
            return PanelBorderStyle::DOTTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PanelBorderStyle>(hashCode);
          }

          return PanelBorderStyle::NOT_SET;
        }

        Aws::String GetNameForPanelBorderStyle(PanelBorderStyle enumValue)
        {
          switch(enumValue)
          {
          case PanelBorderStyle::SOLID:
            return "SOLID";
          case PanelBorderStyle::DASHED:
            return "DASHED";
          case PanelBorderStyle::DOTTED:
            return "DOTTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PanelBorderStyleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
