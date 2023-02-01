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
  class CreateTrainingJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateTrainingJobResult();
    AWS_SAGEMAKER_API CreateTrainingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateTrainingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const{ return m_trainingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(const Aws::String& value) { m_trainingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(Aws::String&& value) { m_trainingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(const char* value) { m_trainingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline CreateTrainingJobResult& WithTrainingJobArn(const Aws::String& value) { SetTrainingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline CreateTrainingJobResult& WithTrainingJobArn(Aws::String&& value) { SetTrainingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline CreateTrainingJobResult& WithTrainingJobArn(const char* value) { SetTrainingJobArn(value); return *this;}

  private:

    Aws::String m_trainingJobArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
