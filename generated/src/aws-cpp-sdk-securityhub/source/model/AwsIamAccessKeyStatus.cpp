/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamAccessKeyStatus.h>
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
      namespace AwsIamAccessKeyStatusMapper
      {

        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t Inactive_HASH = ConstExprHashingUtils::HashString("Inactive");


        AwsIamAccessKeyStatus GetAwsIamAccessKeyStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return AwsIamAccessKeyStatus::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return AwsIamAccessKeyStatus::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsIamAccessKeyStatus>(hashCode);
          }

          return AwsIamAccessKeyStatus::NOT_SET;
        }

        Aws::String GetNameForAwsIamAccessKeyStatus(AwsIamAccessKeyStatus enumValue)
        {
          switch(enumValue)
          {
          case AwsIamAccessKeyStatus::NOT_SET:
            return {};
          case AwsIamAccessKeyStatus::Active:
            return "Active";
          case AwsIamAccessKeyStatus::Inactive:
            return "Inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AwsIamAccessKeyStatusMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
