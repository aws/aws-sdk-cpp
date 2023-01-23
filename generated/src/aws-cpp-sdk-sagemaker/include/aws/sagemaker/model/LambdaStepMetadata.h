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
    AWS_SAGEMAKER_API LambdaStepMetadata();
    AWS_SAGEMAKER_API LambdaStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LambdaStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution.</p>
     */
    inline LambdaStepMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution.</p>
     */
    inline LambdaStepMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that was run by this
     * step execution.</p>
     */
    inline LambdaStepMetadata& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A list of the output parameters of the Lambda step.</p>
     */
    inline const Aws::Vector<OutputParameter>& GetOutputParameters() const{ return m_outputParameters; }

    /**
     * <p>A list of the output parameters of the Lambda step.</p>
     */
    inline bool OutputParametersHasBeenSet() const { return m_outputParametersHasBeenSet; }

    /**
     * <p>A list of the output parameters of the Lambda step.</p>
     */
    inline void SetOutputParameters(const Aws::Vector<OutputParameter>& value) { m_outputParametersHasBeenSet = true; m_outputParameters = value; }

    /**
     * <p>A list of the output parameters of the Lambda step.</p>
     */
    inline void SetOutputParameters(Aws::Vector<OutputParameter>&& value) { m_outputParametersHasBeenSet = true; m_outputParameters = std::move(value); }

    /**
     * <p>A list of the output parameters of the Lambda step.</p>
     */
    inline LambdaStepMetadata& WithOutputParameters(const Aws::Vector<OutputParameter>& value) { SetOutputParameters(value); return *this;}

    /**
     * <p>A list of the output parameters of the Lambda step.</p>
     */
    inline LambdaStepMetadata& WithOutputParameters(Aws::Vector<OutputParameter>&& value) { SetOutputParameters(std::move(value)); return *this;}

    /**
     * <p>A list of the output parameters of the Lambda step.</p>
     */
    inline LambdaStepMetadata& AddOutputParameters(const OutputParameter& value) { m_outputParametersHasBeenSet = true; m_outputParameters.push_back(value); return *this; }

    /**
     * <p>A list of the output parameters of the Lambda step.</p>
     */
    inline LambdaStepMetadata& AddOutputParameters(OutputParameter&& value) { m_outputParametersHasBeenSet = true; m_outputParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<OutputParameter> m_outputParameters;
    bool m_outputParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
