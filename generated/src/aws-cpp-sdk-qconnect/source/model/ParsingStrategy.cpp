/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ParsingStrategy.h>
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
      namespace ParsingStrategyMapper
      {

        static const int BEDROCK_FOUNDATION_MODEL_HASH = HashingUtils::HashString("BEDROCK_FOUNDATION_MODEL");


        ParsingStrategy GetParsingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEDROCK_FOUNDATION_MODEL_HASH)
          {
            return ParsingStrategy::BEDROCK_FOUNDATION_MODEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParsingStrategy>(hashCode);
          }

          return ParsingStrategy::NOT_SET;
        }

        Aws::String GetNameForParsingStrategy(ParsingStrategy enumValue)
        {
          switch(enumValue)
          {
          case ParsingStrategy::NOT_SET:
            return {};
          case ParsingStrategy::BEDROCK_FOUNDATION_MODEL:
            return "BEDROCK_FOUNDATION_MODEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParsingStrategyMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
