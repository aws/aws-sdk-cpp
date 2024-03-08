/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FeatureStatus.h>
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
   * <p>The model deployment settings for the SageMaker Canvas application.</p>
   *  <p>In order to enable model deployment for Canvas, the SageMaker Domain's
   * or user profile's Amazon Web Services IAM execution role must have the
   * <code>AmazonSageMakerCanvasDirectDeployAccess</code> policy attached. You can
   * also turn on model deployment permissions through the SageMaker Domain's or user
   * profile's settings in the SageMaker console.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DirectDeploySettings">AWS
   * API Reference</a></p>
   */
  class DirectDeploySettings
  {
  public:
    AWS_SAGEMAKER_API DirectDeploySettings();
    AWS_SAGEMAKER_API DirectDeploySettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DirectDeploySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether model deployment permissions are enabled or disabled in the
     * Canvas application.</p>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Describes whether model deployment permissions are enabled or disabled in the
     * Canvas application.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes whether model deployment permissions are enabled or disabled in the
     * Canvas application.</p>
     */
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes whether model deployment permissions are enabled or disabled in the
     * Canvas application.</p>
     */
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes whether model deployment permissions are enabled or disabled in the
     * Canvas application.</p>
     */
    inline DirectDeploySettings& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes whether model deployment permissions are enabled or disabled in the
     * Canvas application.</p>
     */
    inline DirectDeploySettings& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
