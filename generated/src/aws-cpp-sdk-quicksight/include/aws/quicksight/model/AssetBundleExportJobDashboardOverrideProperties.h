/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AssetBundleExportJobDashboardPropertyToOverride.h>
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
   * <p>Controls how a specific <code>Dashboard</code> resource is parameterized in
   * the returned CloudFormation template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleExportJobDashboardOverrideProperties">AWS
   * API Reference</a></p>
   */
  class AssetBundleExportJobDashboardOverrideProperties
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleExportJobDashboardOverrideProperties() = default;
    AWS_QUICKSIGHT_API AssetBundleExportJobDashboardOverrideProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleExportJobDashboardOverrideProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the specific <code>Dashboard</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AssetBundleExportJobDashboardOverrideProperties& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Dashboard</code> resource properties to generate variables
     * for in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobDashboardPropertyToOverride>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Vector<AssetBundleExportJobDashboardPropertyToOverride>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Vector<AssetBundleExportJobDashboardPropertyToOverride>>
    AssetBundleExportJobDashboardOverrideProperties& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    inline AssetBundleExportJobDashboardOverrideProperties& AddProperties(AssetBundleExportJobDashboardPropertyToOverride value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobDashboardPropertyToOverride> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
