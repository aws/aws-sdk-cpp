﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Eac3SurroundExMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace Eac3SurroundExModeMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int NOT_INDICATED_HASH = HashingUtils::HashString("NOT_INDICATED");


        Eac3SurroundExMode GetEac3SurroundExModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return Eac3SurroundExMode::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Eac3SurroundExMode::ENABLED;
          }
          else if (hashCode == NOT_INDICATED_HASH)
          {
            return Eac3SurroundExMode::NOT_INDICATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3SurroundExMode>(hashCode);
          }

          return Eac3SurroundExMode::NOT_SET;
        }

        Aws::String GetNameForEac3SurroundExMode(Eac3SurroundExMode enumValue)
        {
          switch(enumValue)
          {
          case Eac3SurroundExMode::NOT_SET:
            return {};
          case Eac3SurroundExMode::DISABLED:
            return "DISABLED";
          case Eac3SurroundExMode::ENABLED:
            return "ENABLED";
          case Eac3SurroundExMode::NOT_INDICATED:
            return "NOT_INDICATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3SurroundExModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
