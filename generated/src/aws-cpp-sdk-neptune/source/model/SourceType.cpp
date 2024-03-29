﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Neptune
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static const int db_instance_HASH = HashingUtils::HashString("db-instance");
        static const int db_parameter_group_HASH = HashingUtils::HashString("db-parameter-group");
        static const int db_security_group_HASH = HashingUtils::HashString("db-security-group");
        static const int db_snapshot_HASH = HashingUtils::HashString("db-snapshot");
        static const int db_cluster_HASH = HashingUtils::HashString("db-cluster");
        static const int db_cluster_snapshot_HASH = HashingUtils::HashString("db-cluster-snapshot");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
  } // namespace Neptune
} // namespace Aws
