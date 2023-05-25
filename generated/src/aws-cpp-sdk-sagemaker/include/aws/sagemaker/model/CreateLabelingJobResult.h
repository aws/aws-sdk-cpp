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
  class CreateLabelingJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateLabelingJobResult();
    AWS_SAGEMAKER_API CreateLabelingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateLabelingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline CreateLabelingJobResult& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline CreateLabelingJobResult& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline CreateLabelingJobResult& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateLabelingJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateLabelingJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateLabelingJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_labelingJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
