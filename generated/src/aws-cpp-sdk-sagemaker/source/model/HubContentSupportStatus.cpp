/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HubContentSupportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace HubContentSupportStatusMapper
      {

        static const int Supported_HASH = HashingUtils::HashString("Supported");
        static const int Deprecated_HASH = HashingUtils::HashString("Deprecated");
        static const int Restricted_HASH = HashingUtils::HashString("Restricted");


        HubContentSupportStatus GetHubContentSupportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Supported_HASH)
          {
            return HubContentSupportStatus::Supported;
          }
          else if (hashCode == Deprecated_HASH)
          {
            return HubContentSupportStatus::Deprecated;
          }
          else if (hashCode == Restricted_HASH)
          {
            return HubContentSupportStatus::Restricted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HubContentSupportStatus>(hashCode);
          }

          return HubContentSupportStatus::NOT_SET;
        }

        Aws::String GetNameForHubContentSupportStatus(HubContentSupportStatus enumValue)
        {
          switch(enumValue)
          {
          case HubContentSupportStatus::NOT_SET:
            return {};
          case HubContentSupportStatus::Supported:
            return "Supported";
          case HubContentSupportStatus::Deprecated:
            return "Deprecated";
          case HubContentSupportStatus::Restricted:
            return "Restricted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HubContentSupportStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
