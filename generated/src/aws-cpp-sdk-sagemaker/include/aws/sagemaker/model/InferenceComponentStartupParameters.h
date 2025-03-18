/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Settings that take effect while the model container starts up.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentStartupParameters">AWS
   * API Reference</a></p>
   */
  class InferenceComponentStartupParameters
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentStartupParameters() = default;
    AWS_SAGEMAKER_API InferenceComponentStartupParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentStartupParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timeout value, in seconds, to download and extract the model that you
     * want to host from Amazon S3 to the individual inference instance associated with
     * this inference component.</p>
     */
    inline int GetModelDataDownloadTimeoutInSeconds() const { return m_modelDataDownloadTimeoutInSeconds; }
    inline bool ModelDataDownloadTimeoutInSecondsHasBeenSet() const { return m_modelDataDownloadTimeoutInSecondsHasBeenSet; }
    inline void SetModelDataDownloadTimeoutInSeconds(int value) { m_modelDataDownloadTimeoutInSecondsHasBeenSet = true; m_modelDataDownloadTimeoutInSeconds = value; }
    inline InferenceComponentStartupParameters& WithModelDataDownloadTimeoutInSeconds(int value) { SetModelDataDownloadTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout value, in seconds, for your inference container to pass health
     * check by Amazon S3 Hosting. For more information about health check, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-inference-code.html#your-algorithms-inference-algo-ping-requests">How
     * Your Container Should Respond to Health Check (Ping) Requests</a>.</p>
     */
    inline int GetContainerStartupHealthCheckTimeoutInSeconds() const { return m_containerStartupHealthCheckTimeoutInSeconds; }
    inline bool ContainerStartupHealthCheckTimeoutInSecondsHasBeenSet() const { return m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet; }
    inline void SetContainerStartupHealthCheckTimeoutInSeconds(int value) { m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet = true; m_containerStartupHealthCheckTimeoutInSeconds = value; }
    inline InferenceComponentStartupParameters& WithContainerStartupHealthCheckTimeoutInSeconds(int value) { SetContainerStartupHealthCheckTimeoutInSeconds(value); return *this;}
    ///@}
  private:

    int m_modelDataDownloadTimeoutInSeconds{0};
    bool m_modelDataDownloadTimeoutInSecondsHasBeenSet = false;

    int m_containerStartupHealthCheckTimeoutInSeconds{0};
    bool m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
