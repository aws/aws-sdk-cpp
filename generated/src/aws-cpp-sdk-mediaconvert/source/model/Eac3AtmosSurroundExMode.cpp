/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3AtmosSurroundExMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace Eac3AtmosSurroundExModeMapper
      {

        static constexpr uint32_t NOT_INDICATED_HASH = ConstExprHashingUtils::HashString("NOT_INDICATED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");


        Eac3AtmosSurroundExMode GetEac3AtmosSurroundExModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_INDICATED_HASH)
          {
            return Eac3AtmosSurroundExMode::NOT_INDICATED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Eac3AtmosSurroundExMode::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return Eac3AtmosSurroundExMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3AtmosSurroundExMode>(hashCode);
          }

          return Eac3AtmosSurroundExMode::NOT_SET;
        }

        Aws::String GetNameForEac3AtmosSurroundExMode(Eac3AtmosSurroundExMode enumValue)
        {
          switch(enumValue)
          {
          case Eac3AtmosSurroundExMode::NOT_SET:
            return {};
          case Eac3AtmosSurroundExMode::NOT_INDICATED:
            return "NOT_INDICATED";
          case Eac3AtmosSurroundExMode::ENABLED:
            return "ENABLED";
          case Eac3AtmosSurroundExMode::DISABLED:
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

      } // namespace Eac3AtmosSurroundExModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
