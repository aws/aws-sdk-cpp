/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/DeploymentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamInfluxDB
  {
    namespace Model
    {
      namespace DeploymentTypeMapper
      {

        static const int SINGLE_AZ_HASH = HashingUtils::HashString("SINGLE_AZ");
        static const int WITH_MULTIAZ_STANDBY_HASH = HashingUtils::HashString("WITH_MULTIAZ_STANDBY");


        DeploymentType GetDeploymentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_AZ_HASH)
          {
            return DeploymentType::SINGLE_AZ;
          }
          else if (hashCode == WITH_MULTIAZ_STANDBY_HASH)
          {
            return DeploymentType::WITH_MULTIAZ_STANDBY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentType>(hashCode);
          }

          return DeploymentType::NOT_SET;
        }

        Aws::String GetNameForDeploymentType(DeploymentType enumValue)
        {
          switch(enumValue)
          {
          case DeploymentType::NOT_SET:
            return {};
          case DeploymentType::SINGLE_AZ:
            return "SINGLE_AZ";
          case DeploymentType::WITH_MULTIAZ_STANDBY:
            return "WITH_MULTIAZ_STANDBY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentTypeMapper
    } // namespace Model
  } // namespace TimestreamInfluxDB
} // namespace Aws
