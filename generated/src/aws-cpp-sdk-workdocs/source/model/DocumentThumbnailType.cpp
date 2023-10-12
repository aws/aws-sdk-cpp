/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DocumentThumbnailType.h>
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
      namespace DocumentThumbnailTypeMapper
      {

        static constexpr uint32_t SMALL_HASH = ConstExprHashingUtils::HashString("SMALL");
        static constexpr uint32_t SMALL_HQ_HASH = ConstExprHashingUtils::HashString("SMALL_HQ");
        static constexpr uint32_t LARGE_HASH = ConstExprHashingUtils::HashString("LARGE");


        DocumentThumbnailType GetDocumentThumbnailTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMALL_HASH)
          {
            return DocumentThumbnailType::SMALL;
          }
          else if (hashCode == SMALL_HQ_HASH)
          {
            return DocumentThumbnailType::SMALL_HQ;
          }
          else if (hashCode == LARGE_HASH)
          {
            return DocumentThumbnailType::LARGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentThumbnailType>(hashCode);
          }

          return DocumentThumbnailType::NOT_SET;
        }

        Aws::String GetNameForDocumentThumbnailType(DocumentThumbnailType enumValue)
        {
          switch(enumValue)
          {
          case DocumentThumbnailType::NOT_SET:
            return {};
          case DocumentThumbnailType::SMALL:
            return "SMALL";
          case DocumentThumbnailType::SMALL_HQ:
            return "SMALL_HQ";
          case DocumentThumbnailType::LARGE:
            return "LARGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentThumbnailTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
