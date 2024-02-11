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
  class CreateInferenceComponentResult
  {
  public:
    AWS_SAGEMAKER_API CreateInferenceComponentResult();
    AWS_SAGEMAKER_API CreateInferenceComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateInferenceComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline const Aws::String& GetInferenceComponentArn() const{ return m_inferenceComponentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline void SetInferenceComponentArn(const Aws::String& value) { m_inferenceComponentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline void SetInferenceComponentArn(Aws::String&& value) { m_inferenceComponentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline void SetInferenceComponentArn(const char* value) { m_inferenceComponentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline CreateInferenceComponentResult& WithInferenceComponentArn(const Aws::String& value) { SetInferenceComponentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline CreateInferenceComponentResult& WithInferenceComponentArn(Aws::String&& value) { SetInferenceComponentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline CreateInferenceComponentResult& WithInferenceComponentArn(const char* value) { SetInferenceComponentArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateInferenceComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateInferenceComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateInferenceComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_inferenceComponentArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
