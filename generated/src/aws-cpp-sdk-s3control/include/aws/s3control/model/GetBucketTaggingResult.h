/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/S3Tag.h>
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
  class GetBucketTaggingResult
  {
  public:
    AWS_S3CONTROL_API GetBucketTaggingResult();
    AWS_S3CONTROL_API GetBucketTaggingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetBucketTaggingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The tags set of the Outposts bucket.</p>
     */
    inline const Aws::Vector<S3Tag>& GetTagSet() const{ return m_tagSet; }
    inline void SetTagSet(const Aws::Vector<S3Tag>& value) { m_tagSet = value; }
    inline void SetTagSet(Aws::Vector<S3Tag>&& value) { m_tagSet = std::move(value); }
    inline GetBucketTaggingResult& WithTagSet(const Aws::Vector<S3Tag>& value) { SetTagSet(value); return *this;}
    inline GetBucketTaggingResult& WithTagSet(Aws::Vector<S3Tag>&& value) { SetTagSet(std::move(value)); return *this;}
    inline GetBucketTaggingResult& AddTagSet(const S3Tag& value) { m_tagSet.push_back(value); return *this; }
    inline GetBucketTaggingResult& AddTagSet(S3Tag&& value) { m_tagSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBucketTaggingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBucketTaggingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBucketTaggingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetBucketTaggingResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetBucketTaggingResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetBucketTaggingResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::Vector<S3Tag> m_tagSet;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
