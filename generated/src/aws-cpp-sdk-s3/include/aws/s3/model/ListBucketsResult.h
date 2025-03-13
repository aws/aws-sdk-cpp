/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/Owner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/Bucket.h>
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
  class ListBucketsResult
  {
  public:
    AWS_S3_API ListBucketsResult() = default;
    AWS_S3_API ListBucketsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API ListBucketsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of buckets owned by the requester.</p>
     */
    inline const Aws::Vector<Bucket>& GetBuckets() const { return m_buckets; }
    template<typename BucketsT = Aws::Vector<Bucket>>
    void SetBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets = std::forward<BucketsT>(value); }
    template<typename BucketsT = Aws::Vector<Bucket>>
    ListBucketsResult& WithBuckets(BucketsT&& value) { SetBuckets(std::forward<BucketsT>(value)); return *this;}
    template<typename BucketsT = Bucket>
    ListBucketsResult& AddBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets.emplace_back(std::forward<BucketsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The owner of the buckets listed.</p>
     */
    inline const Owner& GetOwner() const { return m_owner; }
    template<typename OwnerT = Owner>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Owner>
    ListBucketsResult& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>ContinuationToken</code> is included in the response when there are
     * more buckets that can be listed with pagination. The next
     * <code>ListBuckets</code> request to Amazon S3 can be continued with this
     * <code>ContinuationToken</code>. <code>ContinuationToken</code> is obfuscated and
     * is not a real bucket.</p>
     */
    inline const Aws::String& GetContinuationToken() const { return m_continuationToken; }
    template<typename ContinuationTokenT = Aws::String>
    void SetContinuationToken(ContinuationTokenT&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::forward<ContinuationTokenT>(value); }
    template<typename ContinuationTokenT = Aws::String>
    ListBucketsResult& WithContinuationToken(ContinuationTokenT&& value) { SetContinuationToken(std::forward<ContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>Prefix</code> was sent with the request, it is included in the
     * response.</p> <p>All bucket names in the response begin with the specified
     * bucket name prefix.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    ListBucketsResult& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBucketsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Bucket> m_buckets;
    bool m_bucketsHasBeenSet = false;

    Owner m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
