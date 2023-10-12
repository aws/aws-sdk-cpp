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

        static constexpr uint32_t VISUAL_HASH = ConstExprHashingUtils::HashString("VISUAL");
        static constexpr uint32_t FILTER_CONTROL_HASH = ConstExprHashingUtils::HashString("FILTER_CONTROL");
        static constexpr uint32_t PARAMETER_CONTROL_HASH = ConstExprHashingUtils::HashString("PARAMETER_CONTROL");
        static constexpr uint32_t TEXT_BOX_HASH = ConstExprHashingUtils::HashString("TEXT_BOX");


        LayoutElementType GetLayoutElementTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case LayoutElementType::NOT_SET:
            return {};
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
