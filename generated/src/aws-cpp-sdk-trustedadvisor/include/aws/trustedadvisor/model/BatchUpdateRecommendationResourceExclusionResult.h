/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/model/UpdateRecommendationResourceExclusionError.h>
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
namespace TrustedAdvisor
{
namespace Model
{
  class BatchUpdateRecommendationResourceExclusionResult
  {
  public:
    AWS_TRUSTEDADVISOR_API BatchUpdateRecommendationResourceExclusionResult() = default;
    AWS_TRUSTEDADVISOR_API BatchUpdateRecommendationResourceExclusionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API BatchUpdateRecommendationResourceExclusionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of recommendation resource ARNs whose exclusion status failed to
     * update, if any</p>
     */
    inline const Aws::Vector<UpdateRecommendationResourceExclusionError>& GetBatchUpdateRecommendationResourceExclusionErrors() const { return m_batchUpdateRecommendationResourceExclusionErrors; }
    template<typename BatchUpdateRecommendationResourceExclusionErrorsT = Aws::Vector<UpdateRecommendationResourceExclusionError>>
    void SetBatchUpdateRecommendationResourceExclusionErrors(BatchUpdateRecommendationResourceExclusionErrorsT&& value) { m_batchUpdateRecommendationResourceExclusionErrorsHasBeenSet = true; m_batchUpdateRecommendationResourceExclusionErrors = std::forward<BatchUpdateRecommendationResourceExclusionErrorsT>(value); }
    template<typename BatchUpdateRecommendationResourceExclusionErrorsT = Aws::Vector<UpdateRecommendationResourceExclusionError>>
    BatchUpdateRecommendationResourceExclusionResult& WithBatchUpdateRecommendationResourceExclusionErrors(BatchUpdateRecommendationResourceExclusionErrorsT&& value) { SetBatchUpdateRecommendationResourceExclusionErrors(std::forward<BatchUpdateRecommendationResourceExclusionErrorsT>(value)); return *this;}
    template<typename BatchUpdateRecommendationResourceExclusionErrorsT = UpdateRecommendationResourceExclusionError>
    BatchUpdateRecommendationResourceExclusionResult& AddBatchUpdateRecommendationResourceExclusionErrors(BatchUpdateRecommendationResourceExclusionErrorsT&& value) { m_batchUpdateRecommendationResourceExclusionErrorsHasBeenSet = true; m_batchUpdateRecommendationResourceExclusionErrors.emplace_back(std::forward<BatchUpdateRecommendationResourceExclusionErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateRecommendationResourceExclusionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UpdateRecommendationResourceExclusionError> m_batchUpdateRecommendationResourceExclusionErrors;
    bool m_batchUpdateRecommendationResourceExclusionErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
