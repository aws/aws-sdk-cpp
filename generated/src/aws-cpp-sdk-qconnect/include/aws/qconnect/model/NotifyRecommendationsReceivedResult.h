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
    AWS_QCONNECT_API NotifyRecommendationsReceivedResult();
    AWS_QCONNECT_API NotifyRecommendationsReceivedResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API NotifyRecommendationsReceivedResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline const Aws::Vector<NotifyRecommendationsReceivedError>& GetErrors() const{ return m_errors; }

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline void SetErrors(const Aws::Vector<NotifyRecommendationsReceivedError>& value) { m_errors = value; }

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline void SetErrors(Aws::Vector<NotifyRecommendationsReceivedError>&& value) { m_errors = std::move(value); }

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline NotifyRecommendationsReceivedResult& WithErrors(const Aws::Vector<NotifyRecommendationsReceivedError>& value) { SetErrors(value); return *this;}

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline NotifyRecommendationsReceivedResult& WithErrors(Aws::Vector<NotifyRecommendationsReceivedError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline NotifyRecommendationsReceivedResult& AddErrors(const NotifyRecommendationsReceivedError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>The identifiers of recommendations that are causing errors.</p>
     */
    inline NotifyRecommendationsReceivedResult& AddErrors(NotifyRecommendationsReceivedError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const{ return m_recommendationIds; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline void SetRecommendationIds(const Aws::Vector<Aws::String>& value) { m_recommendationIds = value; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline void SetRecommendationIds(Aws::Vector<Aws::String>&& value) { m_recommendationIds = std::move(value); }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline NotifyRecommendationsReceivedResult& WithRecommendationIds(const Aws::Vector<Aws::String>& value) { SetRecommendationIds(value); return *this;}

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline NotifyRecommendationsReceivedResult& WithRecommendationIds(Aws::Vector<Aws::String>&& value) { SetRecommendationIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline NotifyRecommendationsReceivedResult& AddRecommendationIds(const Aws::String& value) { m_recommendationIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline NotifyRecommendationsReceivedResult& AddRecommendationIds(Aws::String&& value) { m_recommendationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline NotifyRecommendationsReceivedResult& AddRecommendationIds(const char* value) { m_recommendationIds.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline NotifyRecommendationsReceivedResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline NotifyRecommendationsReceivedResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline NotifyRecommendationsReceivedResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<NotifyRecommendationsReceivedError> m_errors;

    Aws::Vector<Aws::String> m_recommendationIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
