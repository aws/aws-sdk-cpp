/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/ContentCategoryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace ContentCategoryTypeMapper
      {

        static constexpr uint32_t IMAGE_HASH = ConstExprHashingUtils::HashString("IMAGE");
        static constexpr uint32_t DOCUMENT_HASH = ConstExprHashingUtils::HashString("DOCUMENT");
        static constexpr uint32_t PDF_HASH = ConstExprHashingUtils::HashString("PDF");
        static constexpr uint32_t SPREADSHEET_HASH = ConstExprHashingUtils::HashString("SPREADSHEET");
        static constexpr uint32_t PRESENTATION_HASH = ConstExprHashingUtils::HashString("PRESENTATION");
        static constexpr uint32_t AUDIO_HASH = ConstExprHashingUtils::HashString("AUDIO");
        static constexpr uint32_t VIDEO_HASH = ConstExprHashingUtils::HashString("VIDEO");
        static constexpr uint32_t SOURCE_CODE_HASH = ConstExprHashingUtils::HashString("SOURCE_CODE");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");


        ContentCategoryType GetContentCategoryTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMAGE_HASH)
          {
            return ContentCategoryType::IMAGE;
          }
          else if (hashCode == DOCUMENT_HASH)
          {
            return ContentCategoryType::DOCUMENT;
          }
          else if (hashCode == PDF_HASH)
          {
            return ContentCategoryType::PDF;
          }
          else if (hashCode == SPREADSHEET_HASH)
          {
            return ContentCategoryType::SPREADSHEET;
          }
          else if (hashCode == PRESENTATION_HASH)
          {
            return ContentCategoryType::PRESENTATION;
          }
          else if (hashCode == AUDIO_HASH)
          {
            return ContentCategoryType::AUDIO;
          }
          else if (hashCode == VIDEO_HASH)
          {
            return ContentCategoryType::VIDEO;
          }
          else if (hashCode == SOURCE_CODE_HASH)
          {
            return ContentCategoryType::SOURCE_CODE;
          }
          else if (hashCode == OTHER_HASH)
          {
            return ContentCategoryType::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentCategoryType>(hashCode);
          }

          return ContentCategoryType::NOT_SET;
        }

        Aws::String GetNameForContentCategoryType(ContentCategoryType enumValue)
        {
          switch(enumValue)
          {
          case ContentCategoryType::NOT_SET:
            return {};
          case ContentCategoryType::IMAGE:
            return "IMAGE";
          case ContentCategoryType::DOCUMENT:
            return "DOCUMENT";
          case ContentCategoryType::PDF:
            return "PDF";
          case ContentCategoryType::SPREADSHEET:
            return "SPREADSHEET";
          case ContentCategoryType::PRESENTATION:
            return "PRESENTATION";
          case ContentCategoryType::AUDIO:
            return "AUDIO";
          case ContentCategoryType::VIDEO:
            return "VIDEO";
          case ContentCategoryType::SOURCE_CODE:
            return "SOURCE_CODE";
          case ContentCategoryType::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentCategoryTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
