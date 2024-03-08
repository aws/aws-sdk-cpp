/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/Relevance.h>
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
      namespace RelevanceMapper
      {

        static const int HELPFUL_HASH = HashingUtils::HashString("HELPFUL");
        static const int NOT_HELPFUL_HASH = HashingUtils::HashString("NOT_HELPFUL");


        Relevance GetRelevanceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HELPFUL_HASH)
          {
            return Relevance::HELPFUL;
          }
          else if (hashCode == NOT_HELPFUL_HASH)
          {
            return Relevance::NOT_HELPFUL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Relevance>(hashCode);
          }

          return Relevance::NOT_SET;
        }

        Aws::String GetNameForRelevance(Relevance enumValue)
        {
          switch(enumValue)
          {
          case Relevance::NOT_SET:
            return {};
          case Relevance::HELPFUL:
            return "HELPFUL";
          case Relevance::NOT_HELPFUL:
            return "NOT_HELPFUL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelevanceMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
