/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/LayerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace LayerTypeMapper
      {

        static constexpr uint32_t aws_flow_ruby_HASH = ConstExprHashingUtils::HashString("aws-flow-ruby");
        static constexpr uint32_t ecs_cluster_HASH = ConstExprHashingUtils::HashString("ecs-cluster");
        static constexpr uint32_t java_app_HASH = ConstExprHashingUtils::HashString("java-app");
        static constexpr uint32_t lb_HASH = ConstExprHashingUtils::HashString("lb");
        static constexpr uint32_t web_HASH = ConstExprHashingUtils::HashString("web");
        static constexpr uint32_t php_app_HASH = ConstExprHashingUtils::HashString("php-app");
        static constexpr uint32_t rails_app_HASH = ConstExprHashingUtils::HashString("rails-app");
        static constexpr uint32_t nodejs_app_HASH = ConstExprHashingUtils::HashString("nodejs-app");
        static constexpr uint32_t memcached_HASH = ConstExprHashingUtils::HashString("memcached");
        static constexpr uint32_t db_master_HASH = ConstExprHashingUtils::HashString("db-master");
        static constexpr uint32_t monitoring_master_HASH = ConstExprHashingUtils::HashString("monitoring-master");
        static constexpr uint32_t custom_HASH = ConstExprHashingUtils::HashString("custom");


        LayerType GetLayerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aws_flow_ruby_HASH)
          {
            return LayerType::aws_flow_ruby;
          }
          else if (hashCode == ecs_cluster_HASH)
          {
            return LayerType::ecs_cluster;
          }
          else if (hashCode == java_app_HASH)
          {
            return LayerType::java_app;
          }
          else if (hashCode == lb_HASH)
          {
            return LayerType::lb;
          }
          else if (hashCode == web_HASH)
          {
            return LayerType::web;
          }
          else if (hashCode == php_app_HASH)
          {
            return LayerType::php_app;
          }
          else if (hashCode == rails_app_HASH)
          {
            return LayerType::rails_app;
          }
          else if (hashCode == nodejs_app_HASH)
          {
            return LayerType::nodejs_app;
          }
          else if (hashCode == memcached_HASH)
          {
            return LayerType::memcached;
          }
          else if (hashCode == db_master_HASH)
          {
            return LayerType::db_master;
          }
          else if (hashCode == monitoring_master_HASH)
          {
            return LayerType::monitoring_master;
          }
          else if (hashCode == custom_HASH)
          {
            return LayerType::custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LayerType>(hashCode);
          }

          return LayerType::NOT_SET;
        }

        Aws::String GetNameForLayerType(LayerType enumValue)
        {
          switch(enumValue)
          {
          case LayerType::NOT_SET:
            return {};
          case LayerType::aws_flow_ruby:
            return "aws-flow-ruby";
          case LayerType::ecs_cluster:
            return "ecs-cluster";
          case LayerType::java_app:
            return "java-app";
          case LayerType::lb:
            return "lb";
          case LayerType::web:
            return "web";
          case LayerType::php_app:
            return "php-app";
          case LayerType::rails_app:
            return "rails-app";
          case LayerType::nodejs_app:
            return "nodejs-app";
          case LayerType::memcached:
            return "memcached";
          case LayerType::db_master:
            return "db-master";
          case LayerType::monitoring_master:
            return "monitoring-master";
          case LayerType::custom:
            return "custom";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LayerTypeMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
