/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AssetBundleExportJobRefreshSchedulePropertyToOverride.h>
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
   * <p>Controls how a specific <code>RefreshSchedule</code> resource is
   * parameterized in the returned CloudFormation template.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleExportJobRefreshScheduleOverrideProperties">AWS
   * API Reference</a></p>
   */
  class AssetBundleExportJobRefreshScheduleOverrideProperties
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleExportJobRefreshScheduleOverrideProperties() = default;
    AWS_QUICKSIGHT_API AssetBundleExportJobRefreshScheduleOverrideProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleExportJobRefreshScheduleOverrideProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the specific <code>RefreshSchedule</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AssetBundleExportJobRefreshScheduleOverrideProperties& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>RefreshSchedule</code> resource properties to generate
     * variables for in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobRefreshSchedulePropertyToOverride>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Vector<AssetBundleExportJobRefreshSchedulePropertyToOverride>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Vector<AssetBundleExportJobRefreshSchedulePropertyToOverride>>
    AssetBundleExportJobRefreshScheduleOverrideProperties& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    inline AssetBundleExportJobRefreshScheduleOverrideProperties& AddProperties(AssetBundleExportJobRefreshSchedulePropertyToOverride value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobRefreshSchedulePropertyToOverride> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
