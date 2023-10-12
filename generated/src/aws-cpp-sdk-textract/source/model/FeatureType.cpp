/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/FeatureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Textract
  {
    namespace Model
    {
      namespace FeatureTypeMapper
      {

        static constexpr uint32_t TABLES_HASH = ConstExprHashingUtils::HashString("TABLES");
        static constexpr uint32_t FORMS_HASH = ConstExprHashingUtils::HashString("FORMS");
        static constexpr uint32_t QUERIES_HASH = ConstExprHashingUtils::HashString("QUERIES");
        static constexpr uint32_t SIGNATURES_HASH = ConstExprHashingUtils::HashString("SIGNATURES");
        static constexpr uint32_t LAYOUT_HASH = ConstExprHashingUtils::HashString("LAYOUT");


        FeatureType GetFeatureTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TABLES_HASH)
          {
            return FeatureType::TABLES;
          }
          else if (hashCode == FORMS_HASH)
          {
            return FeatureType::FORMS;
          }
          else if (hashCode == QUERIES_HASH)
          {
            return FeatureType::QUERIES;
          }
          else if (hashCode == SIGNATURES_HASH)
          {
            return FeatureType::SIGNATURES;
          }
          else if (hashCode == LAYOUT_HASH)
          {
            return FeatureType::LAYOUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureType>(hashCode);
          }

          return FeatureType::NOT_SET;
        }

        Aws::String GetNameForFeatureType(FeatureType enumValue)
        {
          switch(enumValue)
          {
          case FeatureType::NOT_SET:
            return {};
          case FeatureType::TABLES:
            return "TABLES";
          case FeatureType::FORMS:
            return "FORMS";
          case FeatureType::QUERIES:
            return "QUERIES";
          case FeatureType::SIGNATURES:
            return "SIGNATURES";
          case FeatureType::LAYOUT:
            return "LAYOUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureTypeMapper
    } // namespace Model
  } // namespace Textract
} // namespace Aws
