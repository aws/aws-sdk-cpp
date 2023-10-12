/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleExportJobVPCConnectionPropertyToOverride.h>
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
      namespace AssetBundleExportJobVPCConnectionPropertyToOverrideMapper
      {

        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");
        static constexpr uint32_t DnsResolvers_HASH = ConstExprHashingUtils::HashString("DnsResolvers");
        static constexpr uint32_t RoleArn_HASH = ConstExprHashingUtils::HashString("RoleArn");


        AssetBundleExportJobVPCConnectionPropertyToOverride GetAssetBundleExportJobVPCConnectionPropertyToOverrideForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return AssetBundleExportJobVPCConnectionPropertyToOverride::Name;
          }
          else if (hashCode == DnsResolvers_HASH)
          {
            return AssetBundleExportJobVPCConnectionPropertyToOverride::DnsResolvers;
          }
          else if (hashCode == RoleArn_HASH)
          {
            return AssetBundleExportJobVPCConnectionPropertyToOverride::RoleArn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetBundleExportJobVPCConnectionPropertyToOverride>(hashCode);
          }

          return AssetBundleExportJobVPCConnectionPropertyToOverride::NOT_SET;
        }

        Aws::String GetNameForAssetBundleExportJobVPCConnectionPropertyToOverride(AssetBundleExportJobVPCConnectionPropertyToOverride enumValue)
        {
          switch(enumValue)
          {
          case AssetBundleExportJobVPCConnectionPropertyToOverride::NOT_SET:
            return {};
          case AssetBundleExportJobVPCConnectionPropertyToOverride::Name:
            return "Name";
          case AssetBundleExportJobVPCConnectionPropertyToOverride::DnsResolvers:
            return "DnsResolvers";
          case AssetBundleExportJobVPCConnectionPropertyToOverride::RoleArn:
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

      } // namespace AssetBundleExportJobVPCConnectionPropertyToOverrideMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
