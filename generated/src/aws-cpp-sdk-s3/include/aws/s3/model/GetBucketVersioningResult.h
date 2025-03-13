/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/BucketVersioningStatus.h>
#include <aws/s3/model/MFADeleteStatus.h>
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
namespace S3
{
namespace Model
{
  class GetBucketVersioningResult
  {
  public:
    AWS_S3_API GetBucketVersioningResult() = default;
    AWS_S3_API GetBucketVersioningResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketVersioningResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The versioning state of the bucket.</p>
     */
    inline BucketVersioningStatus GetStatus() const { return m_status; }
    inline void SetStatus(BucketVersioningStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetBucketVersioningResult& WithStatus(BucketVersioningStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether MFA delete is enabled in the bucket versioning
     * configuration. This element is only returned if the bucket has been configured
     * with MFA delete. If the bucket has never been so configured, this element is not
     * returned.</p>
     */
    inline MFADeleteStatus GetMFADelete() const { return m_mFADelete; }
    inline void SetMFADelete(MFADeleteStatus value) { m_mFADeleteHasBeenSet = true; m_mFADelete = value; }
    inline GetBucketVersioningResult& WithMFADelete(MFADeleteStatus value) { SetMFADelete(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketVersioningResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BucketVersioningStatus m_status{BucketVersioningStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    MFADeleteStatus m_mFADelete{MFADeleteStatus::NOT_SET};
    bool m_mFADeleteHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
