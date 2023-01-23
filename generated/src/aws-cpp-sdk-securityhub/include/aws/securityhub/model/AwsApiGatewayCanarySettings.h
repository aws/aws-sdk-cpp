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
    AWS_SECURITYHUB_API AwsApiGatewayCanarySettings();
    AWS_SECURITYHUB_API AwsApiGatewayCanarySettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayCanarySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of traffic that is diverted to a canary deployment.</p>
     */
    inline double GetPercentTraffic() const{ return m_percentTraffic; }

    /**
     * <p>The percentage of traffic that is diverted to a canary deployment.</p>
     */
    inline bool PercentTrafficHasBeenSet() const { return m_percentTrafficHasBeenSet; }

    /**
     * <p>The percentage of traffic that is diverted to a canary deployment.</p>
     */
    inline void SetPercentTraffic(double value) { m_percentTrafficHasBeenSet = true; m_percentTraffic = value; }

    /**
     * <p>The percentage of traffic that is diverted to a canary deployment.</p>
     */
    inline AwsApiGatewayCanarySettings& WithPercentTraffic(double value) { SetPercentTraffic(value); return *this;}


    /**
     * <p>The deployment identifier for the canary deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The deployment identifier for the canary deployment.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The deployment identifier for the canary deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The deployment identifier for the canary deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The deployment identifier for the canary deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The deployment identifier for the canary deployment.</p>
     */
    inline AwsApiGatewayCanarySettings& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The deployment identifier for the canary deployment.</p>
     */
    inline AwsApiGatewayCanarySettings& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The deployment identifier for the canary deployment.</p>
     */
    inline AwsApiGatewayCanarySettings& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariableOverrides() const{ return m_stageVariableOverrides; }

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline bool StageVariableOverridesHasBeenSet() const { return m_stageVariableOverridesHasBeenSet; }

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline void SetStageVariableOverrides(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides = value; }

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline void SetStageVariableOverrides(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides = std::move(value); }

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline AwsApiGatewayCanarySettings& WithStageVariableOverrides(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariableOverrides(value); return *this;}

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline AwsApiGatewayCanarySettings& WithStageVariableOverrides(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariableOverrides(std::move(value)); return *this;}

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline AwsApiGatewayCanarySettings& AddStageVariableOverrides(const Aws::String& key, const Aws::String& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, value); return *this; }

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline AwsApiGatewayCanarySettings& AddStageVariableOverrides(Aws::String&& key, const Aws::String& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline AwsApiGatewayCanarySettings& AddStageVariableOverrides(const Aws::String& key, Aws::String&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline AwsApiGatewayCanarySettings& AddStageVariableOverrides(Aws::String&& key, Aws::String&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline AwsApiGatewayCanarySettings& AddStageVariableOverrides(const char* key, Aws::String&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline AwsApiGatewayCanarySettings& AddStageVariableOverrides(Aws::String&& key, const char* value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>Stage variables that are overridden in the canary release deployment. The
     * variables include new stage variables that are introduced in the canary.</p>
     * <p>Each variable is represented as a string-to-string map between the stage
     * variable name and the variable value.</p>
     */
    inline AwsApiGatewayCanarySettings& AddStageVariableOverrides(const char* key, const char* value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, value); return *this; }


    /**
     * <p>Indicates whether the canary deployment uses the stage cache.</p>
     */
    inline bool GetUseStageCache() const{ return m_useStageCache; }

    /**
     * <p>Indicates whether the canary deployment uses the stage cache.</p>
     */
    inline bool UseStageCacheHasBeenSet() const { return m_useStageCacheHasBeenSet; }

    /**
     * <p>Indicates whether the canary deployment uses the stage cache.</p>
     */
    inline void SetUseStageCache(bool value) { m_useStageCacheHasBeenSet = true; m_useStageCache = value; }

    /**
     * <p>Indicates whether the canary deployment uses the stage cache.</p>
     */
    inline AwsApiGatewayCanarySettings& WithUseStageCache(bool value) { SetUseStageCache(value); return *this;}

  private:

    double m_percentTraffic;
    bool m_percentTrafficHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stageVariableOverrides;
    bool m_stageVariableOverridesHasBeenSet = false;

    bool m_useStageCache;
    bool m_useStageCacheHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
