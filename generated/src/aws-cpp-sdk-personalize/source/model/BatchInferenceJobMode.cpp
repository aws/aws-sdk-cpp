/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/BatchInferenceJobMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Personalize
  {
    namespace Model
    {
      namespace BatchInferenceJobModeMapper
      {

        static const int BATCH_INFERENCE_HASH = HashingUtils::HashString("BATCH_INFERENCE");
        static const int THEME_GENERATION_HASH = HashingUtils::HashString("THEME_GENERATION");


        BatchInferenceJobMode GetBatchInferenceJobModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BATCH_INFERENCE_HASH)
          {
            return BatchInferenceJobMode::BATCH_INFERENCE;
          }
          else if (hashCode == THEME_GENERATION_HASH)
          {
            return BatchInferenceJobMode::THEME_GENERATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchInferenceJobMode>(hashCode);
          }

          return BatchInferenceJobMode::NOT_SET;
        }

        Aws::String GetNameForBatchInferenceJobMode(BatchInferenceJobMode enumValue)
        {
          switch(enumValue)
          {
          case BatchInferenceJobMode::NOT_SET:
            return {};
          case BatchInferenceJobMode::BATCH_INFERENCE:
            return "BATCH_INFERENCE";
          case BatchInferenceJobMode::THEME_GENERATION:
            return "THEME_GENERATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchInferenceJobModeMapper
    } // namespace Model
  } // namespace Personalize
} // namespace Aws
