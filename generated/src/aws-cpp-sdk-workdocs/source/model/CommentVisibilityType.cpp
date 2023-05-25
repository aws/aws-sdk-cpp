/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/CommentVisibilityType.h>
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
      namespace CommentVisibilityTypeMapper
      {

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");


        CommentVisibilityType GetCommentVisibilityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return CommentVisibilityType::PUBLIC_;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return CommentVisibilityType::PRIVATE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommentVisibilityType>(hashCode);
          }

          return CommentVisibilityType::NOT_SET;
        }

        Aws::String GetNameForCommentVisibilityType(CommentVisibilityType enumValue)
        {
          switch(enumValue)
          {
          case CommentVisibilityType::PUBLIC_:
            return "PUBLIC";
          case CommentVisibilityType::PRIVATE_:
            return "PRIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommentVisibilityTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
