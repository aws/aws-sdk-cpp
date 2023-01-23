/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DocumentSourceType.h>
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
      namespace DocumentSourceTypeMapper
      {

        static const int ORIGINAL_HASH = HashingUtils::HashString("ORIGINAL");
        static const int WITH_COMMENTS_HASH = HashingUtils::HashString("WITH_COMMENTS");


        DocumentSourceType GetDocumentSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ORIGINAL_HASH)
          {
            return DocumentSourceType::ORIGINAL;
          }
          else if (hashCode == WITH_COMMENTS_HASH)
          {
            return DocumentSourceType::WITH_COMMENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentSourceType>(hashCode);
          }

          return DocumentSourceType::NOT_SET;
        }

        Aws::String GetNameForDocumentSourceType(DocumentSourceType enumValue)
        {
          switch(enumValue)
          {
          case DocumentSourceType::ORIGINAL:
            return "ORIGINAL";
          case DocumentSourceType::WITH_COMMENTS:
            return "WITH_COMMENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentSourceTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
