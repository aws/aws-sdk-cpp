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
  class CreateInferenceRecommendationsJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateInferenceRecommendationsJobResult();
    AWS_SAGEMAKER_API CreateInferenceRecommendationsJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateInferenceRecommendationsJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline CreateInferenceRecommendationsJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline CreateInferenceRecommendationsJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline CreateInferenceRecommendationsJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}

  private:

    Aws::String m_jobArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
