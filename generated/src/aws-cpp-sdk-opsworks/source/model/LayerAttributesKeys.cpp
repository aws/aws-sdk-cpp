/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/LayerAttributesKeys.h>
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
      namespace LayerAttributesKeysMapper
      {

        static constexpr uint32_t EcsClusterArn_HASH = ConstExprHashingUtils::HashString("EcsClusterArn");
        static constexpr uint32_t EnableHaproxyStats_HASH = ConstExprHashingUtils::HashString("EnableHaproxyStats");
        static constexpr uint32_t HaproxyStatsUrl_HASH = ConstExprHashingUtils::HashString("HaproxyStatsUrl");
        static constexpr uint32_t HaproxyStatsUser_HASH = ConstExprHashingUtils::HashString("HaproxyStatsUser");
        static constexpr uint32_t HaproxyStatsPassword_HASH = ConstExprHashingUtils::HashString("HaproxyStatsPassword");
        static constexpr uint32_t HaproxyHealthCheckUrl_HASH = ConstExprHashingUtils::HashString("HaproxyHealthCheckUrl");
        static constexpr uint32_t HaproxyHealthCheckMethod_HASH = ConstExprHashingUtils::HashString("HaproxyHealthCheckMethod");
        static constexpr uint32_t MysqlRootPassword_HASH = ConstExprHashingUtils::HashString("MysqlRootPassword");
        static constexpr uint32_t MysqlRootPasswordUbiquitous_HASH = ConstExprHashingUtils::HashString("MysqlRootPasswordUbiquitous");
        static constexpr uint32_t GangliaUrl_HASH = ConstExprHashingUtils::HashString("GangliaUrl");
        static constexpr uint32_t GangliaUser_HASH = ConstExprHashingUtils::HashString("GangliaUser");
        static constexpr uint32_t GangliaPassword_HASH = ConstExprHashingUtils::HashString("GangliaPassword");
        static constexpr uint32_t MemcachedMemory_HASH = ConstExprHashingUtils::HashString("MemcachedMemory");
        static constexpr uint32_t NodejsVersion_HASH = ConstExprHashingUtils::HashString("NodejsVersion");
        static constexpr uint32_t RubyVersion_HASH = ConstExprHashingUtils::HashString("RubyVersion");
        static constexpr uint32_t RubygemsVersion_HASH = ConstExprHashingUtils::HashString("RubygemsVersion");
        static constexpr uint32_t ManageBundler_HASH = ConstExprHashingUtils::HashString("ManageBundler");
        static constexpr uint32_t BundlerVersion_HASH = ConstExprHashingUtils::HashString("BundlerVersion");
        static constexpr uint32_t RailsStack_HASH = ConstExprHashingUtils::HashString("RailsStack");
        static constexpr uint32_t PassengerVersion_HASH = ConstExprHashingUtils::HashString("PassengerVersion");
        static constexpr uint32_t Jvm_HASH = ConstExprHashingUtils::HashString("Jvm");
        static constexpr uint32_t JvmVersion_HASH = ConstExprHashingUtils::HashString("JvmVersion");
        static constexpr uint32_t JvmOptions_HASH = ConstExprHashingUtils::HashString("JvmOptions");
        static constexpr uint32_t JavaAppServer_HASH = ConstExprHashingUtils::HashString("JavaAppServer");
        static constexpr uint32_t JavaAppServerVersion_HASH = ConstExprHashingUtils::HashString("JavaAppServerVersion");


        LayerAttributesKeys GetLayerAttributesKeysForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EcsClusterArn_HASH)
          {
            return LayerAttributesKeys::EcsClusterArn;
          }
          else if (hashCode == EnableHaproxyStats_HASH)
          {
            return LayerAttributesKeys::EnableHaproxyStats;
          }
          else if (hashCode == HaproxyStatsUrl_HASH)
          {
            return LayerAttributesKeys::HaproxyStatsUrl;
          }
          else if (hashCode == HaproxyStatsUser_HASH)
          {
            return LayerAttributesKeys::HaproxyStatsUser;
          }
          else if (hashCode == HaproxyStatsPassword_HASH)
          {
            return LayerAttributesKeys::HaproxyStatsPassword;
          }
          else if (hashCode == HaproxyHealthCheckUrl_HASH)
          {
            return LayerAttributesKeys::HaproxyHealthCheckUrl;
          }
          else if (hashCode == HaproxyHealthCheckMethod_HASH)
          {
            return LayerAttributesKeys::HaproxyHealthCheckMethod;
          }
          else if (hashCode == MysqlRootPassword_HASH)
          {
            return LayerAttributesKeys::MysqlRootPassword;
          }
          else if (hashCode == MysqlRootPasswordUbiquitous_HASH)
          {
            return LayerAttributesKeys::MysqlRootPasswordUbiquitous;
          }
          else if (hashCode == GangliaUrl_HASH)
          {
            return LayerAttributesKeys::GangliaUrl;
          }
          else if (hashCode == GangliaUser_HASH)
          {
            return LayerAttributesKeys::GangliaUser;
          }
          else if (hashCode == GangliaPassword_HASH)
          {
            return LayerAttributesKeys::GangliaPassword;
          }
          else if (hashCode == MemcachedMemory_HASH)
          {
            return LayerAttributesKeys::MemcachedMemory;
          }
          else if (hashCode == NodejsVersion_HASH)
          {
            return LayerAttributesKeys::NodejsVersion;
          }
          else if (hashCode == RubyVersion_HASH)
          {
            return LayerAttributesKeys::RubyVersion;
          }
          else if (hashCode == RubygemsVersion_HASH)
          {
            return LayerAttributesKeys::RubygemsVersion;
          }
          else if (hashCode == ManageBundler_HASH)
          {
            return LayerAttributesKeys::ManageBundler;
          }
          else if (hashCode == BundlerVersion_HASH)
          {
            return LayerAttributesKeys::BundlerVersion;
          }
          else if (hashCode == RailsStack_HASH)
          {
            return LayerAttributesKeys::RailsStack;
          }
          else if (hashCode == PassengerVersion_HASH)
          {
            return LayerAttributesKeys::PassengerVersion;
          }
          else if (hashCode == Jvm_HASH)
          {
            return LayerAttributesKeys::Jvm;
          }
          else if (hashCode == JvmVersion_HASH)
          {
            return LayerAttributesKeys::JvmVersion;
          }
          else if (hashCode == JvmOptions_HASH)
          {
            return LayerAttributesKeys::JvmOptions;
          }
          else if (hashCode == JavaAppServer_HASH)
          {
            return LayerAttributesKeys::JavaAppServer;
          }
          else if (hashCode == JavaAppServerVersion_HASH)
          {
            return LayerAttributesKeys::JavaAppServerVersion;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LayerAttributesKeys>(hashCode);
          }

          return LayerAttributesKeys::NOT_SET;
        }

        Aws::String GetNameForLayerAttributesKeys(LayerAttributesKeys enumValue)
        {
          switch(enumValue)
          {
          case LayerAttributesKeys::NOT_SET:
            return {};
          case LayerAttributesKeys::EcsClusterArn:
            return "EcsClusterArn";
          case LayerAttributesKeys::EnableHaproxyStats:
            return "EnableHaproxyStats";
          case LayerAttributesKeys::HaproxyStatsUrl:
            return "HaproxyStatsUrl";
          case LayerAttributesKeys::HaproxyStatsUser:
            return "HaproxyStatsUser";
          case LayerAttributesKeys::HaproxyStatsPassword:
            return "HaproxyStatsPassword";
          case LayerAttributesKeys::HaproxyHealthCheckUrl:
            return "HaproxyHealthCheckUrl";
          case LayerAttributesKeys::HaproxyHealthCheckMethod:
            return "HaproxyHealthCheckMethod";
          case LayerAttributesKeys::MysqlRootPassword:
            return "MysqlRootPassword";
          case LayerAttributesKeys::MysqlRootPasswordUbiquitous:
            return "MysqlRootPasswordUbiquitous";
          case LayerAttributesKeys::GangliaUrl:
            return "GangliaUrl";
          case LayerAttributesKeys::GangliaUser:
            return "GangliaUser";
          case LayerAttributesKeys::GangliaPassword:
            return "GangliaPassword";
          case LayerAttributesKeys::MemcachedMemory:
            return "MemcachedMemory";
          case LayerAttributesKeys::NodejsVersion:
            return "NodejsVersion";
          case LayerAttributesKeys::RubyVersion:
            return "RubyVersion";
          case LayerAttributesKeys::RubygemsVersion:
            return "RubygemsVersion";
          case LayerAttributesKeys::ManageBundler:
            return "ManageBundler";
          case LayerAttributesKeys::BundlerVersion:
            return "BundlerVersion";
          case LayerAttributesKeys::RailsStack:
            return "RailsStack";
          case LayerAttributesKeys::PassengerVersion:
            return "PassengerVersion";
          case LayerAttributesKeys::Jvm:
            return "Jvm";
          case LayerAttributesKeys::JvmVersion:
            return "JvmVersion";
          case LayerAttributesKeys::JvmOptions:
            return "JvmOptions";
          case LayerAttributesKeys::JavaAppServer:
            return "JavaAppServer";
          case LayerAttributesKeys::JavaAppServerVersion:
            return "JavaAppServerVersion";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LayerAttributesKeysMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
