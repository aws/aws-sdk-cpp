/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>Determines whether a service deployment fails if a service cannot reach a
   * steady state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails();
    AWS_SECURITYHUB_API AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to enable the deployment circuit breaker logic for the service.</p>
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * <p>Whether to enable the deployment circuit breaker logic for the service.</p>
     */
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }

    /**
     * <p>Whether to enable the deployment circuit breaker logic for the service.</p>
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * <p>Whether to enable the deployment circuit breaker logic for the service.</p>
     */
    inline AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails& WithEnable(bool value) { SetEnable(value); return *this;}


    /**
     * <p>Whether to roll back the service if a service deployment fails. If rollback
     * is enabled, when a service deployment fails, the service is rolled back to the
     * last deployment that completed successfully.</p>
     */
    inline bool GetRollback() const{ return m_rollback; }

    /**
     * <p>Whether to roll back the service if a service deployment fails. If rollback
     * is enabled, when a service deployment fails, the service is rolled back to the
     * last deployment that completed successfully.</p>
     */
    inline bool RollbackHasBeenSet() const { return m_rollbackHasBeenSet; }

    /**
     * <p>Whether to roll back the service if a service deployment fails. If rollback
     * is enabled, when a service deployment fails, the service is rolled back to the
     * last deployment that completed successfully.</p>
     */
    inline void SetRollback(bool value) { m_rollbackHasBeenSet = true; m_rollback = value; }

    /**
     * <p>Whether to roll back the service if a service deployment fails. If rollback
     * is enabled, when a service deployment fails, the service is rolled back to the
     * last deployment that completed successfully.</p>
     */
    inline AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails& WithRollback(bool value) { SetRollback(value); return *this;}

  private:

    bool m_enable;
    bool m_enableHasBeenSet = false;

    bool m_rollback;
    bool m_rollbackHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
