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
   * <p>Configuration information for the infrastructure health check of a training
   * job. A SageMaker-provided health check tests the health of instance hardware and
   * cluster network connectivity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InfraCheckConfig">AWS
   * API Reference</a></p>
   */
  class InfraCheckConfig
  {
  public:
    AWS_SAGEMAKER_API InfraCheckConfig();
    AWS_SAGEMAKER_API InfraCheckConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InfraCheckConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables an infrastructure health check.</p>
     */
    inline bool GetEnableInfraCheck() const{ return m_enableInfraCheck; }

    /**
     * <p>Enables an infrastructure health check.</p>
     */
    inline bool EnableInfraCheckHasBeenSet() const { return m_enableInfraCheckHasBeenSet; }

    /**
     * <p>Enables an infrastructure health check.</p>
     */
    inline void SetEnableInfraCheck(bool value) { m_enableInfraCheckHasBeenSet = true; m_enableInfraCheck = value; }

    /**
     * <p>Enables an infrastructure health check.</p>
     */
    inline InfraCheckConfig& WithEnableInfraCheck(bool value) { SetEnableInfraCheck(value); return *this;}

  private:

    bool m_enableInfraCheck;
    bool m_enableInfraCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
