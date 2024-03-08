/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SourceContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace SourceContentTypeMapper
      {

        static const int KNOWLEDGE_CONTENT_HASH = HashingUtils::HashString("KNOWLEDGE_CONTENT");


        SourceContentType GetSourceContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KNOWLEDGE_CONTENT_HASH)
          {
            return SourceContentType::KNOWLEDGE_CONTENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceContentType>(hashCode);
          }

          return SourceContentType::NOT_SET;
        }

        Aws::String GetNameForSourceContentType(SourceContentType enumValue)
        {
          switch(enumValue)
          {
          case SourceContentType::NOT_SET:
            return {};
          case SourceContentType::KNOWLEDGE_CONTENT:
            return "KNOWLEDGE_CONTENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceContentTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
