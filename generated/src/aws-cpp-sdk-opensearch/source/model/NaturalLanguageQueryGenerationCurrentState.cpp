/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/NaturalLanguageQueryGenerationCurrentState.h>
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
      namespace NaturalLanguageQueryGenerationCurrentStateMapper
      {

        static const int NOT_ENABLED_HASH = HashingUtils::HashString("NOT_ENABLED");
        static const int ENABLE_COMPLETE_HASH = HashingUtils::HashString("ENABLE_COMPLETE");
        static const int ENABLE_IN_PROGRESS_HASH = HashingUtils::HashString("ENABLE_IN_PROGRESS");
        static const int ENABLE_FAILED_HASH = HashingUtils::HashString("ENABLE_FAILED");
        static const int DISABLE_COMPLETE_HASH = HashingUtils::HashString("DISABLE_COMPLETE");
        static const int DISABLE_IN_PROGRESS_HASH = HashingUtils::HashString("DISABLE_IN_PROGRESS");
        static const int DISABLE_FAILED_HASH = HashingUtils::HashString("DISABLE_FAILED");


        NaturalLanguageQueryGenerationCurrentState GetNaturalLanguageQueryGenerationCurrentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_ENABLED_HASH)
          {
            return NaturalLanguageQueryGenerationCurrentState::NOT_ENABLED;
          }
          else if (hashCode == ENABLE_COMPLETE_HASH)
          {
            return NaturalLanguageQueryGenerationCurrentState::ENABLE_COMPLETE;
          }
          else if (hashCode == ENABLE_IN_PROGRESS_HASH)
          {
            return NaturalLanguageQueryGenerationCurrentState::ENABLE_IN_PROGRESS;
          }
          else if (hashCode == ENABLE_FAILED_HASH)
          {
            return NaturalLanguageQueryGenerationCurrentState::ENABLE_FAILED;
          }
          else if (hashCode == DISABLE_COMPLETE_HASH)
          {
            return NaturalLanguageQueryGenerationCurrentState::DISABLE_COMPLETE;
          }
          else if (hashCode == DISABLE_IN_PROGRESS_HASH)
          {
            return NaturalLanguageQueryGenerationCurrentState::DISABLE_IN_PROGRESS;
          }
          else if (hashCode == DISABLE_FAILED_HASH)
          {
            return NaturalLanguageQueryGenerationCurrentState::DISABLE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NaturalLanguageQueryGenerationCurrentState>(hashCode);
          }

          return NaturalLanguageQueryGenerationCurrentState::NOT_SET;
        }

        Aws::String GetNameForNaturalLanguageQueryGenerationCurrentState(NaturalLanguageQueryGenerationCurrentState enumValue)
        {
          switch(enumValue)
          {
          case NaturalLanguageQueryGenerationCurrentState::NOT_SET:
            return {};
          case NaturalLanguageQueryGenerationCurrentState::NOT_ENABLED:
            return "NOT_ENABLED";
          case NaturalLanguageQueryGenerationCurrentState::ENABLE_COMPLETE:
            return "ENABLE_COMPLETE";
          case NaturalLanguageQueryGenerationCurrentState::ENABLE_IN_PROGRESS:
            return "ENABLE_IN_PROGRESS";
          case NaturalLanguageQueryGenerationCurrentState::ENABLE_FAILED:
            return "ENABLE_FAILED";
          case NaturalLanguageQueryGenerationCurrentState::DISABLE_COMPLETE:
            return "DISABLE_COMPLETE";
          case NaturalLanguageQueryGenerationCurrentState::DISABLE_IN_PROGRESS:
            return "DISABLE_IN_PROGRESS";
          case NaturalLanguageQueryGenerationCurrentState::DISABLE_FAILED:
            return "DISABLE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NaturalLanguageQueryGenerationCurrentStateMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
