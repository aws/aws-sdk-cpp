/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace DocumentFormatMapper
      {

        static constexpr uint32_t YAML_HASH = ConstExprHashingUtils::HashString("YAML");
        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");
        static constexpr uint32_t TEXT_HASH = ConstExprHashingUtils::HashString("TEXT");


        DocumentFormat GetDocumentFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == YAML_HASH)
          {
            return DocumentFormat::YAML;
          }
          else if (hashCode == JSON_HASH)
          {
            return DocumentFormat::JSON;
          }
          else if (hashCode == TEXT_HASH)
          {
            return DocumentFormat::TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentFormat>(hashCode);
          }

          return DocumentFormat::NOT_SET;
        }

        Aws::String GetNameForDocumentFormat(DocumentFormat enumValue)
        {
          switch(enumValue)
          {
          case DocumentFormat::NOT_SET:
            return {};
          case DocumentFormat::YAML:
            return "YAML";
          case DocumentFormat::JSON:
            return "JSON";
          case DocumentFormat::TEXT:
            return "TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentFormatMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
