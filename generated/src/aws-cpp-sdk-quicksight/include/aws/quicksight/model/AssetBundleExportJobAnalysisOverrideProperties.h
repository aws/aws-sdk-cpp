/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AssetBundleExportJobAnalysisPropertyToOverride.h>
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
   * <p>Controls how a specific <code>Analysis</code> resource is parameterized in
   * the returned CloudFormation template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleExportJobAnalysisOverrideProperties">AWS
   * API Reference</a></p>
   */
  class AssetBundleExportJobAnalysisOverrideProperties
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleExportJobAnalysisOverrideProperties();
    AWS_QUICKSIGHT_API AssetBundleExportJobAnalysisOverrideProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleExportJobAnalysisOverrideProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the specific <code>Analysis</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the specific <code>Analysis</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the specific <code>Analysis</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the specific <code>Analysis</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the specific <code>Analysis</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the specific <code>Analysis</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline AssetBundleExportJobAnalysisOverrideProperties& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the specific <code>Analysis</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline AssetBundleExportJobAnalysisOverrideProperties& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the specific <code>Analysis</code> resource whose override
     * properties are configured in this structure.</p>
     */
    inline AssetBundleExportJobAnalysisOverrideProperties& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A list of <code>Analysis</code> resource properties to generate variables for
     * in the returned CloudFormation template.</p>
     */
    inline const Aws::Vector<AssetBundleExportJobAnalysisPropertyToOverride>& GetProperties() const{ return m_properties; }

    /**
     * <p>A list of <code>Analysis</code> resource properties to generate variables for
     * in the returned CloudFormation template.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A list of <code>Analysis</code> resource properties to generate variables for
     * in the returned CloudFormation template.</p>
     */
    inline void SetProperties(const Aws::Vector<AssetBundleExportJobAnalysisPropertyToOverride>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A list of <code>Analysis</code> resource properties to generate variables for
     * in the returned CloudFormation template.</p>
     */
    inline void SetProperties(Aws::Vector<AssetBundleExportJobAnalysisPropertyToOverride>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A list of <code>Analysis</code> resource properties to generate variables for
     * in the returned CloudFormation template.</p>
     */
    inline AssetBundleExportJobAnalysisOverrideProperties& WithProperties(const Aws::Vector<AssetBundleExportJobAnalysisPropertyToOverride>& value) { SetProperties(value); return *this;}

    /**
     * <p>A list of <code>Analysis</code> resource properties to generate variables for
     * in the returned CloudFormation template.</p>
     */
    inline AssetBundleExportJobAnalysisOverrideProperties& WithProperties(Aws::Vector<AssetBundleExportJobAnalysisPropertyToOverride>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Analysis</code> resource properties to generate variables for
     * in the returned CloudFormation template.</p>
     */
    inline AssetBundleExportJobAnalysisOverrideProperties& AddProperties(const AssetBundleExportJobAnalysisPropertyToOverride& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p>A list of <code>Analysis</code> resource properties to generate variables for
     * in the returned CloudFormation template.</p>
     */
    inline AssetBundleExportJobAnalysisOverrideProperties& AddProperties(AssetBundleExportJobAnalysisPropertyToOverride&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<AssetBundleExportJobAnalysisPropertyToOverride> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
