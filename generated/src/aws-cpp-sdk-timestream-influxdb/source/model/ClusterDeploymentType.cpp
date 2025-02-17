/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/ClusterDeploymentType.h>
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
      namespace ClusterDeploymentTypeMapper
      {

        static const int MULTI_NODE_READ_REPLICAS_HASH = HashingUtils::HashString("MULTI_NODE_READ_REPLICAS");


        ClusterDeploymentType GetClusterDeploymentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTI_NODE_READ_REPLICAS_HASH)
          {
            return ClusterDeploymentType::MULTI_NODE_READ_REPLICAS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterDeploymentType>(hashCode);
          }

          return ClusterDeploymentType::NOT_SET;
        }

        Aws::String GetNameForClusterDeploymentType(ClusterDeploymentType enumValue)
        {
          switch(enumValue)
          {
          case ClusterDeploymentType::NOT_SET:
            return {};
          case ClusterDeploymentType::MULTI_NODE_READ_REPLICAS:
            return "MULTI_NODE_READ_REPLICAS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterDeploymentTypeMapper
    } // namespace Model
  } // namespace TimestreamInfluxDB
} // namespace Aws
