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
  class CreateComputeQuotaResult
  {
  public:
    AWS_SAGEMAKER_API CreateComputeQuotaResult();
    AWS_SAGEMAKER_API CreateComputeQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateComputeQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaArn() const{ return m_computeQuotaArn; }
    inline void SetComputeQuotaArn(const Aws::String& value) { m_computeQuotaArn = value; }
    inline void SetComputeQuotaArn(Aws::String&& value) { m_computeQuotaArn = std::move(value); }
    inline void SetComputeQuotaArn(const char* value) { m_computeQuotaArn.assign(value); }
    inline CreateComputeQuotaResult& WithComputeQuotaArn(const Aws::String& value) { SetComputeQuotaArn(value); return *this;}
    inline CreateComputeQuotaResult& WithComputeQuotaArn(Aws::String&& value) { SetComputeQuotaArn(std::move(value)); return *this;}
    inline CreateComputeQuotaResult& WithComputeQuotaArn(const char* value) { SetComputeQuotaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaId() const{ return m_computeQuotaId; }
    inline void SetComputeQuotaId(const Aws::String& value) { m_computeQuotaId = value; }
    inline void SetComputeQuotaId(Aws::String&& value) { m_computeQuotaId = std::move(value); }
    inline void SetComputeQuotaId(const char* value) { m_computeQuotaId.assign(value); }
    inline CreateComputeQuotaResult& WithComputeQuotaId(const Aws::String& value) { SetComputeQuotaId(value); return *this;}
    inline CreateComputeQuotaResult& WithComputeQuotaId(Aws::String&& value) { SetComputeQuotaId(std::move(value)); return *this;}
    inline CreateComputeQuotaResult& WithComputeQuotaId(const char* value) { SetComputeQuotaId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateComputeQuotaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateComputeQuotaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateComputeQuotaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_computeQuotaArn;

    Aws::String m_computeQuotaId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
