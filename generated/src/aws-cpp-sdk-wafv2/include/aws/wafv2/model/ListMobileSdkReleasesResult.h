/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/ReleaseSummary.h>
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
  class ListMobileSdkReleasesResult
  {
  public:
    AWS_WAFV2_API ListMobileSdkReleasesResult();
    AWS_WAFV2_API ListMobileSdkReleasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListMobileSdkReleasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>High level information for the available SDK releases. </p>
     */
    inline const Aws::Vector<ReleaseSummary>& GetReleaseSummaries() const{ return m_releaseSummaries; }

    /**
     * <p>High level information for the available SDK releases. </p>
     */
    inline void SetReleaseSummaries(const Aws::Vector<ReleaseSummary>& value) { m_releaseSummaries = value; }

    /**
     * <p>High level information for the available SDK releases. </p>
     */
    inline void SetReleaseSummaries(Aws::Vector<ReleaseSummary>&& value) { m_releaseSummaries = std::move(value); }

    /**
     * <p>High level information for the available SDK releases. </p>
     */
    inline ListMobileSdkReleasesResult& WithReleaseSummaries(const Aws::Vector<ReleaseSummary>& value) { SetReleaseSummaries(value); return *this;}

    /**
     * <p>High level information for the available SDK releases. </p>
     */
    inline ListMobileSdkReleasesResult& WithReleaseSummaries(Aws::Vector<ReleaseSummary>&& value) { SetReleaseSummaries(std::move(value)); return *this;}

    /**
     * <p>High level information for the available SDK releases. </p>
     */
    inline ListMobileSdkReleasesResult& AddReleaseSummaries(const ReleaseSummary& value) { m_releaseSummaries.push_back(value); return *this; }

    /**
     * <p>High level information for the available SDK releases. </p>
     */
    inline ListMobileSdkReleasesResult& AddReleaseSummaries(ReleaseSummary&& value) { m_releaseSummaries.push_back(std::move(value)); return *this; }


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
    inline ListMobileSdkReleasesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListMobileSdkReleasesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListMobileSdkReleasesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<ReleaseSummary> m_releaseSummaries;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
