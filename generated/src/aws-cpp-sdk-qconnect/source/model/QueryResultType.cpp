/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/QueryResultType.h>
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
      namespace QueryResultTypeMapper
      {

        static const int KNOWLEDGE_CONTENT_HASH = HashingUtils::HashString("KNOWLEDGE_CONTENT");
        static const int GENERATIVE_ANSWER_HASH = HashingUtils::HashString("GENERATIVE_ANSWER");


        QueryResultType GetQueryResultTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KNOWLEDGE_CONTENT_HASH)
          {
            return QueryResultType::KNOWLEDGE_CONTENT;
          }
          else if (hashCode == GENERATIVE_ANSWER_HASH)
          {
            return QueryResultType::GENERATIVE_ANSWER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryResultType>(hashCode);
          }

          return QueryResultType::NOT_SET;
        }

        Aws::String GetNameForQueryResultType(QueryResultType enumValue)
        {
          switch(enumValue)
          {
          case QueryResultType::NOT_SET:
            return {};
          case QueryResultType::KNOWLEDGE_CONTENT:
            return "KNOWLEDGE_CONTENT";
          case QueryResultType::GENERATIVE_ANSWER:
            return "GENERATIVE_ANSWER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryResultTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
