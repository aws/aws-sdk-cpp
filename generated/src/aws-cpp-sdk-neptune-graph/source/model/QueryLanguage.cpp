/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/QueryLanguage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NeptuneGraph
  {
    namespace Model
    {
      namespace QueryLanguageMapper
      {

        static const int OPEN_CYPHER_HASH = HashingUtils::HashString("OPEN_CYPHER");


        QueryLanguage GetQueryLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_CYPHER_HASH)
          {
            return QueryLanguage::OPEN_CYPHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryLanguage>(hashCode);
          }

          return QueryLanguage::NOT_SET;
        }

        Aws::String GetNameForQueryLanguage(QueryLanguage enumValue)
        {
          switch(enumValue)
          {
          case QueryLanguage::NOT_SET:
            return {};
          case QueryLanguage::OPEN_CYPHER:
            return "OPEN_CYPHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryLanguageMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
