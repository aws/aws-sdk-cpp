/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentAttributeBoostingLevel.h>
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
      namespace DocumentAttributeBoostingLevelMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int VERY_HIGH_HASH = HashingUtils::HashString("VERY_HIGH");


        DocumentAttributeBoostingLevel GetDocumentAttributeBoostingLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DocumentAttributeBoostingLevel::NONE;
          }
          else if (hashCode == LOW_HASH)
          {
            return DocumentAttributeBoostingLevel::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return DocumentAttributeBoostingLevel::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return DocumentAttributeBoostingLevel::HIGH;
          }
          else if (hashCode == VERY_HIGH_HASH)
          {
            return DocumentAttributeBoostingLevel::VERY_HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentAttributeBoostingLevel>(hashCode);
          }

          return DocumentAttributeBoostingLevel::NOT_SET;
        }

        Aws::String GetNameForDocumentAttributeBoostingLevel(DocumentAttributeBoostingLevel enumValue)
        {
          switch(enumValue)
          {
          case DocumentAttributeBoostingLevel::NOT_SET:
            return {};
          case DocumentAttributeBoostingLevel::NONE:
            return "NONE";
          case DocumentAttributeBoostingLevel::LOW:
            return "LOW";
          case DocumentAttributeBoostingLevel::MEDIUM:
            return "MEDIUM";
          case DocumentAttributeBoostingLevel::HIGH:
            return "HIGH";
          case DocumentAttributeBoostingLevel::VERY_HIGH:
            return "VERY_HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentAttributeBoostingLevelMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
