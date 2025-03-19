/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CollectionConfiguration.h>
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
   * <p>Configuration information for the Amazon SageMaker Debugger hook parameters,
   * metric and tensor collections, and storage paths. To learn more about how to
   * configure the <code>DebugHookConfig</code> parameter, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
   * the SageMaker and Debugger Configuration API Operations to Create, Update, and
   * Debug Your Training Job</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DebugHookConfig">AWS
   * API Reference</a></p>
   */
  class DebugHookConfig
  {
  public:
    AWS_SAGEMAKER_API DebugHookConfig() = default;
    AWS_SAGEMAKER_API DebugHookConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DebugHookConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Path to local storage location for metrics and tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline const Aws::String& GetLocalPath() const { return m_localPath; }
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }
    template<typename LocalPathT = Aws::String>
    void SetLocalPath(LocalPathT&& value) { m_localPathHasBeenSet = true; m_localPath = std::forward<LocalPathT>(value); }
    template<typename LocalPathT = Aws::String>
    DebugHookConfig& WithLocalPath(LocalPathT&& value) { SetLocalPath(std::forward<LocalPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Path to Amazon S3 storage location for metrics and tensors.</p>
     */
    inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
    template<typename S3OutputPathT = Aws::String>
    void SetS3OutputPath(S3OutputPathT&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::forward<S3OutputPathT>(value); }
    template<typename S3OutputPathT = Aws::String>
    DebugHookConfig& WithS3OutputPath(S3OutputPathT&& value) { SetS3OutputPath(std::forward<S3OutputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHookParameters() const { return m_hookParameters; }
    inline bool HookParametersHasBeenSet() const { return m_hookParametersHasBeenSet; }
    template<typename HookParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHookParameters(HookParametersT&& value) { m_hookParametersHasBeenSet = true; m_hookParameters = std::forward<HookParametersT>(value); }
    template<typename HookParametersT = Aws::Map<Aws::String, Aws::String>>
    DebugHookConfig& WithHookParameters(HookParametersT&& value) { SetHookParameters(std::forward<HookParametersT>(value)); return *this;}
    template<typename HookParametersKeyT = Aws::String, typename HookParametersValueT = Aws::String>
    DebugHookConfig& AddHookParameters(HookParametersKeyT&& key, HookParametersValueT&& value) {
      m_hookParametersHasBeenSet = true; m_hookParameters.emplace(std::forward<HookParametersKeyT>(key), std::forward<HookParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Configuration information for Amazon SageMaker Debugger tensor collections.
     * To learn more about how to configure the <code>CollectionConfiguration</code>
     * parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline const Aws::Vector<CollectionConfiguration>& GetCollectionConfigurations() const { return m_collectionConfigurations; }
    inline bool CollectionConfigurationsHasBeenSet() const { return m_collectionConfigurationsHasBeenSet; }
    template<typename CollectionConfigurationsT = Aws::Vector<CollectionConfiguration>>
    void SetCollectionConfigurations(CollectionConfigurationsT&& value) { m_collectionConfigurationsHasBeenSet = true; m_collectionConfigurations = std::forward<CollectionConfigurationsT>(value); }
    template<typename CollectionConfigurationsT = Aws::Vector<CollectionConfiguration>>
    DebugHookConfig& WithCollectionConfigurations(CollectionConfigurationsT&& value) { SetCollectionConfigurations(std::forward<CollectionConfigurationsT>(value)); return *this;}
    template<typename CollectionConfigurationsT = CollectionConfiguration>
    DebugHookConfig& AddCollectionConfigurations(CollectionConfigurationsT&& value) { m_collectionConfigurationsHasBeenSet = true; m_collectionConfigurations.emplace_back(std::forward<CollectionConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hookParameters;
    bool m_hookParametersHasBeenSet = false;

    Aws::Vector<CollectionConfiguration> m_collectionConfigurations;
    bool m_collectionConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
