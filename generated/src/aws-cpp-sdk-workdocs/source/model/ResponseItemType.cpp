/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/ResponseItemType.h>
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
      namespace ResponseItemTypeMapper
      {

        static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
        static const int FOLDER_HASH = HashingUtils::HashString("FOLDER");
        static const int COMMENT_HASH = HashingUtils::HashString("COMMENT");
        static const int DOCUMENT_VERSION_HASH = HashingUtils::HashString("DOCUMENT_VERSION");


        ResponseItemType GetResponseItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOCUMENT_HASH)
          {
            return ResponseItemType::DOCUMENT;
          }
          else if (hashCode == FOLDER_HASH)
          {
            return ResponseItemType::FOLDER;
          }
          else if (hashCode == COMMENT_HASH)
          {
            return ResponseItemType::COMMENT;
          }
          else if (hashCode == DOCUMENT_VERSION_HASH)
          {
            return ResponseItemType::DOCUMENT_VERSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResponseItemType>(hashCode);
          }

          return ResponseItemType::NOT_SET;
        }

        Aws::String GetNameForResponseItemType(ResponseItemType enumValue)
        {
          switch(enumValue)
          {
          case ResponseItemType::NOT_SET:
            return {};
          case ResponseItemType::DOCUMENT:
            return "DOCUMENT";
          case ResponseItemType::FOLDER:
            return "FOLDER";
          case ResponseItemType::COMMENT:
            return "COMMENT";
          case ResponseItemType::DOCUMENT_VERSION:
            return "DOCUMENT_VERSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResponseItemTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
