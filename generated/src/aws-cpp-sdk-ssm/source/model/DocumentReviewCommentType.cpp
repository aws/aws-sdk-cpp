/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentReviewCommentType.h>
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
      namespace DocumentReviewCommentTypeMapper
      {

        static const int Comment_HASH = HashingUtils::HashString("Comment");


        DocumentReviewCommentType GetDocumentReviewCommentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Comment_HASH)
          {
            return DocumentReviewCommentType::Comment;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentReviewCommentType>(hashCode);
          }

          return DocumentReviewCommentType::NOT_SET;
        }

        Aws::String GetNameForDocumentReviewCommentType(DocumentReviewCommentType enumValue)
        {
          switch(enumValue)
          {
          case DocumentReviewCommentType::NOT_SET:
            return {};
          case DocumentReviewCommentType::Comment:
            return "Comment";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentReviewCommentTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
