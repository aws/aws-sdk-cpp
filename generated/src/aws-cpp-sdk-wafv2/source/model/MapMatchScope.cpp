﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/MapMatchScope.h>
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
      namespace MapMatchScopeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int KEY_HASH = HashingUtils::HashString("KEY");
        static const int VALUE_HASH = HashingUtils::HashString("VALUE");


        MapMatchScope GetMapMatchScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return MapMatchScope::ALL;
          }
          else if (hashCode == KEY_HASH)
          {
            return MapMatchScope::KEY;
          }
          else if (hashCode == VALUE_HASH)
          {
            return MapMatchScope::VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MapMatchScope>(hashCode);
          }

          return MapMatchScope::NOT_SET;
        }

        Aws::String GetNameForMapMatchScope(MapMatchScope enumValue)
        {
          switch(enumValue)
          {
          case MapMatchScope::NOT_SET:
            return {};
          case MapMatchScope::ALL:
            return "ALL";
          case MapMatchScope::KEY:
            return "KEY";
          case MapMatchScope::VALUE:
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

      } // namespace MapMatchScopeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
