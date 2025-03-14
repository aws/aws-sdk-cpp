﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/BucketVersioningStatus.h>
#include <aws/s3control/model/MFADeleteStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetBucketVersioningResult
  {
  public:
    AWS_S3CONTROL_API GetBucketVersioningResult();
    AWS_S3CONTROL_API GetBucketVersioningResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetBucketVersioningResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The versioning state of the S3 on Outposts bucket.</p>
     */
    inline const BucketVersioningStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const BucketVersioningStatus& value) { m_status = value; }
    inline void SetStatus(BucketVersioningStatus&& value) { m_status = std::move(value); }
    inline GetBucketVersioningResult& WithStatus(const BucketVersioningStatus& value) { SetStatus(value); return *this;}
    inline GetBucketVersioningResult& WithStatus(BucketVersioningStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether MFA delete is enabled in the bucket versioning
     * configuration. This element is returned only if the bucket has been configured
     * with MFA delete. If MFA delete has never been configured for the bucket, this
     * element is not returned.</p>
     */
    inline const MFADeleteStatus& GetMFADelete() const{ return m_mFADelete; }
    inline void SetMFADelete(const MFADeleteStatus& value) { m_mFADelete = value; }
    inline void SetMFADelete(MFADeleteStatus&& value) { m_mFADelete = std::move(value); }
    inline GetBucketVersioningResult& WithMFADelete(const MFADeleteStatus& value) { SetMFADelete(value); return *this;}
    inline GetBucketVersioningResult& WithMFADelete(MFADeleteStatus&& value) { SetMFADelete(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBucketVersioningResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBucketVersioningResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBucketVersioningResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetBucketVersioningResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetBucketVersioningResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetBucketVersioningResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    BucketVersioningStatus m_status;

    MFADeleteStatus m_mFADelete;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
