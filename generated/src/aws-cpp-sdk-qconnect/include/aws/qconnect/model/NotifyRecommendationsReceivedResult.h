/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/NotifyRecommendationsReceivedError.h>
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
namespace QConnect
{
namespace Model
{
  class NotifyRecommendationsReceivedResult
  {
  public:
    AWS_QCONNECT_API NotifyRecommendationsReceivedResult() = default;
    AWS_QCONNECT_API NotifyRecommendationsReceivedResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API NotifyRecommendationsReceivedResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const { return m_recommendationIds; }
    template<typename RecommendationIdsT = Aws::Vector<Aws::String>>
    void SetRecommendationIds(RecommendationIdsT&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::forward<RecommendationIdsT>(value); }
    template<typename RecommendationIdsT = Aws::Vector<Aws::String>>
    NotifyRecommendationsReceivedResult& WithRecommendationIds(RecommendationIdsT&& value) { SetRecommendationIds(std::forward<RecommendationIdsT>(value)); return *this;}
    template<typename RecommendationIdsT = Aws::String>
    NotifyRecommendationsReceivedResult& AddRecommendationIds(RecommendationIdsT&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.emplace_back(std::forward<RecommendationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline const Aws::Vector<NotifyRecommendationsReceivedError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<NotifyRecommendationsReceivedError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<NotifyRecommendationsReceivedError>>
    NotifyRecommendationsReceivedResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = NotifyRecommendationsReceivedError>
    NotifyRecommendationsReceivedResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    NotifyRecommendationsReceivedResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet = false;

    Aws::Vector<NotifyRecommendationsReceivedError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
