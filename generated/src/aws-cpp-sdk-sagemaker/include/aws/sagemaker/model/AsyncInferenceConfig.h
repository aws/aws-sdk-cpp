/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AsyncInferenceClientConfig.h>
#include <aws/sagemaker/model/AsyncInferenceOutputConfig.h>
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
   * <p>Specifies configuration for how an endpoint performs asynchronous
   * inference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AsyncInferenceConfig">AWS
   * API Reference</a></p>
   */
  class AsyncInferenceConfig
  {
  public:
    AWS_SAGEMAKER_API AsyncInferenceConfig();
    AWS_SAGEMAKER_API AsyncInferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AsyncInferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configures the behavior of the client used by SageMaker to interact with the
     * model container during asynchronous inference.</p>
     */
    inline const AsyncInferenceClientConfig& GetClientConfig() const{ return m_clientConfig; }

    /**
     * <p>Configures the behavior of the client used by SageMaker to interact with the
     * model container during asynchronous inference.</p>
     */
    inline bool ClientConfigHasBeenSet() const { return m_clientConfigHasBeenSet; }

    /**
     * <p>Configures the behavior of the client used by SageMaker to interact with the
     * model container during asynchronous inference.</p>
     */
    inline void SetClientConfig(const AsyncInferenceClientConfig& value) { m_clientConfigHasBeenSet = true; m_clientConfig = value; }

    /**
     * <p>Configures the behavior of the client used by SageMaker to interact with the
     * model container during asynchronous inference.</p>
     */
    inline void SetClientConfig(AsyncInferenceClientConfig&& value) { m_clientConfigHasBeenSet = true; m_clientConfig = std::move(value); }

    /**
     * <p>Configures the behavior of the client used by SageMaker to interact with the
     * model container during asynchronous inference.</p>
     */
    inline AsyncInferenceConfig& WithClientConfig(const AsyncInferenceClientConfig& value) { SetClientConfig(value); return *this;}

    /**
     * <p>Configures the behavior of the client used by SageMaker to interact with the
     * model container during asynchronous inference.</p>
     */
    inline AsyncInferenceConfig& WithClientConfig(AsyncInferenceClientConfig&& value) { SetClientConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies the configuration for asynchronous inference invocation
     * outputs.</p>
     */
    inline const AsyncInferenceOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>Specifies the configuration for asynchronous inference invocation
     * outputs.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>Specifies the configuration for asynchronous inference invocation
     * outputs.</p>
     */
    inline void SetOutputConfig(const AsyncInferenceOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>Specifies the configuration for asynchronous inference invocation
     * outputs.</p>
     */
    inline void SetOutputConfig(AsyncInferenceOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>Specifies the configuration for asynchronous inference invocation
     * outputs.</p>
     */
    inline AsyncInferenceConfig& WithOutputConfig(const AsyncInferenceOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>Specifies the configuration for asynchronous inference invocation
     * outputs.</p>
     */
    inline AsyncInferenceConfig& WithOutputConfig(AsyncInferenceOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}

  private:

    AsyncInferenceClientConfig m_clientConfig;
    bool m_clientConfigHasBeenSet = false;

    AsyncInferenceOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
