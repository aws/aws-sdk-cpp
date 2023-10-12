/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/PresetListBy.h>
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
      namespace PresetListByMapper
      {

        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t CREATION_DATE_HASH = ConstExprHashingUtils::HashString("CREATION_DATE");
        static constexpr uint32_t SYSTEM_HASH = ConstExprHashingUtils::HashString("SYSTEM");


        PresetListBy GetPresetListByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return PresetListBy::NAME;
          }
          else if (hashCode == CREATION_DATE_HASH)
          {
            return PresetListBy::CREATION_DATE;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return PresetListBy::SYSTEM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PresetListBy>(hashCode);
          }

          return PresetListBy::NOT_SET;
        }

        Aws::String GetNameForPresetListBy(PresetListBy enumValue)
        {
          switch(enumValue)
          {
          case PresetListBy::NOT_SET:
            return {};
          case PresetListBy::NAME:
            return "NAME";
          case PresetListBy::CREATION_DATE:
            return "CREATION_DATE";
          case PresetListBy::SYSTEM:
            return "SYSTEM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PresetListByMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
