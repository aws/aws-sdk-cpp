/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/MetricsConfiguration.h>
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
  class ListBucketMetricsConfigurationsResult
  {
  public:
    AWS_S3_API ListBucketMetricsConfigurationsResult() = default;
    AWS_S3_API ListBucketMetricsConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API ListBucketMetricsConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Indicates whether the returned list of metrics configurations is complete. A
     * value of true indicates that the list is not complete and the
     * NextContinuationToken will be provided for a subsequent request.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListBucketMetricsConfigurationsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker that is used as a starting point for this metrics configuration
     * list response. This value is present if it was sent in the request.</p>
     */
    inline const Aws::String& GetContinuationToken() const { return m_continuationToken; }
    template<typename ContinuationTokenT = Aws::String>
    void SetContinuationToken(ContinuationTokenT&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::forward<ContinuationTokenT>(value); }
    template<typename ContinuationTokenT = Aws::String>
    ListBucketMetricsConfigurationsResult& WithContinuationToken(ContinuationTokenT&& value) { SetContinuationToken(std::forward<ContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker used to continue a metrics configuration listing that has been
     * truncated. Use the <code>NextContinuationToken</code> from a previously
     * truncated list response to continue the listing. The continuation token is an
     * opaque value that Amazon S3 understands.</p>
     */
    inline const Aws::String& GetNextContinuationToken() const { return m_nextContinuationToken; }
    template<typename NextContinuationTokenT = Aws::String>
    void SetNextContinuationToken(NextContinuationTokenT&& value) { m_nextContinuationTokenHasBeenSet = true; m_nextContinuationToken = std::forward<NextContinuationTokenT>(value); }
    template<typename NextContinuationTokenT = Aws::String>
    ListBucketMetricsConfigurationsResult& WithNextContinuationToken(NextContinuationTokenT&& value) { SetNextContinuationToken(std::forward<NextContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of metrics configurations for a bucket.</p>
     */
    inline const Aws::Vector<MetricsConfiguration>& GetMetricsConfigurationList() const { return m_metricsConfigurationList; }
    template<typename MetricsConfigurationListT = Aws::Vector<MetricsConfiguration>>
    void SetMetricsConfigurationList(MetricsConfigurationListT&& value) { m_metricsConfigurationListHasBeenSet = true; m_metricsConfigurationList = std::forward<MetricsConfigurationListT>(value); }
    template<typename MetricsConfigurationListT = Aws::Vector<MetricsConfiguration>>
    ListBucketMetricsConfigurationsResult& WithMetricsConfigurationList(MetricsConfigurationListT&& value) { SetMetricsConfigurationList(std::forward<MetricsConfigurationListT>(value)); return *this;}
    template<typename MetricsConfigurationListT = MetricsConfiguration>
    ListBucketMetricsConfigurationsResult& AddMetricsConfigurationList(MetricsConfigurationListT&& value) { m_metricsConfigurationListHasBeenSet = true; m_metricsConfigurationList.emplace_back(std::forward<MetricsConfigurationListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBucketMetricsConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;

    Aws::String m_nextContinuationToken;
    bool m_nextContinuationTokenHasBeenSet = false;

    Aws::Vector<MetricsConfiguration> m_metricsConfigurationList;
    bool m_metricsConfigurationListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
