/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/AWSServiceName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace AWSServiceNameMapper
      {

        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int ELASTICACHE_HASH = HashingUtils::HashString("ELASTICACHE");
        static const int ELB_HASH = HashingUtils::HashString("ELB");
        static const int RDS_HASH = HashingUtils::HashString("RDS");
        static const int ROUTE53_HASH = HashingUtils::HashString("ROUTE53");


        AWSServiceName GetAWSServiceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return AWSServiceName::AWS;
          }
          else if (hashCode == EC2_HASH)
          {
            return AWSServiceName::EC2;
          }
          else if (hashCode == ELASTICACHE_HASH)
          {
            return AWSServiceName::ELASTICACHE;
          }
          else if (hashCode == ELB_HASH)
          {
            return AWSServiceName::ELB;
          }
          else if (hashCode == RDS_HASH)
          {
            return AWSServiceName::RDS;
          }
          else if (hashCode == ROUTE53_HASH)
          {
            return AWSServiceName::ROUTE53;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AWSServiceName>(hashCode);
          }

          return AWSServiceName::NOT_SET;
        }

        Aws::String GetNameForAWSServiceName(AWSServiceName enumValue)
        {
          switch(enumValue)
          {
          case AWSServiceName::NOT_SET:
            return {};
          case AWSServiceName::AWS:
            return "AWS";
          case AWSServiceName::EC2:
            return "EC2";
          case AWSServiceName::ELASTICACHE:
            return "ELASTICACHE";
          case AWSServiceName::ELB:
            return "ELB";
          case AWSServiceName::RDS:
            return "RDS";
          case AWSServiceName::ROUTE53:
            return "ROUTE53";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AWSServiceNameMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
