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
    AWS_QUICKSIGHT_API AssetBundleExportJobDashboardOverrideProperties();
    AWS_QUICKSIGHT_API AssetBundleExportJobDashboardOverrideProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleExportJobDashboardOverrideProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the specific <code>Dashboard</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the specific <code>Dashboard</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the specific <code>Dashboard</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the specific <code>Dashboard</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the specific <code>Dashboard</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the specific <code>Dashboard</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline AssetBundleExportJobDashboardOverrideProperties& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the specific <code>Dashboard</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline AssetBundleExportJobDashboardOverrideProperties& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the specific <code>Dashboard</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline AssetBundleExportJobDashboardOverrideProperties& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A list of <code>Dashboard</code> resource properties to generate variables
     * for in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobDashboardPropertyToOverride>& GetProperties() const{ return m_properties; }

    /**
     * <p>A list of <code>Dashboard</code> resource properties to generate variables
     * for in the returned CloudFormation template.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A list of <code>Dashboard</code> resource properties to generate variables
     * for in the returned CloudFormation template.</p>
     */
    inline void SetProperties(const Aws::Vector<AssetBundleExportJobDashboardPropertyToOverride>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A list of <code>Dashboard</code> resource properties to generate variables
     * for in the returned CloudFormation template.</p>
     */
    inline void SetProperties(Aws::Vector<AssetBundleExportJobDashboardPropertyToOverride>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A list of <code>Dashboard</code> resource properties to generate variables
     * for in the returned CloudFormation template.</p>
     */
    inline AssetBundleExportJobDashboardOverrideProperties& WithProperties(const Aws::Vector<AssetBundleExportJobDashboardPropertyToOverride>& value) { SetProperties(value); return *this;}

    /**
     * <p>A list of <code>Dashboard</code> resource properties to generate variables
     * for in the returned CloudFormation template.</p>
     */
    inline AssetBundleExportJobDashboardOverrideProperties& WithProperties(Aws::Vector<AssetBundleExportJobDashboardPropertyToOverride>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Dashboard</code> resource properties to generate variables
     * for in the returned CloudFormation template.</p>
     */
    inline AssetBundleExportJobDashboardOverrideProperties& AddProperties(const AssetBundleExportJobDashboardPropertyToOverride& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p>A list of <code>Dashboard</code> resource properties to generate variables
     * for in the returned CloudFormation template.</p>
     */
    inline AssetBundleExportJobDashboardOverrideProperties& AddProperties(AssetBundleExportJobDashboardPropertyToOverride&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobDashboardPropertyToOverride> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
