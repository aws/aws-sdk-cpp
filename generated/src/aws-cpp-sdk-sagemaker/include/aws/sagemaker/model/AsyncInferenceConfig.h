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
    AWS_SAGEMAKER_API AsyncInferenceConfig() = default;
    AWS_SAGEMAKER_API AsyncInferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AsyncInferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures the behavior of the client used by SageMaker to interact with the
     * model container during asynchronous inference.</p>
     */
    inline const AsyncInferenceClientConfig& GetClientConfig() const { return m_clientConfig; }
    inline bool ClientConfigHasBeenSet() const { return m_clientConfigHasBeenSet; }
    template<typename ClientConfigT = AsyncInferenceClientConfig>
    void SetClientConfig(ClientConfigT&& value) { m_clientConfigHasBeenSet = true; m_clientConfig = std::forward<ClientConfigT>(value); }
    template<typename ClientConfigT = AsyncInferenceClientConfig>
    AsyncInferenceConfig& WithClientConfig(ClientConfigT&& value) { SetClientConfig(std::forward<ClientConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration for asynchronous inference invocation
     * outputs.</p>
     */
    inline const AsyncInferenceOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = AsyncInferenceOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = AsyncInferenceOutputConfig>
    AsyncInferenceConfig& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}
  private:

    AsyncInferenceClientConfig m_clientConfig;
    bool m_clientConfigHasBeenSet = false;

    AsyncInferenceOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
