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
   * <p>The access configuration file to control access to the ML model. You can
   * explicitly accept the model end-user license agreement (EULA) within the
   * <code>ModelAccessConfig</code>.</p> <ul> <li> <p>If you are a Jumpstart user,
   * see the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/jumpstart-foundation-models-choose.html#jumpstart-foundation-models-choose-eula">End-user
   * license agreements</a> section for more details on accepting the EULA.</p> </li>
   * <li> <p>If you are an AutoML user, see the <i>Optional Parameters</i> section of
   * <i>Create an AutoML job to fine-tune text generation models using the API</i>
   * for details on <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-create-experiment-finetune-llms.html#autopilot-llms-finetuning-api-optional-params">How
   * to set the EULA acceptance when fine-tuning a model using the AutoML
   * API</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelAccessConfig">AWS
   * API Reference</a></p>
   */
  class ModelAccessConfig
  {
  public:
    AWS_SAGEMAKER_API ModelAccessConfig();
    AWS_SAGEMAKER_API ModelAccessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelAccessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies agreement to the model end-user license agreement (EULA). The
     * <code>AcceptEula</code> value must be explicitly defined as <code>True</code> in
     * order to accept the EULA that this model requires. You are responsible for
     * reviewing and complying with any applicable license terms and making sure they
     * are acceptable for your use case before downloading or using a model.</p>
     */
    inline bool GetAcceptEula() const{ return m_acceptEula; }

    /**
     * <p>Specifies agreement to the model end-user license agreement (EULA). The
     * <code>AcceptEula</code> value must be explicitly defined as <code>True</code> in
     * order to accept the EULA that this model requires. You are responsible for
     * reviewing and complying with any applicable license terms and making sure they
     * are acceptable for your use case before downloading or using a model.</p>
     */
    inline bool AcceptEulaHasBeenSet() const { return m_acceptEulaHasBeenSet; }

    /**
     * <p>Specifies agreement to the model end-user license agreement (EULA). The
     * <code>AcceptEula</code> value must be explicitly defined as <code>True</code> in
     * order to accept the EULA that this model requires. You are responsible for
     * reviewing and complying with any applicable license terms and making sure they
     * are acceptable for your use case before downloading or using a model.</p>
     */
    inline void SetAcceptEula(bool value) { m_acceptEulaHasBeenSet = true; m_acceptEula = value; }

    /**
     * <p>Specifies agreement to the model end-user license agreement (EULA). The
     * <code>AcceptEula</code> value must be explicitly defined as <code>True</code> in
     * order to accept the EULA that this model requires. You are responsible for
     * reviewing and complying with any applicable license terms and making sure they
     * are acceptable for your use case before downloading or using a model.</p>
     */
    inline ModelAccessConfig& WithAcceptEula(bool value) { SetAcceptEula(value); return *this;}

  private:

    bool m_acceptEula;
    bool m_acceptEulaHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
