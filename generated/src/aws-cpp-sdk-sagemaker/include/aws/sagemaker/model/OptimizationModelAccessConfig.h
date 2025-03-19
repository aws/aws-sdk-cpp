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
   * <p>The access configuration settings for the source ML model for an optimization
   * job, where you can accept the model end-user license agreement
   * (EULA).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OptimizationModelAccessConfig">AWS
   * API Reference</a></p>
   */
  class OptimizationModelAccessConfig
  {
  public:
    AWS_SAGEMAKER_API OptimizationModelAccessConfig() = default;
    AWS_SAGEMAKER_API OptimizationModelAccessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OptimizationModelAccessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies agreement to the model end-user license agreement (EULA). The
     * <code>AcceptEula</code> value must be explicitly defined as <code>True</code> in
     * order to accept the EULA that this model requires. You are responsible for
     * reviewing and complying with any applicable license terms and making sure they
     * are acceptable for your use case before downloading or using a model.</p>
     */
    inline bool GetAcceptEula() const { return m_acceptEula; }
    inline bool AcceptEulaHasBeenSet() const { return m_acceptEulaHasBeenSet; }
    inline void SetAcceptEula(bool value) { m_acceptEulaHasBeenSet = true; m_acceptEula = value; }
    inline OptimizationModelAccessConfig& WithAcceptEula(bool value) { SetAcceptEula(value); return *this;}
    ///@}
  private:

    bool m_acceptEula{false};
    bool m_acceptEulaHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
