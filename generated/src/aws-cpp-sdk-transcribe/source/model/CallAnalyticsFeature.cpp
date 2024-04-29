/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CallAnalyticsFeature.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace CallAnalyticsFeatureMapper
      {

        static const int GENERATIVE_SUMMARIZATION_HASH = HashingUtils::HashString("GENERATIVE_SUMMARIZATION");


        CallAnalyticsFeature GetCallAnalyticsFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERATIVE_SUMMARIZATION_HASH)
          {
            return CallAnalyticsFeature::GENERATIVE_SUMMARIZATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CallAnalyticsFeature>(hashCode);
          }

          return CallAnalyticsFeature::NOT_SET;
        }

        Aws::String GetNameForCallAnalyticsFeature(CallAnalyticsFeature enumValue)
        {
          switch(enumValue)
          {
          case CallAnalyticsFeature::NOT_SET:
            return {};
          case CallAnalyticsFeature::GENERATIVE_SUMMARIZATION:
            return "GENERATIVE_SUMMARIZATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CallAnalyticsFeatureMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
