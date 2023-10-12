/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/FontScript.h>
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
      namespace FontScriptMapper
      {

        static constexpr uint32_t AUTOMATIC_HASH = ConstExprHashingUtils::HashString("AUTOMATIC");
        static constexpr uint32_t HANS_HASH = ConstExprHashingUtils::HashString("HANS");
        static constexpr uint32_t HANT_HASH = ConstExprHashingUtils::HashString("HANT");


        FontScript GetFontScriptForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return FontScript::AUTOMATIC;
          }
          else if (hashCode == HANS_HASH)
          {
            return FontScript::HANS;
          }
          else if (hashCode == HANT_HASH)
          {
            return FontScript::HANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FontScript>(hashCode);
          }

          return FontScript::NOT_SET;
        }

        Aws::String GetNameForFontScript(FontScript enumValue)
        {
          switch(enumValue)
          {
          case FontScript::NOT_SET:
            return {};
          case FontScript::AUTOMATIC:
            return "AUTOMATIC";
          case FontScript::HANS:
            return "HANS";
          case FontScript::HANT:
            return "HANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FontScriptMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
