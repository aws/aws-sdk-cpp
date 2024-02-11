/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/APIKeySummary.h>
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
namespace WAFV2
{
namespace Model
{
  class ListAPIKeysResult
  {
  public:
    AWS_WAFV2_API ListAPIKeysResult();
    AWS_WAFV2_API ListAPIKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListAPIKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListAPIKeysResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListAPIKeysResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListAPIKeysResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The array of key summaries. If you specified a <code>Limit</code> in your
     * request, this might not be the full list. </p>
     */
    inline const Aws::Vector<APIKeySummary>& GetAPIKeySummaries() const{ return m_aPIKeySummaries; }

    /**
     * <p>The array of key summaries. If you specified a <code>Limit</code> in your
     * request, this might not be the full list. </p>
     */
    inline void SetAPIKeySummaries(const Aws::Vector<APIKeySummary>& value) { m_aPIKeySummaries = value; }

    /**
     * <p>The array of key summaries. If you specified a <code>Limit</code> in your
     * request, this might not be the full list. </p>
     */
    inline void SetAPIKeySummaries(Aws::Vector<APIKeySummary>&& value) { m_aPIKeySummaries = std::move(value); }

    /**
     * <p>The array of key summaries. If you specified a <code>Limit</code> in your
     * request, this might not be the full list. </p>
     */
    inline ListAPIKeysResult& WithAPIKeySummaries(const Aws::Vector<APIKeySummary>& value) { SetAPIKeySummaries(value); return *this;}

    /**
     * <p>The array of key summaries. If you specified a <code>Limit</code> in your
     * request, this might not be the full list. </p>
     */
    inline ListAPIKeysResult& WithAPIKeySummaries(Aws::Vector<APIKeySummary>&& value) { SetAPIKeySummaries(std::move(value)); return *this;}

    /**
     * <p>The array of key summaries. If you specified a <code>Limit</code> in your
     * request, this might not be the full list. </p>
     */
    inline ListAPIKeysResult& AddAPIKeySummaries(const APIKeySummary& value) { m_aPIKeySummaries.push_back(value); return *this; }

    /**
     * <p>The array of key summaries. If you specified a <code>Limit</code> in your
     * request, this might not be the full list. </p>
     */
    inline ListAPIKeysResult& AddAPIKeySummaries(APIKeySummary&& value) { m_aPIKeySummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The CAPTCHA application integration URL, for use in your JavaScript
     * implementation. </p>
     */
    inline const Aws::String& GetApplicationIntegrationURL() const{ return m_applicationIntegrationURL; }

    /**
     * <p>The CAPTCHA application integration URL, for use in your JavaScript
     * implementation. </p>
     */
    inline void SetApplicationIntegrationURL(const Aws::String& value) { m_applicationIntegrationURL = value; }

    /**
     * <p>The CAPTCHA application integration URL, for use in your JavaScript
     * implementation. </p>
     */
    inline void SetApplicationIntegrationURL(Aws::String&& value) { m_applicationIntegrationURL = std::move(value); }

    /**
     * <p>The CAPTCHA application integration URL, for use in your JavaScript
     * implementation. </p>
     */
    inline void SetApplicationIntegrationURL(const char* value) { m_applicationIntegrationURL.assign(value); }

    /**
     * <p>The CAPTCHA application integration URL, for use in your JavaScript
     * implementation. </p>
     */
    inline ListAPIKeysResult& WithApplicationIntegrationURL(const Aws::String& value) { SetApplicationIntegrationURL(value); return *this;}

    /**
     * <p>The CAPTCHA application integration URL, for use in your JavaScript
     * implementation. </p>
     */
    inline ListAPIKeysResult& WithApplicationIntegrationURL(Aws::String&& value) { SetApplicationIntegrationURL(std::move(value)); return *this;}

    /**
     * <p>The CAPTCHA application integration URL, for use in your JavaScript
     * implementation. </p>
     */
    inline ListAPIKeysResult& WithApplicationIntegrationURL(const char* value) { SetApplicationIntegrationURL(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAPIKeysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAPIKeysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAPIKeysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextMarker;

    Aws::Vector<APIKeySummary> m_aPIKeySummaries;

    Aws::String m_applicationIntegrationURL;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
