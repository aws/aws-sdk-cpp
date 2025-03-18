/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OutputParameter.h>
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
   * <p>Metadata for a Lambda step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LambdaStepMetadata">AWS
   * API Reference</a></p>
   */
  class LambdaStepMetadata
  {
  public:
    AWS_SAGEMAKER_API LambdaStepMetadata() = default;
    AWS_SAGEMAKER_API LambdaStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LambdaStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    LambdaStepMetadata& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the output parameters of the Lambda step.</p>
     */
    inline const Aws::Vector<OutputParameter>& GetOutputParameters() const { return m_outputParameters; }
    inline bool OutputParametersHasBeenSet() const { return m_outputParametersHasBeenSet; }
    template<typename OutputParametersT = Aws::Vector<OutputParameter>>
    void SetOutputParameters(OutputParametersT&& value) { m_outputParametersHasBeenSet = true; m_outputParameters = std::forward<OutputParametersT>(value); }
    template<typename OutputParametersT = Aws::Vector<OutputParameter>>
    LambdaStepMetadata& WithOutputParameters(OutputParametersT&& value) { SetOutputParameters(std::forward<OutputParametersT>(value)); return *this;}
    template<typename OutputParametersT = OutputParameter>
    LambdaStepMetadata& AddOutputParameters(OutputParametersT&& value) { m_outputParametersHasBeenSet = true; m_outputParameters.emplace_back(std::forward<OutputParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<OutputParameter> m_outputParameters;
    bool m_outputParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
