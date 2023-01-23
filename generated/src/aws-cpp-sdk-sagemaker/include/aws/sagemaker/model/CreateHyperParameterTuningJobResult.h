/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class CreateHyperParameterTuningJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateHyperParameterTuningJobResult();
    AWS_SAGEMAKER_API CreateHyperParameterTuningJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateHyperParameterTuningJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. SageMaker assigns an ARN to
     * a hyperparameter tuning job when you create it.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobArn() const{ return m_hyperParameterTuningJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. SageMaker assigns an ARN to
     * a hyperparameter tuning job when you create it.</p>
     */
    inline void SetHyperParameterTuningJobArn(const Aws::String& value) { m_hyperParameterTuningJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. SageMaker assigns an ARN to
     * a hyperparameter tuning job when you create it.</p>
     */
    inline void SetHyperParameterTuningJobArn(Aws::String&& value) { m_hyperParameterTuningJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. SageMaker assigns an ARN to
     * a hyperparameter tuning job when you create it.</p>
     */
    inline void SetHyperParameterTuningJobArn(const char* value) { m_hyperParameterTuningJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. SageMaker assigns an ARN to
     * a hyperparameter tuning job when you create it.</p>
     */
    inline CreateHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(const Aws::String& value) { SetHyperParameterTuningJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. SageMaker assigns an ARN to
     * a hyperparameter tuning job when you create it.</p>
     */
    inline CreateHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(Aws::String&& value) { SetHyperParameterTuningJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. SageMaker assigns an ARN to
     * a hyperparameter tuning job when you create it.</p>
     */
    inline CreateHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(const char* value) { SetHyperParameterTuningJobArn(value); return *this;}

  private:

    Aws::String m_hyperParameterTuningJobArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
