/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/CardOutputSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QApps
  {
    namespace Model
    {
      namespace CardOutputSourceMapper
      {

        static const int approved_sources_HASH = HashingUtils::HashString("approved-sources");
        static const int llm_HASH = HashingUtils::HashString("llm");


        CardOutputSource GetCardOutputSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == approved_sources_HASH)
          {
            return CardOutputSource::approved_sources;
          }
          else if (hashCode == llm_HASH)
          {
            return CardOutputSource::llm;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CardOutputSource>(hashCode);
          }

          return CardOutputSource::NOT_SET;
        }

        Aws::String GetNameForCardOutputSource(CardOutputSource enumValue)
        {
          switch(enumValue)
          {
          case CardOutputSource::NOT_SET:
            return {};
          case CardOutputSource::approved_sources:
            return "approved-sources";
          case CardOutputSource::llm:
            return "llm";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CardOutputSourceMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws
