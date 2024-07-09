/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/NaturalLanguageQueryGenerationDesiredState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace NaturalLanguageQueryGenerationDesiredStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        NaturalLanguageQueryGenerationDesiredState GetNaturalLanguageQueryGenerationDesiredStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return NaturalLanguageQueryGenerationDesiredState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return NaturalLanguageQueryGenerationDesiredState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NaturalLanguageQueryGenerationDesiredState>(hashCode);
          }

          return NaturalLanguageQueryGenerationDesiredState::NOT_SET;
        }

        Aws::String GetNameForNaturalLanguageQueryGenerationDesiredState(NaturalLanguageQueryGenerationDesiredState enumValue)
        {
          switch(enumValue)
          {
          case NaturalLanguageQueryGenerationDesiredState::NOT_SET:
            return {};
          case NaturalLanguageQueryGenerationDesiredState::ENABLED:
            return "ENABLED";
          case NaturalLanguageQueryGenerationDesiredState::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NaturalLanguageQueryGenerationDesiredStateMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
