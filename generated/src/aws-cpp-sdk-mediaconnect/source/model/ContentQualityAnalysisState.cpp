/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/ContentQualityAnalysisState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace ContentQualityAnalysisStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ContentQualityAnalysisState GetContentQualityAnalysisStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ContentQualityAnalysisState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ContentQualityAnalysisState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentQualityAnalysisState>(hashCode);
          }

          return ContentQualityAnalysisState::NOT_SET;
        }

        Aws::String GetNameForContentQualityAnalysisState(ContentQualityAnalysisState enumValue)
        {
          switch(enumValue)
          {
          case ContentQualityAnalysisState::NOT_SET:
            return {};
          case ContentQualityAnalysisState::ENABLED:
            return "ENABLED";
          case ContentQualityAnalysisState::DISABLED:
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

      } // namespace ContentQualityAnalysisStateMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
