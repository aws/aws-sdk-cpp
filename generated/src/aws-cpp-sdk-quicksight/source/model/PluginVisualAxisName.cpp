/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PluginVisualAxisName.h>
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
      namespace PluginVisualAxisNameMapper
      {

        static const int GROUP_BY_HASH = HashingUtils::HashString("GROUP_BY");
        static const int VALUE_HASH = HashingUtils::HashString("VALUE");


        PluginVisualAxisName GetPluginVisualAxisNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GROUP_BY_HASH)
          {
            return PluginVisualAxisName::GROUP_BY;
          }
          else if (hashCode == VALUE_HASH)
          {
            return PluginVisualAxisName::VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PluginVisualAxisName>(hashCode);
          }

          return PluginVisualAxisName::NOT_SET;
        }

        Aws::String GetNameForPluginVisualAxisName(PluginVisualAxisName enumValue)
        {
          switch(enumValue)
          {
          case PluginVisualAxisName::NOT_SET:
            return {};
          case PluginVisualAxisName::GROUP_BY:
            return "GROUP_BY";
          case PluginVisualAxisName::VALUE:
            return "VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PluginVisualAxisNameMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
