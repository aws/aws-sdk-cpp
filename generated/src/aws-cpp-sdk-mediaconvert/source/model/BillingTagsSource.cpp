/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BillingTagsSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace BillingTagsSourceMapper
      {

        static const int QUEUE_HASH = HashingUtils::HashString("QUEUE");
        static const int PRESET_HASH = HashingUtils::HashString("PRESET");
        static const int JOB_TEMPLATE_HASH = HashingUtils::HashString("JOB_TEMPLATE");
        static const int JOB_HASH = HashingUtils::HashString("JOB");


        BillingTagsSource GetBillingTagsSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUE_HASH)
          {
            return BillingTagsSource::QUEUE;
          }
          else if (hashCode == PRESET_HASH)
          {
            return BillingTagsSource::PRESET;
          }
          else if (hashCode == JOB_TEMPLATE_HASH)
          {
            return BillingTagsSource::JOB_TEMPLATE;
          }
          else if (hashCode == JOB_HASH)
          {
            return BillingTagsSource::JOB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BillingTagsSource>(hashCode);
          }

          return BillingTagsSource::NOT_SET;
        }

        Aws::String GetNameForBillingTagsSource(BillingTagsSource enumValue)
        {
          switch(enumValue)
          {
          case BillingTagsSource::QUEUE:
            return "QUEUE";
          case BillingTagsSource::PRESET:
            return "PRESET";
          case BillingTagsSource::JOB_TEMPLATE:
            return "JOB_TEMPLATE";
          case BillingTagsSource::JOB:
            return "JOB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BillingTagsSourceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
