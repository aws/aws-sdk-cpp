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
  class UpdateComputeQuotaResult
  {
  public:
    AWS_SAGEMAKER_API UpdateComputeQuotaResult();
    AWS_SAGEMAKER_API UpdateComputeQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateComputeQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaArn() const{ return m_computeQuotaArn; }
    inline void SetComputeQuotaArn(const Aws::String& value) { m_computeQuotaArn = value; }
    inline void SetComputeQuotaArn(Aws::String&& value) { m_computeQuotaArn = std::move(value); }
    inline void SetComputeQuotaArn(const char* value) { m_computeQuotaArn.assign(value); }
    inline UpdateComputeQuotaResult& WithComputeQuotaArn(const Aws::String& value) { SetComputeQuotaArn(value); return *this;}
    inline UpdateComputeQuotaResult& WithComputeQuotaArn(Aws::String&& value) { SetComputeQuotaArn(std::move(value)); return *this;}
    inline UpdateComputeQuotaResult& WithComputeQuotaArn(const char* value) { SetComputeQuotaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the compute allocation definition.</p>
     */
    inline int GetComputeQuotaVersion() const{ return m_computeQuotaVersion; }
    inline void SetComputeQuotaVersion(int value) { m_computeQuotaVersion = value; }
    inline UpdateComputeQuotaResult& WithComputeQuotaVersion(int value) { SetComputeQuotaVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateComputeQuotaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateComputeQuotaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateComputeQuotaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_computeQuotaArn;

    int m_computeQuotaVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
