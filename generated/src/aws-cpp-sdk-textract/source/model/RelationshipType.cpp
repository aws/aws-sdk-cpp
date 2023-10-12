/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/RelationshipType.h>
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
      namespace RelationshipTypeMapper
      {

        static constexpr uint32_t VALUE_HASH = ConstExprHashingUtils::HashString("VALUE");
        static constexpr uint32_t CHILD_HASH = ConstExprHashingUtils::HashString("CHILD");
        static constexpr uint32_t COMPLEX_FEATURES_HASH = ConstExprHashingUtils::HashString("COMPLEX_FEATURES");
        static constexpr uint32_t MERGED_CELL_HASH = ConstExprHashingUtils::HashString("MERGED_CELL");
        static constexpr uint32_t TITLE_HASH = ConstExprHashingUtils::HashString("TITLE");
        static constexpr uint32_t ANSWER_HASH = ConstExprHashingUtils::HashString("ANSWER");
        static constexpr uint32_t TABLE_HASH = ConstExprHashingUtils::HashString("TABLE");
        static constexpr uint32_t TABLE_TITLE_HASH = ConstExprHashingUtils::HashString("TABLE_TITLE");
        static constexpr uint32_t TABLE_FOOTER_HASH = ConstExprHashingUtils::HashString("TABLE_FOOTER");


        RelationshipType GetRelationshipTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALUE_HASH)
          {
            return RelationshipType::VALUE;
          }
          else if (hashCode == CHILD_HASH)
          {
            return RelationshipType::CHILD;
          }
          else if (hashCode == COMPLEX_FEATURES_HASH)
          {
            return RelationshipType::COMPLEX_FEATURES;
          }
          else if (hashCode == MERGED_CELL_HASH)
          {
            return RelationshipType::MERGED_CELL;
          }
          else if (hashCode == TITLE_HASH)
          {
            return RelationshipType::TITLE;
          }
          else if (hashCode == ANSWER_HASH)
          {
            return RelationshipType::ANSWER;
          }
          else if (hashCode == TABLE_HASH)
          {
            return RelationshipType::TABLE;
          }
          else if (hashCode == TABLE_TITLE_HASH)
          {
            return RelationshipType::TABLE_TITLE;
          }
          else if (hashCode == TABLE_FOOTER_HASH)
          {
            return RelationshipType::TABLE_FOOTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelationshipType>(hashCode);
          }

          return RelationshipType::NOT_SET;
        }

        Aws::String GetNameForRelationshipType(RelationshipType enumValue)
        {
          switch(enumValue)
          {
          case RelationshipType::NOT_SET:
            return {};
          case RelationshipType::VALUE:
            return "VALUE";
          case RelationshipType::CHILD:
            return "CHILD";
          case RelationshipType::COMPLEX_FEATURES:
            return "COMPLEX_FEATURES";
          case RelationshipType::MERGED_CELL:
            return "MERGED_CELL";
          case RelationshipType::TITLE:
            return "TITLE";
          case RelationshipType::ANSWER:
            return "ANSWER";
          case RelationshipType::TABLE:
            return "TABLE";
          case RelationshipType::TABLE_TITLE:
            return "TABLE_TITLE";
          case RelationshipType::TABLE_FOOTER:
            return "TABLE_FOOTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelationshipTypeMapper
    } // namespace Model
  } // namespace Textract
} // namespace Aws
