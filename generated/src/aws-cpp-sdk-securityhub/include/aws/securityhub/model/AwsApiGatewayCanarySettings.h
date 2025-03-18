/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about settings for canary deployment in the
   * stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiGatewayCanarySettings">AWS
   * API Reference</a></p>
   */
  class AwsApiGatewayCanarySettings
  {
  public:
    AWS_SECURITYHUB_API AwsApiGatewayCanarySettings() = default;
    AWS_SECURITYHUB_API AwsApiGatewayCanarySettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayCanarySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The percentage of traffic that is diverted to a canary deployment.</p>
     */
    inline double GetPercentTraffic() const { return m_percentTraffic; }
    inline bool PercentTrafficHasBeenSet() const { return m_percentTrafficHasBeenSet; }
    inline void SetPercentTraffic(double value) { m_percentTrafficHasBeenSet = true; m_percentTraffic = value; }
    inline AwsApiGatewayCanarySettings& WithPercentTraffic(double value) { SetPercentTraffic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment identifier for the canary deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    AwsApiGatewayCanarySettings& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariableOverrides() const { return m_stageVariableOverrides; }
    inline bool StageVariableOverridesHasBeenSet() const { return m_stageVariableOverridesHasBeenSet; }
    template<typename StageVariableOverridesT = Aws::Map<Aws::String, Aws::String>>
    void SetStageVariableOverrides(StageVariableOverridesT&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides = std::forward<StageVariableOverridesT>(value); }
    template<typename StageVariableOverridesT = Aws::Map<Aws::String, Aws::String>>
    AwsApiGatewayCanarySettings& WithStageVariableOverrides(StageVariableOverridesT&& value) { SetStageVariableOverrides(std::forward<StageVariableOverridesT>(value)); return *this;}
    template<typename StageVariableOverridesKeyT = Aws::String, typename StageVariableOverridesValueT = Aws::String>
    AwsApiGatewayCanarySettings& AddStageVariableOverrides(StageVariableOverridesKeyT&& key, StageVariableOverridesValueT&& value) {
      m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(std::forward<StageVariableOverridesKeyT>(key), std::forward<StageVariableOverridesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the canary deployment uses the stage cache.</p>
     */
    inline bool GetUseStageCache() const { return m_useStageCache; }
    inline bool UseStageCacheHasBeenSet() const { return m_useStageCacheHasBeenSet; }
    inline void SetUseStageCache(bool value) { m_useStageCacheHasBeenSet = true; m_useStageCache = value; }
    inline AwsApiGatewayCanarySettings& WithUseStageCache(bool value) { SetUseStageCache(value); return *this;}
    ///@}
  private:

    double m_percentTraffic{0.0};
    bool m_percentTrafficHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stageVariableOverrides;
    bool m_stageVariableOverridesHasBeenSet = false;

    bool m_useStageCache{false};
    bool m_useStageCacheHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
