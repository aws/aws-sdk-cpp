/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobDataSourcePropertyToOverride.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace AssetBundleExportJobDataSourcePropertyToOverrideMapper
      {

        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");
        static constexpr uint32_t DisableSsl_HASH = ConstExprHashingUtils::HashString("DisableSsl");
        static constexpr uint32_t SecretArn_HASH = ConstExprHashingUtils::HashString("SecretArn");
        static constexpr uint32_t Username_HASH = ConstExprHashingUtils::HashString("Username");
        static constexpr uint32_t Password_HASH = ConstExprHashingUtils::HashString("Password");
        static constexpr uint32_t Domain_HASH = ConstExprHashingUtils::HashString("Domain");
        static constexpr uint32_t WorkGroup_HASH = ConstExprHashingUtils::HashString("WorkGroup");
        static constexpr uint32_t Host_HASH = ConstExprHashingUtils::HashString("Host");
        static constexpr uint32_t Port_HASH = ConstExprHashingUtils::HashString("Port");
        static constexpr uint32_t Database_HASH = ConstExprHashingUtils::HashString("Database");
        static constexpr uint32_t DataSetName_HASH = ConstExprHashingUtils::HashString("DataSetName");
        static constexpr uint32_t Catalog_HASH = ConstExprHashingUtils::HashString("Catalog");
        static constexpr uint32_t InstanceId_HASH = ConstExprHashingUtils::HashString("InstanceId");
        static constexpr uint32_t ClusterId_HASH = ConstExprHashingUtils::HashString("ClusterId");
        static constexpr uint32_t ManifestFileLocation_HASH = ConstExprHashingUtils::HashString("ManifestFileLocation");
        static constexpr uint32_t Warehouse_HASH = ConstExprHashingUtils::HashString("Warehouse");
        static constexpr uint32_t RoleArn_HASH = ConstExprHashingUtils::HashString("RoleArn");


        AssetBundleExportJobDataSourcePropertyToOverride GetAssetBundleExportJobDataSourcePropertyToOverrideForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::Name;
          }
          else if (hashCode == DisableSsl_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::DisableSsl;
          }
          else if (hashCode == SecretArn_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::SecretArn;
          }
          else if (hashCode == Username_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::Username;
          }
          else if (hashCode == Password_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::Password;
          }
          else if (hashCode == Domain_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::Domain;
          }
          else if (hashCode == WorkGroup_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::WorkGroup;
          }
          else if (hashCode == Host_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::Host;
          }
          else if (hashCode == Port_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::Port;
          }
          else if (hashCode == Database_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::Database;
          }
          else if (hashCode == DataSetName_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::DataSetName;
          }
          else if (hashCode == Catalog_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::Catalog;
          }
          else if (hashCode == InstanceId_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::InstanceId;
          }
          else if (hashCode == ClusterId_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::ClusterId;
          }
          else if (hashCode == ManifestFileLocation_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::ManifestFileLocation;
          }
          else if (hashCode == Warehouse_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::Warehouse;
          }
          else if (hashCode == RoleArn_HASH)
          {
            return AssetBundleExportJobDataSourcePropertyToOverride::RoleArn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleExportJobDataSourcePropertyToOverride>(hashCode);
          }

          return AssetBundleExportJobDataSourcePropertyToOverride::NOT_SET;
        }

        Aws::String GetNameForAssetBundleExportJobDataSourcePropertyToOverride(AssetBundleExportJobDataSourcePropertyToOverride enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleExportJobDataSourcePropertyToOverride::NOT_SET:
            return {};
          case AssetBundleExportJobDataSourcePropertyToOverride::Name:
            return "Name";
          case AssetBundleExportJobDataSourcePropertyToOverride::DisableSsl:
            return "DisableSsl";
          case AssetBundleExportJobDataSourcePropertyToOverride::SecretArn:
            return "SecretArn";
          case AssetBundleExportJobDataSourcePropertyToOverride::Username:
            return "Username";
          case AssetBundleExportJobDataSourcePropertyToOverride::Password:
            return "Password";
          case AssetBundleExportJobDataSourcePropertyToOverride::Domain:
            return "Domain";
          case AssetBundleExportJobDataSourcePropertyToOverride::WorkGroup:
            return "WorkGroup";
          case AssetBundleExportJobDataSourcePropertyToOverride::Host:
            return "Host";
          case AssetBundleExportJobDataSourcePropertyToOverride::Port:
            return "Port";
          case AssetBundleExportJobDataSourcePropertyToOverride::Database:
            return "Database";
          case AssetBundleExportJobDataSourcePropertyToOverride::DataSetName:
            return "DataSetName";
          case AssetBundleExportJobDataSourcePropertyToOverride::Catalog:
            return "Catalog";
          case AssetBundleExportJobDataSourcePropertyToOverride::InstanceId:
            return "InstanceId";
          case AssetBundleExportJobDataSourcePropertyToOverride::ClusterId:
            return "ClusterId";
          case AssetBundleExportJobDataSourcePropertyToOverride::ManifestFileLocation:
            return "ManifestFileLocation";
          case AssetBundleExportJobDataSourcePropertyToOverride::Warehouse:
            return "Warehouse";
          case AssetBundleExportJobDataSourcePropertyToOverride::RoleArn:
            return "RoleArn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetBundleExportJobDataSourcePropertyToOverrideMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
