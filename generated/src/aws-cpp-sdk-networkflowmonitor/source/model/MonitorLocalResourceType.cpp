/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/MonitorLocalResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFlowMonitor
  {
    namespace Model
    {
      namespace MonitorLocalResourceTypeMapper
      {

        static const int AWS_EC2_VPC_HASH = HashingUtils::HashString("AWS::EC2::VPC");
        static const int AWS_AvailabilityZone_HASH = HashingUtils::HashString("AWS::AvailabilityZone");
        static const int AWS_EC2_Subnet_HASH = HashingUtils::HashString("AWS::EC2::Subnet");
        static const int AWS_Region_HASH = HashingUtils::HashString("AWS::Region");


        MonitorLocalResourceType GetMonitorLocalResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_EC2_VPC_HASH)
          {
            return MonitorLocalResourceType::AWS_EC2_VPC;
          }
          else if (hashCode == AWS_AvailabilityZone_HASH)
          {
            return MonitorLocalResourceType::AWS_AvailabilityZone;
          }
          else if (hashCode == AWS_EC2_Subnet_HASH)
          {
            return MonitorLocalResourceType::AWS_EC2_Subnet;
          }
          else if (hashCode == AWS_Region_HASH)
          {
            return MonitorLocalResourceType::AWS_Region;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitorLocalResourceType>(hashCode);
          }

          return MonitorLocalResourceType::NOT_SET;
        }

        Aws::String GetNameForMonitorLocalResourceType(MonitorLocalResourceType enumValue)
        {
          switch(enumValue)
          {
          case MonitorLocalResourceType::NOT_SET:
            return {};
          case MonitorLocalResourceType::AWS_EC2_VPC:
            return "AWS::EC2::VPC";
          case MonitorLocalResourceType::AWS_AvailabilityZone:
            return "AWS::AvailabilityZone";
          case MonitorLocalResourceType::AWS_EC2_Subnet:
            return "AWS::EC2::Subnet";
          case MonitorLocalResourceType::AWS_Region:
            return "AWS::Region";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitorLocalResourceTypeMapper
    } // namespace Model
  } // namespace NetworkFlowMonitor
} // namespace Aws
