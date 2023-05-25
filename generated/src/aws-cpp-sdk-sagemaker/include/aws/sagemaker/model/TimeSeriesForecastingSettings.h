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
   * <p>Time series forecast settings for the SageMaker Canvas app.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TimeSeriesForecastingSettings">AWS
   * API Reference</a></p>
   */
  class TimeSeriesForecastingSettings
  {
  public:
    AWS_SAGEMAKER_API TimeSeriesForecastingSettings();
    AWS_SAGEMAKER_API TimeSeriesForecastingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TimeSeriesForecastingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether time series forecasting is enabled or disabled in the
     * Canvas app.</p>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Describes whether time series forecasting is enabled or disabled in the
     * Canvas app.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes whether time series forecasting is enabled or disabled in the
     * Canvas app.</p>
     */
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes whether time series forecasting is enabled or disabled in the
     * Canvas app.</p>
     */
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes whether time series forecasting is enabled or disabled in the
     * Canvas app.</p>
     */
    inline TimeSeriesForecastingSettings& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes whether time series forecasting is enabled or disabled in the
     * Canvas app.</p>
     */
    inline TimeSeriesForecastingSettings& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The IAM role that Canvas passes to Amazon Forecast for time series
     * forecasting. By default, Canvas uses the execution role specified in the
     * <code>UserProfile</code> that launches the Canvas app. If an execution role is
     * not specified in the <code>UserProfile</code>, Canvas uses the execution role
     * specified in the Domain that owns the <code>UserProfile</code>. To allow time
     * series forecasting, this IAM role should have the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security-iam-awsmanpol-canvas.html#security-iam-awsmanpol-AmazonSageMakerCanvasForecastAccess">
     * AmazonSageMakerCanvasForecastAccess</a> policy attached and
     * <code>forecast.amazonaws.com</code> added in the trust relationship as a service
     * principal.</p>
     */
    inline const Aws::String& GetAmazonForecastRoleArn() const{ return m_amazonForecastRoleArn; }

    /**
     * <p>The IAM role that Canvas passes to Amazon Forecast for time series
     * forecasting. By default, Canvas uses the execution role specified in the
     * <code>UserProfile</code> that launches the Canvas app. If an execution role is
     * not specified in the <code>UserProfile</code>, Canvas uses the execution role
     * specified in the Domain that owns the <code>UserProfile</code>. To allow time
     * series forecasting, this IAM role should have the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security-iam-awsmanpol-canvas.html#security-iam-awsmanpol-AmazonSageMakerCanvasForecastAccess">
     * AmazonSageMakerCanvasForecastAccess</a> policy attached and
     * <code>forecast.amazonaws.com</code> added in the trust relationship as a service
     * principal.</p>
     */
    inline bool AmazonForecastRoleArnHasBeenSet() const { return m_amazonForecastRoleArnHasBeenSet; }

    /**
     * <p>The IAM role that Canvas passes to Amazon Forecast for time series
     * forecasting. By default, Canvas uses the execution role specified in the
     * <code>UserProfile</code> that launches the Canvas app. If an execution role is
     * not specified in the <code>UserProfile</code>, Canvas uses the execution role
     * specified in the Domain that owns the <code>UserProfile</code>. To allow time
     * series forecasting, this IAM role should have the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security-iam-awsmanpol-canvas.html#security-iam-awsmanpol-AmazonSageMakerCanvasForecastAccess">
     * AmazonSageMakerCanvasForecastAccess</a> policy attached and
     * <code>forecast.amazonaws.com</code> added in the trust relationship as a service
     * principal.</p>
     */
    inline void SetAmazonForecastRoleArn(const Aws::String& value) { m_amazonForecastRoleArnHasBeenSet = true; m_amazonForecastRoleArn = value; }

    /**
     * <p>The IAM role that Canvas passes to Amazon Forecast for time series
     * forecasting. By default, Canvas uses the execution role specified in the
     * <code>UserProfile</code> that launches the Canvas app. If an execution role is
     * not specified in the <code>UserProfile</code>, Canvas uses the execution role
     * specified in the Domain that owns the <code>UserProfile</code>. To allow time
     * series forecasting, this IAM role should have the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security-iam-awsmanpol-canvas.html#security-iam-awsmanpol-AmazonSageMakerCanvasForecastAccess">
     * AmazonSageMakerCanvasForecastAccess</a> policy attached and
     * <code>forecast.amazonaws.com</code> added in the trust relationship as a service
     * principal.</p>
     */
    inline void SetAmazonForecastRoleArn(Aws::String&& value) { m_amazonForecastRoleArnHasBeenSet = true; m_amazonForecastRoleArn = std::move(value); }

    /**
     * <p>The IAM role that Canvas passes to Amazon Forecast for time series
     * forecasting. By default, Canvas uses the execution role specified in the
     * <code>UserProfile</code> that launches the Canvas app. If an execution role is
     * not specified in the <code>UserProfile</code>, Canvas uses the execution role
     * specified in the Domain that owns the <code>UserProfile</code>. To allow time
     * series forecasting, this IAM role should have the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security-iam-awsmanpol-canvas.html#security-iam-awsmanpol-AmazonSageMakerCanvasForecastAccess">
     * AmazonSageMakerCanvasForecastAccess</a> policy attached and
     * <code>forecast.amazonaws.com</code> added in the trust relationship as a service
     * principal.</p>
     */
    inline void SetAmazonForecastRoleArn(const char* value) { m_amazonForecastRoleArnHasBeenSet = true; m_amazonForecastRoleArn.assign(value); }

    /**
     * <p>The IAM role that Canvas passes to Amazon Forecast for time series
     * forecasting. By default, Canvas uses the execution role specified in the
     * <code>UserProfile</code> that launches the Canvas app. If an execution role is
     * not specified in the <code>UserProfile</code>, Canvas uses the execution role
     * specified in the Domain that owns the <code>UserProfile</code>. To allow time
     * series forecasting, this IAM role should have the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security-iam-awsmanpol-canvas.html#security-iam-awsmanpol-AmazonSageMakerCanvasForecastAccess">
     * AmazonSageMakerCanvasForecastAccess</a> policy attached and
     * <code>forecast.amazonaws.com</code> added in the trust relationship as a service
     * principal.</p>
     */
    inline TimeSeriesForecastingSettings& WithAmazonForecastRoleArn(const Aws::String& value) { SetAmazonForecastRoleArn(value); return *this;}

    /**
     * <p>The IAM role that Canvas passes to Amazon Forecast for time series
     * forecasting. By default, Canvas uses the execution role specified in the
     * <code>UserProfile</code> that launches the Canvas app. If an execution role is
     * not specified in the <code>UserProfile</code>, Canvas uses the execution role
     * specified in the Domain that owns the <code>UserProfile</code>. To allow time
     * series forecasting, this IAM role should have the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security-iam-awsmanpol-canvas.html#security-iam-awsmanpol-AmazonSageMakerCanvasForecastAccess">
     * AmazonSageMakerCanvasForecastAccess</a> policy attached and
     * <code>forecast.amazonaws.com</code> added in the trust relationship as a service
     * principal.</p>
     */
    inline TimeSeriesForecastingSettings& WithAmazonForecastRoleArn(Aws::String&& value) { SetAmazonForecastRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that Canvas passes to Amazon Forecast for time series
     * forecasting. By default, Canvas uses the execution role specified in the
     * <code>UserProfile</code> that launches the Canvas app. If an execution role is
     * not specified in the <code>UserProfile</code>, Canvas uses the execution role
     * specified in the Domain that owns the <code>UserProfile</code>. To allow time
     * series forecasting, this IAM role should have the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security-iam-awsmanpol-canvas.html#security-iam-awsmanpol-AmazonSageMakerCanvasForecastAccess">
     * AmazonSageMakerCanvasForecastAccess</a> policy attached and
     * <code>forecast.amazonaws.com</code> added in the trust relationship as a service
     * principal.</p>
     */
    inline TimeSeriesForecastingSettings& WithAmazonForecastRoleArn(const char* value) { SetAmazonForecastRoleArn(value); return *this;}

  private:

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_amazonForecastRoleArn;
    bool m_amazonForecastRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
