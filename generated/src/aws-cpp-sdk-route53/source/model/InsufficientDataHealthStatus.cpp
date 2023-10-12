/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/InsufficientDataHealthStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace InsufficientDataHealthStatusMapper
      {

        static constexpr uint32_t Healthy_HASH = ConstExprHashingUtils::HashString("Healthy");
        static constexpr uint32_t Unhealthy_HASH = ConstExprHashingUtils::HashString("Unhealthy");
        static constexpr uint32_t LastKnownStatus_HASH = ConstExprHashingUtils::HashString("LastKnownStatus");


        InsufficientDataHealthStatus GetInsufficientDataHealthStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Healthy_HASH)
          {
            return InsufficientDataHealthStatus::Healthy;
          }
          else if (hashCode == Unhealthy_HASH)
          {
            return InsufficientDataHealthStatus::Unhealthy;
          }
          else if (hashCode == LastKnownStatus_HASH)
          {
            return InsufficientDataHealthStatus::LastKnownStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsufficientDataHealthStatus>(hashCode);
          }

          return InsufficientDataHealthStatus::NOT_SET;
        }

        Aws::String GetNameForInsufficientDataHealthStatus(InsufficientDataHealthStatus enumValue)
        {
          switch(enumValue)
          {
          case InsufficientDataHealthStatus::NOT_SET:
            return {};
          case InsufficientDataHealthStatus::Healthy:
            return "Healthy";
          case InsufficientDataHealthStatus::Unhealthy:
            return "Unhealthy";
          case InsufficientDataHealthStatus::LastKnownStatus:
            return "LastKnownStatus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsufficientDataHealthStatusMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
