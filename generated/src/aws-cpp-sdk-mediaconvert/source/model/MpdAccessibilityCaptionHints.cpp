/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MpdAccessibilityCaptionHints.h>
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
      namespace MpdAccessibilityCaptionHintsMapper
      {

        static constexpr uint32_t INCLUDE_HASH = ConstExprHashingUtils::HashString("INCLUDE");
        static constexpr uint32_t EXCLUDE_HASH = ConstExprHashingUtils::HashString("EXCLUDE");


        MpdAccessibilityCaptionHints GetMpdAccessibilityCaptionHintsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return MpdAccessibilityCaptionHints::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return MpdAccessibilityCaptionHints::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MpdAccessibilityCaptionHints>(hashCode);
          }

          return MpdAccessibilityCaptionHints::NOT_SET;
        }

        Aws::String GetNameForMpdAccessibilityCaptionHints(MpdAccessibilityCaptionHints enumValue)
        {
          switch(enumValue)
          {
          case MpdAccessibilityCaptionHints::NOT_SET:
            return {};
          case MpdAccessibilityCaptionHints::INCLUDE:
            return "INCLUDE";
          case MpdAccessibilityCaptionHints::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MpdAccessibilityCaptionHintsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
