/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/RegionalBucket.h>
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
namespace S3Control
{
namespace Model
{
  class ListRegionalBucketsResult
  {
  public:
    AWS_S3CONTROL_API ListRegionalBucketsResult() = default;
    AWS_S3CONTROL_API ListRegionalBucketsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListRegionalBucketsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<RegionalBucket>& GetRegionalBucketList() const { return m_regionalBucketList; }
    template<typename RegionalBucketListT = Aws::Vector<RegionalBucket>>
    void SetRegionalBucketList(RegionalBucketListT&& value) { m_regionalBucketListHasBeenSet = true; m_regionalBucketList = std::forward<RegionalBucketListT>(value); }
    template<typename RegionalBucketListT = Aws::Vector<RegionalBucket>>
    ListRegionalBucketsResult& WithRegionalBucketList(RegionalBucketListT&& value) { SetRegionalBucketList(std::forward<RegionalBucketListT>(value)); return *this;}
    template<typename RegionalBucketListT = RegionalBucket>
    ListRegionalBucketsResult& AddRegionalBucketList(RegionalBucketListT&& value) { m_regionalBucketListHasBeenSet = true; m_regionalBucketList.emplace_back(std::forward<RegionalBucketListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <code>NextToken</code> is sent when <code>isTruncated</code> is true, which
     * means there are more buckets that can be listed. The next list requests to
     * Amazon S3 can be continued with this <code>NextToken</code>.
     * <code>NextToken</code> is obfuscated and is not a real key.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRegionalBucketsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRegionalBucketsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    ListRegionalBucketsResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RegionalBucket> m_regionalBucketList;
    bool m_regionalBucketListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
