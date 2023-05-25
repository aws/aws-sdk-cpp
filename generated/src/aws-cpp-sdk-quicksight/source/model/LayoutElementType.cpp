/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LayoutElementType.h>
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
      namespace LayoutElementTypeMapper
      {

        static const int VISUAL_HASH = HashingUtils::HashString("VISUAL");
        static const int FILTER_CONTROL_HASH = HashingUtils::HashString("FILTER_CONTROL");
        static const int PARAMETER_CONTROL_HASH = HashingUtils::HashString("PARAMETER_CONTROL");
        static const int TEXT_BOX_HASH = HashingUtils::HashString("TEXT_BOX");


        LayoutElementType GetLayoutElementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VISUAL_HASH)
          {
            return LayoutElementType::VISUAL;
          }
          else if (hashCode == FILTER_CONTROL_HASH)
          {
            return LayoutElementType::FILTER_CONTROL;
          }
          else if (hashCode == PARAMETER_CONTROL_HASH)
          {
            return LayoutElementType::PARAMETER_CONTROL;
          }
          else if (hashCode == TEXT_BOX_HASH)
          {
            return LayoutElementType::TEXT_BOX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LayoutElementType>(hashCode);
          }

          return LayoutElementType::NOT_SET;
        }

        Aws::String GetNameForLayoutElementType(LayoutElementType enumValue)
        {
          switch(enumValue)
          {
          case LayoutElementType::VISUAL:
            return "VISUAL";
          case LayoutElementType::FILTER_CONTROL:
            return "FILTER_CONTROL";
          case LayoutElementType::PARAMETER_CONTROL:
            return "PARAMETER_CONTROL";
          case LayoutElementType::TEXT_BOX:
            return "TEXT_BOX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LayoutElementTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
