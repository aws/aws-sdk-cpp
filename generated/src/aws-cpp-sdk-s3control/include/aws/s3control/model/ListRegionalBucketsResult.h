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
    AWS_S3CONTROL_API ListRegionalBucketsResult();
    AWS_S3CONTROL_API ListRegionalBucketsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListRegionalBucketsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p/>
     */
    inline const Aws::Vector<RegionalBucket>& GetRegionalBucketList() const{ return m_regionalBucketList; }

    /**
     * <p/>
     */
    inline void SetRegionalBucketList(const Aws::Vector<RegionalBucket>& value) { m_regionalBucketList = value; }

    /**
     * <p/>
     */
    inline void SetRegionalBucketList(Aws::Vector<RegionalBucket>&& value) { m_regionalBucketList = std::move(value); }

    /**
     * <p/>
     */
    inline ListRegionalBucketsResult& WithRegionalBucketList(const Aws::Vector<RegionalBucket>& value) { SetRegionalBucketList(value); return *this;}

    /**
     * <p/>
     */
    inline ListRegionalBucketsResult& WithRegionalBucketList(Aws::Vector<RegionalBucket>&& value) { SetRegionalBucketList(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListRegionalBucketsResult& AddRegionalBucketList(const RegionalBucket& value) { m_regionalBucketList.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline ListRegionalBucketsResult& AddRegionalBucketList(RegionalBucket&& value) { m_regionalBucketList.push_back(std::move(value)); return *this; }


    /**
     * <p> <code>NextToken</code> is sent when <code>isTruncated</code> is true, which
     * means there are more buckets that can be listed. The next list requests to
     * Amazon S3 can be continued with this <code>NextToken</code>.
     * <code>NextToken</code> is obfuscated and is not a real key.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> <code>NextToken</code> is sent when <code>isTruncated</code> is true, which
     * means there are more buckets that can be listed. The next list requests to
     * Amazon S3 can be continued with this <code>NextToken</code>.
     * <code>NextToken</code> is obfuscated and is not a real key.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> <code>NextToken</code> is sent when <code>isTruncated</code> is true, which
     * means there are more buckets that can be listed. The next list requests to
     * Amazon S3 can be continued with this <code>NextToken</code>.
     * <code>NextToken</code> is obfuscated and is not a real key.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> <code>NextToken</code> is sent when <code>isTruncated</code> is true, which
     * means there are more buckets that can be listed. The next list requests to
     * Amazon S3 can be continued with this <code>NextToken</code>.
     * <code>NextToken</code> is obfuscated and is not a real key.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> <code>NextToken</code> is sent when <code>isTruncated</code> is true, which
     * means there are more buckets that can be listed. The next list requests to
     * Amazon S3 can be continued with this <code>NextToken</code>.
     * <code>NextToken</code> is obfuscated and is not a real key.</p>
     */
    inline ListRegionalBucketsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> <code>NextToken</code> is sent when <code>isTruncated</code> is true, which
     * means there are more buckets that can be listed. The next list requests to
     * Amazon S3 can be continued with this <code>NextToken</code>.
     * <code>NextToken</code> is obfuscated and is not a real key.</p>
     */
    inline ListRegionalBucketsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> <code>NextToken</code> is sent when <code>isTruncated</code> is true, which
     * means there are more buckets that can be listed. The next list requests to
     * Amazon S3 can be continued with this <code>NextToken</code>.
     * <code>NextToken</code> is obfuscated and is not a real key.</p>
     */
    inline ListRegionalBucketsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RegionalBucket> m_regionalBucketList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
