/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CaptionSourceType.h>
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
      namespace CaptionSourceTypeMapper
      {

        static constexpr uint32_t ANCILLARY_HASH = ConstExprHashingUtils::HashString("ANCILLARY");
        static constexpr uint32_t DVB_SUB_HASH = ConstExprHashingUtils::HashString("DVB_SUB");
        static constexpr uint32_t EMBEDDED_HASH = ConstExprHashingUtils::HashString("EMBEDDED");
        static constexpr uint32_t SCTE20_HASH = ConstExprHashingUtils::HashString("SCTE20");
        static constexpr uint32_t SCC_HASH = ConstExprHashingUtils::HashString("SCC");
        static constexpr uint32_t TTML_HASH = ConstExprHashingUtils::HashString("TTML");
        static constexpr uint32_t STL_HASH = ConstExprHashingUtils::HashString("STL");
        static constexpr uint32_t SRT_HASH = ConstExprHashingUtils::HashString("SRT");
        static constexpr uint32_t SMI_HASH = ConstExprHashingUtils::HashString("SMI");
        static constexpr uint32_t SMPTE_TT_HASH = ConstExprHashingUtils::HashString("SMPTE_TT");
        static constexpr uint32_t TELETEXT_HASH = ConstExprHashingUtils::HashString("TELETEXT");
        static constexpr uint32_t NULL_SOURCE_HASH = ConstExprHashingUtils::HashString("NULL_SOURCE");
        static constexpr uint32_t IMSC_HASH = ConstExprHashingUtils::HashString("IMSC");
        static constexpr uint32_t WEBVTT_HASH = ConstExprHashingUtils::HashString("WEBVTT");


        CaptionSourceType GetCaptionSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANCILLARY_HASH)
          {
            return CaptionSourceType::ANCILLARY;
          }
          else if (hashCode == DVB_SUB_HASH)
          {
            return CaptionSourceType::DVB_SUB;
          }
          else if (hashCode == EMBEDDED_HASH)
          {
            return CaptionSourceType::EMBEDDED;
          }
          else if (hashCode == SCTE20_HASH)
          {
            return CaptionSourceType::SCTE20;
          }
          else if (hashCode == SCC_HASH)
          {
            return CaptionSourceType::SCC;
          }
          else if (hashCode == TTML_HASH)
          {
            return CaptionSourceType::TTML;
          }
          else if (hashCode == STL_HASH)
          {
            return CaptionSourceType::STL;
          }
          else if (hashCode == SRT_HASH)
          {
            return CaptionSourceType::SRT;
          }
          else if (hashCode == SMI_HASH)
          {
            return CaptionSourceType::SMI;
          }
          else if (hashCode == SMPTE_TT_HASH)
          {
            return CaptionSourceType::SMPTE_TT;
          }
          else if (hashCode == TELETEXT_HASH)
          {
            return CaptionSourceType::TELETEXT;
          }
          else if (hashCode == NULL_SOURCE_HASH)
          {
            return CaptionSourceType::NULL_SOURCE;
          }
          else if (hashCode == IMSC_HASH)
          {
            return CaptionSourceType::IMSC;
          }
          else if (hashCode == WEBVTT_HASH)
          {
            return CaptionSourceType::WEBVTT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaptionSourceType>(hashCode);
          }

          return CaptionSourceType::NOT_SET;
        }

        Aws::String GetNameForCaptionSourceType(CaptionSourceType enumValue)
        {
          switch(enumValue)
          {
          case CaptionSourceType::NOT_SET:
            return {};
          case CaptionSourceType::ANCILLARY:
            return "ANCILLARY";
          case CaptionSourceType::DVB_SUB:
            return "DVB_SUB";
          case CaptionSourceType::EMBEDDED:
            return "EMBEDDED";
          case CaptionSourceType::SCTE20:
            return "SCTE20";
          case CaptionSourceType::SCC:
            return "SCC";
          case CaptionSourceType::TTML:
            return "TTML";
          case CaptionSourceType::STL:
            return "STL";
          case CaptionSourceType::SRT:
            return "SRT";
          case CaptionSourceType::SMI:
            return "SMI";
          case CaptionSourceType::SMPTE_TT:
            return "SMPTE_TT";
          case CaptionSourceType::TELETEXT:
            return "TELETEXT";
          case CaptionSourceType::NULL_SOURCE:
            return "NULL_SOURCE";
          case CaptionSourceType::IMSC:
            return "IMSC";
          case CaptionSourceType::WEBVTT:
            return "WEBVTT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CaptionSourceTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
