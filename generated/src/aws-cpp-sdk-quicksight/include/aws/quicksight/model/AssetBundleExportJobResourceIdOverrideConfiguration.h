/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>An optional structure that configures resource ID overrides for the export
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleExportJobResourceIdOverrideConfiguration">AWS
   * API Reference</a></p>
   */
  class AssetBundleExportJobResourceIdOverrideConfiguration
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleExportJobResourceIdOverrideConfiguration();
    AWS_QUICKSIGHT_API AssetBundleExportJobResourceIdOverrideConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleExportJobResourceIdOverrideConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An option to request a CloudFormation variable for a prefix to be prepended
     * to each resource's ID before import. The prefix is only added to the asset IDs
     * and does not change the name of the asset.</p>
     */
    inline bool GetPrefixForAllResources() const{ return m_prefixForAllResources; }

    /**
     * <p>An option to request a CloudFormation variable for a prefix to be prepended
     * to each resource's ID before import. The prefix is only added to the asset IDs
     * and does not change the name of the asset.</p>
     */
    inline bool PrefixForAllResourcesHasBeenSet() const { return m_prefixForAllResourcesHasBeenSet; }

    /**
     * <p>An option to request a CloudFormation variable for a prefix to be prepended
     * to each resource's ID before import. The prefix is only added to the asset IDs
     * and does not change the name of the asset.</p>
     */
    inline void SetPrefixForAllResources(bool value) { m_prefixForAllResourcesHasBeenSet = true; m_prefixForAllResources = value; }

    /**
     * <p>An option to request a CloudFormation variable for a prefix to be prepended
     * to each resource's ID before import. The prefix is only added to the asset IDs
     * and does not change the name of the asset.</p>
     */
    inline AssetBundleExportJobResourceIdOverrideConfiguration& WithPrefixForAllResources(bool value) { SetPrefixForAllResources(value); return *this;}

  private:

    bool m_prefixForAllResources;
    bool m_prefixForAllResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
