/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ReferenceType.h>
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
      namespace ReferenceTypeMapper
      {

        static const int WEB_CRAWLER_HASH = HashingUtils::HashString("WEB_CRAWLER");
        static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");


        ReferenceType GetReferenceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WEB_CRAWLER_HASH)
          {
            return ReferenceType::WEB_CRAWLER;
          }
          else if (hashCode == KNOWLEDGE_BASE_HASH)
          {
            return ReferenceType::KNOWLEDGE_BASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceType>(hashCode);
          }

          return ReferenceType::NOT_SET;
        }

        Aws::String GetNameForReferenceType(ReferenceType enumValue)
        {
          switch(enumValue)
          {
          case ReferenceType::NOT_SET:
            return {};
          case ReferenceType::WEB_CRAWLER:
            return "WEB_CRAWLER";
          case ReferenceType::KNOWLEDGE_BASE:
            return "KNOWLEDGE_BASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
