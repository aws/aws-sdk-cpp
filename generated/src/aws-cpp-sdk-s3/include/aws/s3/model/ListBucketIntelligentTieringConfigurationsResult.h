/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/IntelligentTieringConfiguration.h>
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
  class ListBucketIntelligentTieringConfigurationsResult
  {
  public:
    AWS_S3_API ListBucketIntelligentTieringConfigurationsResult() = default;
    AWS_S3_API ListBucketIntelligentTieringConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API ListBucketIntelligentTieringConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Indicates whether the returned list of analytics configurations is complete.
     * A value of <code>true</code> indicates that the list is not complete and the
     * <code>NextContinuationToken</code> will be provided for a subsequent
     * request.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListBucketIntelligentTieringConfigurationsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ContinuationToken</code> that represents a placeholder from where
     * this request should begin.</p>
     */
    inline const Aws::String& GetContinuationToken() const { return m_continuationToken; }
    template<typename ContinuationTokenT = Aws::String>
    void SetContinuationToken(ContinuationTokenT&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::forward<ContinuationTokenT>(value); }
    template<typename ContinuationTokenT = Aws::String>
    ListBucketIntelligentTieringConfigurationsResult& WithContinuationToken(ContinuationTokenT&& value) { SetContinuationToken(std::forward<ContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker used to continue this inventory configuration listing. Use the
     * <code>NextContinuationToken</code> from this response to continue the listing in
     * a subsequent request. The continuation token is an opaque value that Amazon S3
     * understands.</p>
     */
    inline const Aws::String& GetNextContinuationToken() const { return m_nextContinuationToken; }
    template<typename NextContinuationTokenT = Aws::String>
    void SetNextContinuationToken(NextContinuationTokenT&& value) { m_nextContinuationTokenHasBeenSet = true; m_nextContinuationToken = std::forward<NextContinuationTokenT>(value); }
    template<typename NextContinuationTokenT = Aws::String>
    ListBucketIntelligentTieringConfigurationsResult& WithNextContinuationToken(NextContinuationTokenT&& value) { SetNextContinuationToken(std::forward<NextContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of S3 Intelligent-Tiering configurations for a bucket.</p>
     */
    inline const Aws::Vector<IntelligentTieringConfiguration>& GetIntelligentTieringConfigurationList() const { return m_intelligentTieringConfigurationList; }
    template<typename IntelligentTieringConfigurationListT = Aws::Vector<IntelligentTieringConfiguration>>
    void SetIntelligentTieringConfigurationList(IntelligentTieringConfigurationListT&& value) { m_intelligentTieringConfigurationListHasBeenSet = true; m_intelligentTieringConfigurationList = std::forward<IntelligentTieringConfigurationListT>(value); }
    template<typename IntelligentTieringConfigurationListT = Aws::Vector<IntelligentTieringConfiguration>>
    ListBucketIntelligentTieringConfigurationsResult& WithIntelligentTieringConfigurationList(IntelligentTieringConfigurationListT&& value) { SetIntelligentTieringConfigurationList(std::forward<IntelligentTieringConfigurationListT>(value)); return *this;}
    template<typename IntelligentTieringConfigurationListT = IntelligentTieringConfiguration>
    ListBucketIntelligentTieringConfigurationsResult& AddIntelligentTieringConfigurationList(IntelligentTieringConfigurationListT&& value) { m_intelligentTieringConfigurationListHasBeenSet = true; m_intelligentTieringConfigurationList.emplace_back(std::forward<IntelligentTieringConfigurationListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBucketIntelligentTieringConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;

    Aws::String m_nextContinuationToken;
    bool m_nextContinuationTokenHasBeenSet = false;

    Aws::Vector<IntelligentTieringConfiguration> m_intelligentTieringConfigurationList;
    bool m_intelligentTieringConfigurationListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
