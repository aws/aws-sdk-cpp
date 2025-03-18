/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/AnalyticsConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class ListBucketAnalyticsConfigurationsResult
  {
  public:
    AWS_S3_API ListBucketAnalyticsConfigurationsResult() = default;
    AWS_S3_API ListBucketAnalyticsConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API ListBucketAnalyticsConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Indicates whether the returned list of analytics configurations is complete.
     * A value of true indicates that the list is not complete and the
     * NextContinuationToken will be provided for a subsequent request.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListBucketAnalyticsConfigurationsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker that is used as a starting point for this analytics configuration
     * list response. This value is present if it was sent in the request.</p>
     */
    inline const Aws::String& GetContinuationToken() const { return m_continuationToken; }
    template<typename ContinuationTokenT = Aws::String>
    void SetContinuationToken(ContinuationTokenT&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::forward<ContinuationTokenT>(value); }
    template<typename ContinuationTokenT = Aws::String>
    ListBucketAnalyticsConfigurationsResult& WithContinuationToken(ContinuationTokenT&& value) { SetContinuationToken(std::forward<ContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>NextContinuationToken</code> is sent when <code>isTruncated</code> is
     * true, which indicates that there are more analytics configurations to list. The
     * next request must include this <code>NextContinuationToken</code>. The token is
     * obfuscated and is not a usable value.</p>
     */
    inline const Aws::String& GetNextContinuationToken() const { return m_nextContinuationToken; }
    template<typename NextContinuationTokenT = Aws::String>
    void SetNextContinuationToken(NextContinuationTokenT&& value) { m_nextContinuationTokenHasBeenSet = true; m_nextContinuationToken = std::forward<NextContinuationTokenT>(value); }
    template<typename NextContinuationTokenT = Aws::String>
    ListBucketAnalyticsConfigurationsResult& WithNextContinuationToken(NextContinuationTokenT&& value) { SetNextContinuationToken(std::forward<NextContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of analytics configurations for a bucket.</p>
     */
    inline const Aws::Vector<AnalyticsConfiguration>& GetAnalyticsConfigurationList() const { return m_analyticsConfigurationList; }
    template<typename AnalyticsConfigurationListT = Aws::Vector<AnalyticsConfiguration>>
    void SetAnalyticsConfigurationList(AnalyticsConfigurationListT&& value) { m_analyticsConfigurationListHasBeenSet = true; m_analyticsConfigurationList = std::forward<AnalyticsConfigurationListT>(value); }
    template<typename AnalyticsConfigurationListT = Aws::Vector<AnalyticsConfiguration>>
    ListBucketAnalyticsConfigurationsResult& WithAnalyticsConfigurationList(AnalyticsConfigurationListT&& value) { SetAnalyticsConfigurationList(std::forward<AnalyticsConfigurationListT>(value)); return *this;}
    template<typename AnalyticsConfigurationListT = AnalyticsConfiguration>
    ListBucketAnalyticsConfigurationsResult& AddAnalyticsConfigurationList(AnalyticsConfigurationListT&& value) { m_analyticsConfigurationListHasBeenSet = true; m_analyticsConfigurationList.emplace_back(std::forward<AnalyticsConfigurationListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBucketAnalyticsConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;

    Aws::String m_nextContinuationToken;
    bool m_nextContinuationTokenHasBeenSet = false;

    Aws::Vector<AnalyticsConfiguration> m_analyticsConfigurationList;
    bool m_analyticsConfigurationListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
