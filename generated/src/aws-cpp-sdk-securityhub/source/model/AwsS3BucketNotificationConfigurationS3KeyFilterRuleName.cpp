/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketNotificationConfigurationS3KeyFilterRuleName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace AwsS3BucketNotificationConfigurationS3KeyFilterRuleNameMapper
      {

        static const int Prefix_HASH = HashingUtils::HashString("Prefix");
        static const int Suffix_HASH = HashingUtils::HashString("Suffix");


        AwsS3BucketNotificationConfigurationS3KeyFilterRuleName GetAwsS3BucketNotificationConfigurationS3KeyFilterRuleNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Prefix_HASH)
          {
            return AwsS3BucketNotificationConfigurationS3KeyFilterRuleName::Prefix;
          }
          else if (hashCode == Suffix_HASH)
          {
            return AwsS3BucketNotificationConfigurationS3KeyFilterRuleName::Suffix;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsS3BucketNotificationConfigurationS3KeyFilterRuleName>(hashCode);
          }

          return AwsS3BucketNotificationConfigurationS3KeyFilterRuleName::NOT_SET;
        }

        Aws::String GetNameForAwsS3BucketNotificationConfigurationS3KeyFilterRuleName(AwsS3BucketNotificationConfigurationS3KeyFilterRuleName enumValue)
        {
          switch(enumValue)
          {
          case AwsS3BucketNotificationConfigurationS3KeyFilterRuleName::NOT_SET:
            return {};
          case AwsS3BucketNotificationConfigurationS3KeyFilterRuleName::Prefix:
            return "Prefix";
          case AwsS3BucketNotificationConfigurationS3KeyFilterRuleName::Suffix:
            return "Suffix";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AwsS3BucketNotificationConfigurationS3KeyFilterRuleNameMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
