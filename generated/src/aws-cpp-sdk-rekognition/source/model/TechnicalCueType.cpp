/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/TechnicalCueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace TechnicalCueTypeMapper
      {

        static constexpr uint32_t ColorBars_HASH = ConstExprHashingUtils::HashString("ColorBars");
        static constexpr uint32_t EndCredits_HASH = ConstExprHashingUtils::HashString("EndCredits");
        static constexpr uint32_t BlackFrames_HASH = ConstExprHashingUtils::HashString("BlackFrames");
        static constexpr uint32_t OpeningCredits_HASH = ConstExprHashingUtils::HashString("OpeningCredits");
        static constexpr uint32_t StudioLogo_HASH = ConstExprHashingUtils::HashString("StudioLogo");
        static constexpr uint32_t Slate_HASH = ConstExprHashingUtils::HashString("Slate");
        static constexpr uint32_t Content_HASH = ConstExprHashingUtils::HashString("Content");


        TechnicalCueType GetTechnicalCueTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ColorBars_HASH)
          {
            return TechnicalCueType::ColorBars;
          }
          else if (hashCode == EndCredits_HASH)
          {
            return TechnicalCueType::EndCredits;
          }
          else if (hashCode == BlackFrames_HASH)
          {
            return TechnicalCueType::BlackFrames;
          }
          else if (hashCode == OpeningCredits_HASH)
          {
            return TechnicalCueType::OpeningCredits;
          }
          else if (hashCode == StudioLogo_HASH)
          {
            return TechnicalCueType::StudioLogo;
          }
          else if (hashCode == Slate_HASH)
          {
            return TechnicalCueType::Slate;
          }
          else if (hashCode == Content_HASH)
          {
            return TechnicalCueType::Content;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TechnicalCueType>(hashCode);
          }

          return TechnicalCueType::NOT_SET;
        }

        Aws::String GetNameForTechnicalCueType(TechnicalCueType enumValue)
        {
          switch(enumValue)
          {
          case TechnicalCueType::NOT_SET:
            return {};
          case TechnicalCueType::ColorBars:
            return "ColorBars";
          case TechnicalCueType::EndCredits:
            return "EndCredits";
          case TechnicalCueType::BlackFrames:
            return "BlackFrames";
          case TechnicalCueType::OpeningCredits:
            return "OpeningCredits";
          case TechnicalCueType::StudioLogo:
            return "StudioLogo";
          case TechnicalCueType::Slate:
            return "Slate";
          case TechnicalCueType::Content:
            return "Content";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TechnicalCueTypeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
