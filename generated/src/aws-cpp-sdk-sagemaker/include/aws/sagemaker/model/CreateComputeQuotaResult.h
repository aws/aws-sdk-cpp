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
    AWS_SAGEMAKER_API CreateComputeQuotaResult() = default;
    AWS_SAGEMAKER_API CreateComputeQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateComputeQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaArn() const { return m_computeQuotaArn; }
    template<typename ComputeQuotaArnT = Aws::String>
    void SetComputeQuotaArn(ComputeQuotaArnT&& value) { m_computeQuotaArnHasBeenSet = true; m_computeQuotaArn = std::forward<ComputeQuotaArnT>(value); }
    template<typename ComputeQuotaArnT = Aws::String>
    CreateComputeQuotaResult& WithComputeQuotaArn(ComputeQuotaArnT&& value) { SetComputeQuotaArn(std::forward<ComputeQuotaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaId() const { return m_computeQuotaId; }
    template<typename ComputeQuotaIdT = Aws::String>
    void SetComputeQuotaId(ComputeQuotaIdT&& value) { m_computeQuotaIdHasBeenSet = true; m_computeQuotaId = std::forward<ComputeQuotaIdT>(value); }
    template<typename ComputeQuotaIdT = Aws::String>
    CreateComputeQuotaResult& WithComputeQuotaId(ComputeQuotaIdT&& value) { SetComputeQuotaId(std::forward<ComputeQuotaIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateComputeQuotaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computeQuotaArn;
    bool m_computeQuotaArnHasBeenSet = false;

    Aws::String m_computeQuotaId;
    bool m_computeQuotaIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
