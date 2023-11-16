/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AssetBundleResourcePermissions.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that contains the configuration of a shared link to an Amazon
   * QuickSight dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleResourceLinkSharingConfiguration">AWS
   * API Reference</a></p>
   */
  class AssetBundleResourceLinkSharingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleResourceLinkSharingConfiguration();
    AWS_QUICKSIGHT_API AssetBundleResourceLinkSharingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleResourceLinkSharingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of link sharing permissions for the dashboards that you want to apply
     * overrides to.</p>
     */
    inline const AssetBundleResourcePermissions& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A list of link sharing permissions for the dashboards that you want to apply
     * overrides to.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A list of link sharing permissions for the dashboards that you want to apply
     * overrides to.</p>
     */
    inline void SetPermissions(const AssetBundleResourcePermissions& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A list of link sharing permissions for the dashboards that you want to apply
     * overrides to.</p>
     */
    inline void SetPermissions(AssetBundleResourcePermissions&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A list of link sharing permissions for the dashboards that you want to apply
     * overrides to.</p>
     */
    inline AssetBundleResourceLinkSharingConfiguration& WithPermissions(const AssetBundleResourcePermissions& value) { SetPermissions(value); return *this;}

    /**
     * <p>A list of link sharing permissions for the dashboards that you want to apply
     * overrides to.</p>
     */
    inline AssetBundleResourceLinkSharingConfiguration& WithPermissions(AssetBundleResourcePermissions&& value) { SetPermissions(std::move(value)); return *this;}

  private:

    AssetBundleResourcePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
