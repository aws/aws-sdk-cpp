/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/URLTargetConfiguration.h>
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
      namespace URLTargetConfigurationMapper
      {

        static const int NEW_TAB_HASH = HashingUtils::HashString("NEW_TAB");
        static const int NEW_WINDOW_HASH = HashingUtils::HashString("NEW_WINDOW");
        static const int SAME_TAB_HASH = HashingUtils::HashString("SAME_TAB");


        URLTargetConfiguration GetURLTargetConfigurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW_TAB_HASH)
          {
            return URLTargetConfiguration::NEW_TAB;
          }
          else if (hashCode == NEW_WINDOW_HASH)
          {
            return URLTargetConfiguration::NEW_WINDOW;
          }
          else if (hashCode == SAME_TAB_HASH)
          {
            return URLTargetConfiguration::SAME_TAB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<URLTargetConfiguration>(hashCode);
          }

          return URLTargetConfiguration::NOT_SET;
        }

        Aws::String GetNameForURLTargetConfiguration(URLTargetConfiguration enumValue)
        {
          switch(enumValue)
          {
          case URLTargetConfiguration::NEW_TAB:
            return "NEW_TAB";
          case URLTargetConfiguration::NEW_WINDOW:
            return "NEW_WINDOW";
          case URLTargetConfiguration::SAME_TAB:
            return "SAME_TAB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace URLTargetConfigurationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
