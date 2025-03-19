/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ObjectLambdaAllowedFeature.h>
#include <aws/s3control/model/ObjectLambdaTransformationConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A configuration used when creating an Object Lambda Access
   * Point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ObjectLambdaConfiguration">AWS
   * API Reference</a></p>
   */
  class ObjectLambdaConfiguration
  {
  public:
    AWS_S3CONTROL_API ObjectLambdaConfiguration() = default;
    AWS_S3CONTROL_API ObjectLambdaConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ObjectLambdaConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Standard access point associated with the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetSupportingAccessPoint() const { return m_supportingAccessPoint; }
    inline bool SupportingAccessPointHasBeenSet() const { return m_supportingAccessPointHasBeenSet; }
    template<typename SupportingAccessPointT = Aws::String>
    void SetSupportingAccessPoint(SupportingAccessPointT&& value) { m_supportingAccessPointHasBeenSet = true; m_supportingAccessPoint = std::forward<SupportingAccessPointT>(value); }
    template<typename SupportingAccessPointT = Aws::String>
    ObjectLambdaConfiguration& WithSupportingAccessPoint(SupportingAccessPointT&& value) { SetSupportingAccessPoint(std::forward<SupportingAccessPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for whether the CloudWatch metrics configuration is enabled.</p>
     */
    inline bool GetCloudWatchMetricsEnabled() const { return m_cloudWatchMetricsEnabled; }
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }
    inline ObjectLambdaConfiguration& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for allowed features. Valid inputs are
     * <code>GetObject-Range</code>, <code>GetObject-PartNumber</code>,
     * <code>HeadObject-Range</code>, and <code>HeadObject-PartNumber</code>.</p>
     */
    inline const Aws::Vector<ObjectLambdaAllowedFeature>& GetAllowedFeatures() const { return m_allowedFeatures; }
    inline bool AllowedFeaturesHasBeenSet() const { return m_allowedFeaturesHasBeenSet; }
    template<typename AllowedFeaturesT = Aws::Vector<ObjectLambdaAllowedFeature>>
    void SetAllowedFeatures(AllowedFeaturesT&& value) { m_allowedFeaturesHasBeenSet = true; m_allowedFeatures = std::forward<AllowedFeaturesT>(value); }
    template<typename AllowedFeaturesT = Aws::Vector<ObjectLambdaAllowedFeature>>
    ObjectLambdaConfiguration& WithAllowedFeatures(AllowedFeaturesT&& value) { SetAllowedFeatures(std::forward<AllowedFeaturesT>(value)); return *this;}
    inline ObjectLambdaConfiguration& AddAllowedFeatures(ObjectLambdaAllowedFeature value) { m_allowedFeaturesHasBeenSet = true; m_allowedFeatures.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A container for transformation configurations for an Object Lambda Access
     * Point.</p>
     */
    inline const Aws::Vector<ObjectLambdaTransformationConfiguration>& GetTransformationConfigurations() const { return m_transformationConfigurations; }
    inline bool TransformationConfigurationsHasBeenSet() const { return m_transformationConfigurationsHasBeenSet; }
    template<typename TransformationConfigurationsT = Aws::Vector<ObjectLambdaTransformationConfiguration>>
    void SetTransformationConfigurations(TransformationConfigurationsT&& value) { m_transformationConfigurationsHasBeenSet = true; m_transformationConfigurations = std::forward<TransformationConfigurationsT>(value); }
    template<typename TransformationConfigurationsT = Aws::Vector<ObjectLambdaTransformationConfiguration>>
    ObjectLambdaConfiguration& WithTransformationConfigurations(TransformationConfigurationsT&& value) { SetTransformationConfigurations(std::forward<TransformationConfigurationsT>(value)); return *this;}
    template<typename TransformationConfigurationsT = ObjectLambdaTransformationConfiguration>
    ObjectLambdaConfiguration& AddTransformationConfigurations(TransformationConfigurationsT&& value) { m_transformationConfigurationsHasBeenSet = true; m_transformationConfigurations.emplace_back(std::forward<TransformationConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_supportingAccessPoint;
    bool m_supportingAccessPointHasBeenSet = false;

    bool m_cloudWatchMetricsEnabled{false};
    bool m_cloudWatchMetricsEnabledHasBeenSet = false;

    Aws::Vector<ObjectLambdaAllowedFeature> m_allowedFeatures;
    bool m_allowedFeaturesHasBeenSet = false;

    Aws::Vector<ObjectLambdaTransformationConfiguration> m_transformationConfigurations;
    bool m_transformationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
