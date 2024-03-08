/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/AwsLogSourceName.h>
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
      namespace AwsLogSourceNameMapper
      {

        static const int ROUTE53_HASH = HashingUtils::HashString("ROUTE53");
        static const int VPC_FLOW_HASH = HashingUtils::HashString("VPC_FLOW");
        static const int SH_FINDINGS_HASH = HashingUtils::HashString("SH_FINDINGS");
        static const int CLOUD_TRAIL_MGMT_HASH = HashingUtils::HashString("CLOUD_TRAIL_MGMT");
        static const int LAMBDA_EXECUTION_HASH = HashingUtils::HashString("LAMBDA_EXECUTION");
        static const int S3_DATA_HASH = HashingUtils::HashString("S3_DATA");
        static const int EKS_AUDIT_HASH = HashingUtils::HashString("EKS_AUDIT");
        static const int WAF_HASH = HashingUtils::HashString("WAF");


        AwsLogSourceName GetAwsLogSourceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROUTE53_HASH)
          {
            return AwsLogSourceName::ROUTE53;
          }
          else if (hashCode == VPC_FLOW_HASH)
          {
            return AwsLogSourceName::VPC_FLOW;
          }
          else if (hashCode == SH_FINDINGS_HASH)
          {
            return AwsLogSourceName::SH_FINDINGS;
          }
          else if (hashCode == CLOUD_TRAIL_MGMT_HASH)
          {
            return AwsLogSourceName::CLOUD_TRAIL_MGMT;
          }
          else if (hashCode == LAMBDA_EXECUTION_HASH)
          {
            return AwsLogSourceName::LAMBDA_EXECUTION;
          }
          else if (hashCode == S3_DATA_HASH)
          {
            return AwsLogSourceName::S3_DATA;
          }
          else if (hashCode == EKS_AUDIT_HASH)
          {
            return AwsLogSourceName::EKS_AUDIT;
          }
          else if (hashCode == WAF_HASH)
          {
            return AwsLogSourceName::WAF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AwsLogSourceName>(hashCode);
          }

          return AwsLogSourceName::NOT_SET;
        }

        Aws::String GetNameForAwsLogSourceName(AwsLogSourceName enumValue)
        {
          switch(enumValue)
          {
          case AwsLogSourceName::NOT_SET:
            return {};
          case AwsLogSourceName::ROUTE53:
            return "ROUTE53";
          case AwsLogSourceName::VPC_FLOW:
            return "VPC_FLOW";
          case AwsLogSourceName::SH_FINDINGS:
            return "SH_FINDINGS";
          case AwsLogSourceName::CLOUD_TRAIL_MGMT:
            return "CLOUD_TRAIL_MGMT";
          case AwsLogSourceName::LAMBDA_EXECUTION:
            return "LAMBDA_EXECUTION";
          case AwsLogSourceName::S3_DATA:
            return "S3_DATA";
          case AwsLogSourceName::EKS_AUDIT:
            return "EKS_AUDIT";
          case AwsLogSourceName::WAF:
            return "WAF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AwsLogSourceNameMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
