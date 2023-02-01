/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/AwsLogSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace AwsLogSourceTypeMapper
      {

        static const int ROUTE53_HASH = HashingUtils::HashString("ROUTE53");
        static const int VPC_FLOW_HASH = HashingUtils::HashString("VPC_FLOW");
        static const int CLOUD_TRAIL_HASH = HashingUtils::HashString("CLOUD_TRAIL");
        static const int SH_FINDINGS_HASH = HashingUtils::HashString("SH_FINDINGS");


        AwsLogSourceType GetAwsLogSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROUTE53_HASH)
          {
            return AwsLogSourceType::ROUTE53;
          }
          else if (hashCode == VPC_FLOW_HASH)
          {
            return AwsLogSourceType::VPC_FLOW;
          }
          else if (hashCode == CLOUD_TRAIL_HASH)
          {
            return AwsLogSourceType::CLOUD_TRAIL;
          }
          else if (hashCode == SH_FINDINGS_HASH)
          {
            return AwsLogSourceType::SH_FINDINGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsLogSourceType>(hashCode);
          }

          return AwsLogSourceType::NOT_SET;
        }

        Aws::String GetNameForAwsLogSourceType(AwsLogSourceType enumValue)
        {
          switch(enumValue)
          {
          case AwsLogSourceType::ROUTE53:
            return "ROUTE53";
          case AwsLogSourceType::VPC_FLOW:
            return "VPC_FLOW";
          case AwsLogSourceType::CLOUD_TRAIL:
            return "CLOUD_TRAIL";
          case AwsLogSourceType::SH_FINDINGS:
            return "SH_FINDINGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AwsLogSourceTypeMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
