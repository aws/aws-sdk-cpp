/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static constexpr uint32_t db_instance_HASH = ConstExprHashingUtils::HashString("db-instance");
        static constexpr uint32_t db_parameter_group_HASH = ConstExprHashingUtils::HashString("db-parameter-group");
        static constexpr uint32_t db_security_group_HASH = ConstExprHashingUtils::HashString("db-security-group");
        static constexpr uint32_t db_snapshot_HASH = ConstExprHashingUtils::HashString("db-snapshot");
        static constexpr uint32_t db_cluster_HASH = ConstExprHashingUtils::HashString("db-cluster");
        static constexpr uint32_t db_cluster_snapshot_HASH = ConstExprHashingUtils::HashString("db-cluster-snapshot");
        static constexpr uint32_t custom_engine_version_HASH = ConstExprHashingUtils::HashString("custom-engine-version");
        static constexpr uint32_t db_proxy_HASH = ConstExprHashingUtils::HashString("db-proxy");
        static constexpr uint32_t blue_green_deployment_HASH = ConstExprHashingUtils::HashString("blue-green-deployment");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == db_instance_HASH)
          {
            return SourceType::db_instance;
          }
          else if (hashCode == db_parameter_group_HASH)
          {
            return SourceType::db_parameter_group;
          }
          else if (hashCode == db_security_group_HASH)
          {
            return SourceType::db_security_group;
          }
          else if (hashCode == db_snapshot_HASH)
          {
            return SourceType::db_snapshot;
          }
          else if (hashCode == db_cluster_HASH)
          {
            return SourceType::db_cluster;
          }
          else if (hashCode == db_cluster_snapshot_HASH)
          {
            return SourceType::db_cluster_snapshot;
          }
          else if (hashCode == custom_engine_version_HASH)
          {
            return SourceType::custom_engine_version;
          }
          else if (hashCode == db_proxy_HASH)
          {
            return SourceType::db_proxy;
          }
          else if (hashCode == blue_green_deployment_HASH)
          {
            return SourceType::blue_green_deployment;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceType>(hashCode);
          }

          return SourceType::NOT_SET;
        }

        Aws::String GetNameForSourceType(SourceType enumValue)
        {
          switch(enumValue)
          {
          case SourceType::NOT_SET:
            return {};
          case SourceType::db_instance:
            return "db-instance";
          case SourceType::db_parameter_group:
            return "db-parameter-group";
          case SourceType::db_security_group:
            return "db-security-group";
          case SourceType::db_snapshot:
            return "db-snapshot";
          case SourceType::db_cluster:
            return "db-cluster";
          case SourceType::db_cluster_snapshot:
            return "db-cluster-snapshot";
          case SourceType::custom_engine_version:
            return "custom-engine-version";
          case SourceType::db_proxy:
            return "db-proxy";
          case SourceType::blue_green_deployment:
            return "blue-green-deployment";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
