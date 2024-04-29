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
    AWS_TRUSTEDADVISOR_API BatchUpdateRecommendationResourceExclusionResult();
    AWS_TRUSTEDADVISOR_API BatchUpdateRecommendationResourceExclusionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API BatchUpdateRecommendationResourceExclusionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of recommendation resource ARNs whose exclusion status failed to
     * update, if any</p>
     */
    inline const Aws::Vector<UpdateRecommendationResourceExclusionError>& GetBatchUpdateRecommendationResourceExclusionErrors() const{ return m_batchUpdateRecommendationResourceExclusionErrors; }

    /**
     * <p>A list of recommendation resource ARNs whose exclusion status failed to
     * update, if any</p>
     */
    inline void SetBatchUpdateRecommendationResourceExclusionErrors(const Aws::Vector<UpdateRecommendationResourceExclusionError>& value) { m_batchUpdateRecommendationResourceExclusionErrors = value; }

    /**
     * <p>A list of recommendation resource ARNs whose exclusion status failed to
     * update, if any</p>
     */
    inline void SetBatchUpdateRecommendationResourceExclusionErrors(Aws::Vector<UpdateRecommendationResourceExclusionError>&& value) { m_batchUpdateRecommendationResourceExclusionErrors = std::move(value); }

    /**
     * <p>A list of recommendation resource ARNs whose exclusion status failed to
     * update, if any</p>
     */
    inline BatchUpdateRecommendationResourceExclusionResult& WithBatchUpdateRecommendationResourceExclusionErrors(const Aws::Vector<UpdateRecommendationResourceExclusionError>& value) { SetBatchUpdateRecommendationResourceExclusionErrors(value); return *this;}

    /**
     * <p>A list of recommendation resource ARNs whose exclusion status failed to
     * update, if any</p>
     */
    inline BatchUpdateRecommendationResourceExclusionResult& WithBatchUpdateRecommendationResourceExclusionErrors(Aws::Vector<UpdateRecommendationResourceExclusionError>&& value) { SetBatchUpdateRecommendationResourceExclusionErrors(std::move(value)); return *this;}

    /**
     * <p>A list of recommendation resource ARNs whose exclusion status failed to
     * update, if any</p>
     */
    inline BatchUpdateRecommendationResourceExclusionResult& AddBatchUpdateRecommendationResourceExclusionErrors(const UpdateRecommendationResourceExclusionError& value) { m_batchUpdateRecommendationResourceExclusionErrors.push_back(value); return *this; }

    /**
     * <p>A list of recommendation resource ARNs whose exclusion status failed to
     * update, if any</p>
     */
    inline BatchUpdateRecommendationResourceExclusionResult& AddBatchUpdateRecommendationResourceExclusionErrors(UpdateRecommendationResourceExclusionError&& value) { m_batchUpdateRecommendationResourceExclusionErrors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchUpdateRecommendationResourceExclusionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchUpdateRecommendationResourceExclusionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchUpdateRecommendationResourceExclusionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UpdateRecommendationResourceExclusionError> m_batchUpdateRecommendationResourceExclusionErrors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
