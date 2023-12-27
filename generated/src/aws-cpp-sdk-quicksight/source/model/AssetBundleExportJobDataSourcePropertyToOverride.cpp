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

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int DisableSsl_HASH = HashingUtils::HashString("DisableSsl");
        static const int SecretArn_HASH = HashingUtils::HashString("SecretArn");
        static const int Username_HASH = HashingUtils::HashString("Username");
        static const int Password_HASH = HashingUtils::HashString("Password");
        static const int Domain_HASH = HashingUtils::HashString("Domain");
        static const int WorkGroup_HASH = HashingUtils::HashString("WorkGroup");
        static const int Host_HASH = HashingUtils::HashString("Host");
        static const int Port_HASH = HashingUtils::HashString("Port");
        static const int Database_HASH = HashingUtils::HashString("Database");
        static const int DataSetName_HASH = HashingUtils::HashString("DataSetName");
        static const int Catalog_HASH = HashingUtils::HashString("Catalog");
        static const int InstanceId_HASH = HashingUtils::HashString("InstanceId");
        static const int ClusterId_HASH = HashingUtils::HashString("ClusterId");
        static const int ManifestFileLocation_HASH = HashingUtils::HashString("ManifestFileLocation");
        static const int Warehouse_HASH = HashingUtils::HashString("Warehouse");
        static const int RoleArn_HASH = HashingUtils::HashString("RoleArn");


        AssetBundleExportJobDataSourcePropertyToOverride GetAssetBundleExportJobDataSourcePropertyToOverrideForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
