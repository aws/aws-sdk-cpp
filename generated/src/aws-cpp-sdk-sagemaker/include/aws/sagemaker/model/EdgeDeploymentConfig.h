/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FailureHandlingPolicy.h>
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
   * <p>Contains information about the configuration of a deployment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EdgeDeploymentConfig">AWS
   * API Reference</a></p>
   */
  class EdgeDeploymentConfig
  {
  public:
    AWS_SAGEMAKER_API EdgeDeploymentConfig();
    AWS_SAGEMAKER_API EdgeDeploymentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeDeploymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Toggle that determines whether to rollback to previous configuration if the
     * current deployment fails. By default this is turned on. You may turn this off if
     * you want to investigate the errors yourself.</p>
     */
    inline const FailureHandlingPolicy& GetFailureHandlingPolicy() const{ return m_failureHandlingPolicy; }

    /**
     * <p>Toggle that determines whether to rollback to previous configuration if the
     * current deployment fails. By default this is turned on. You may turn this off if
     * you want to investigate the errors yourself.</p>
     */
    inline bool FailureHandlingPolicyHasBeenSet() const { return m_failureHandlingPolicyHasBeenSet; }

    /**
     * <p>Toggle that determines whether to rollback to previous configuration if the
     * current deployment fails. By default this is turned on. You may turn this off if
     * you want to investigate the errors yourself.</p>
     */
    inline void SetFailureHandlingPolicy(const FailureHandlingPolicy& value) { m_failureHandlingPolicyHasBeenSet = true; m_failureHandlingPolicy = value; }

    /**
     * <p>Toggle that determines whether to rollback to previous configuration if the
     * current deployment fails. By default this is turned on. You may turn this off if
     * you want to investigate the errors yourself.</p>
     */
    inline void SetFailureHandlingPolicy(FailureHandlingPolicy&& value) { m_failureHandlingPolicyHasBeenSet = true; m_failureHandlingPolicy = std::move(value); }

    /**
     * <p>Toggle that determines whether to rollback to previous configuration if the
     * current deployment fails. By default this is turned on. You may turn this off if
     * you want to investigate the errors yourself.</p>
     */
    inline EdgeDeploymentConfig& WithFailureHandlingPolicy(const FailureHandlingPolicy& value) { SetFailureHandlingPolicy(value); return *this;}

    /**
     * <p>Toggle that determines whether to rollback to previous configuration if the
     * current deployment fails. By default this is turned on. You may turn this off if
     * you want to investigate the errors yourself.</p>
     */
    inline EdgeDeploymentConfig& WithFailureHandlingPolicy(FailureHandlingPolicy&& value) { SetFailureHandlingPolicy(std::move(value)); return *this;}

  private:

    FailureHandlingPolicy m_failureHandlingPolicy;
    bool m_failureHandlingPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
