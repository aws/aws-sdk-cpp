/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FeatureStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Time series forecast settings for the SageMaker Canvas
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TimeSeriesForecastingSettings">AWS
   * API Reference</a></p>
   */
  class TimeSeriesForecastingSettings
  {
  public:
    AWS_SAGEMAKER_API TimeSeriesForecastingSettings() = default;
    AWS_SAGEMAKER_API TimeSeriesForecastingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TimeSeriesForecastingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes whether time series forecasting is enabled or disabled in the
     * Canvas application.</p>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TimeSeriesForecastingSettings& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that Canvas passes to Amazon Forecast for time series
     * forecasting. By default, Canvas uses the execution role specified in the
     * <code>UserProfile</code> that launches the Canvas application. If an execution
     * role is not specified in the <code>UserProfile</code>, Canvas uses the execution
     * role specified in the Domain that owns the <code>UserProfile</code>. To allow
     * time series forecasting, this IAM role should have the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security-iam-awsmanpol-canvas.html#security-iam-awsmanpol-AmazonSageMakerCanvasForecastAccess">
     * AmazonSageMakerCanvasForecastAccess</a> policy attached and
     * <code>forecast.amazonaws.com</code> added in the trust relationship as a service
     * principal.</p>
     */
    inline const Aws::String& GetAmazonForecastRoleArn() const { return m_amazonForecastRoleArn; }
    inline bool AmazonForecastRoleArnHasBeenSet() const { return m_amazonForecastRoleArnHasBeenSet; }
    template<typename AmazonForecastRoleArnT = Aws::String>
    void SetAmazonForecastRoleArn(AmazonForecastRoleArnT&& value) { m_amazonForecastRoleArnHasBeenSet = true; m_amazonForecastRoleArn = std::forward<AmazonForecastRoleArnT>(value); }
    template<typename AmazonForecastRoleArnT = Aws::String>
    TimeSeriesForecastingSettings& WithAmazonForecastRoleArn(AmazonForecastRoleArnT&& value) { SetAmazonForecastRoleArn(std::forward<AmazonForecastRoleArnT>(value)); return *this;}
    ///@}
  private:

    FeatureStatus m_status{FeatureStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_amazonForecastRoleArn;
    bool m_amazonForecastRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
