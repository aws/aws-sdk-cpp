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
  class UpdateInferenceExperimentResult
  {
  public:
    AWS_SAGEMAKER_API UpdateInferenceExperimentResult();
    AWS_SAGEMAKER_API UpdateInferenceExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateInferenceExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the updated inference experiment.</p>
     */
    inline const Aws::String& GetInferenceExperimentArn() const{ return m_inferenceExperimentArn; }

    /**
     * <p>The ARN of the updated inference experiment.</p>
     */
    inline void SetInferenceExperimentArn(const Aws::String& value) { m_inferenceExperimentArn = value; }

    /**
     * <p>The ARN of the updated inference experiment.</p>
     */
    inline void SetInferenceExperimentArn(Aws::String&& value) { m_inferenceExperimentArn = std::move(value); }

    /**
     * <p>The ARN of the updated inference experiment.</p>
     */
    inline void SetInferenceExperimentArn(const char* value) { m_inferenceExperimentArn.assign(value); }

    /**
     * <p>The ARN of the updated inference experiment.</p>
     */
    inline UpdateInferenceExperimentResult& WithInferenceExperimentArn(const Aws::String& value) { SetInferenceExperimentArn(value); return *this;}

    /**
     * <p>The ARN of the updated inference experiment.</p>
     */
    inline UpdateInferenceExperimentResult& WithInferenceExperimentArn(Aws::String&& value) { SetInferenceExperimentArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the updated inference experiment.</p>
     */
    inline UpdateInferenceExperimentResult& WithInferenceExperimentArn(const char* value) { SetInferenceExperimentArn(value); return *this;}

  private:

    Aws::String m_inferenceExperimentArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
