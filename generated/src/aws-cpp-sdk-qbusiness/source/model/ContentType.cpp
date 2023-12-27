/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace ContentTypeMapper
      {

        static const int PDF_HASH = HashingUtils::HashString("PDF");
        static const int HTML_HASH = HashingUtils::HashString("HTML");
        static const int MS_WORD_HASH = HashingUtils::HashString("MS_WORD");
        static const int PLAIN_TEXT_HASH = HashingUtils::HashString("PLAIN_TEXT");
        static const int PPT_HASH = HashingUtils::HashString("PPT");
        static const int RTF_HASH = HashingUtils::HashString("RTF");
        static const int XML_HASH = HashingUtils::HashString("XML");
        static const int XSLT_HASH = HashingUtils::HashString("XSLT");
        static const int MS_EXCEL_HASH = HashingUtils::HashString("MS_EXCEL");
        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int MD_HASH = HashingUtils::HashString("MD");


        ContentType GetContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PDF_HASH)
          {
            return ContentType::PDF;
          }
          else if (hashCode == HTML_HASH)
          {
            return ContentType::HTML;
          }
          else if (hashCode == MS_WORD_HASH)
          {
            return ContentType::MS_WORD;
          }
          else if (hashCode == PLAIN_TEXT_HASH)
          {
            return ContentType::PLAIN_TEXT;
          }
          else if (hashCode == PPT_HASH)
          {
            return ContentType::PPT;
          }
          else if (hashCode == RTF_HASH)
          {
            return ContentType::RTF;
          }
          else if (hashCode == XML_HASH)
          {
            return ContentType::XML;
          }
          else if (hashCode == XSLT_HASH)
          {
            return ContentType::XSLT;
          }
          else if (hashCode == MS_EXCEL_HASH)
          {
            return ContentType::MS_EXCEL;
          }
          else if (hashCode == CSV_HASH)
          {
            return ContentType::CSV;
          }
          else if (hashCode == JSON_HASH)
          {
            return ContentType::JSON;
          }
          else if (hashCode == MD_HASH)
          {
            return ContentType::MD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentType>(hashCode);
          }

          return ContentType::NOT_SET;
        }

        Aws::String GetNameForContentType(ContentType enumValue)
        {
          switch(enumValue)
          {
          case ContentType::NOT_SET:
            return {};
          case ContentType::PDF:
            return "PDF";
          case ContentType::HTML:
            return "HTML";
          case ContentType::MS_WORD:
            return "MS_WORD";
          case ContentType::PLAIN_TEXT:
            return "PLAIN_TEXT";
          case ContentType::PPT:
            return "PPT";
          case ContentType::RTF:
            return "RTF";
          case ContentType::XML:
            return "XML";
          case ContentType::XSLT:
            return "XSLT";
          case ContentType::MS_EXCEL:
            return "MS_EXCEL";
          case ContentType::CSV:
            return "CSV";
          case ContentType::JSON:
            return "JSON";
          case ContentType::MD:
            return "MD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
