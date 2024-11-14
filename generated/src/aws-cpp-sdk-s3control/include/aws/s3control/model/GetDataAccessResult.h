/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/Credentials.h>
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
  class GetDataAccessResult
  {
  public:
    AWS_S3CONTROL_API GetDataAccessResult();
    AWS_S3CONTROL_API GetDataAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetDataAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The temporary credential token that S3 Access Grants vends.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }
    inline void SetCredentials(Credentials&& value) { m_credentials = std::move(value); }
    inline GetDataAccessResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}
    inline GetDataAccessResult& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI path of the data to which you are being granted temporary access
     * credentials. </p>
     */
    inline const Aws::String& GetMatchedGrantTarget() const{ return m_matchedGrantTarget; }
    inline void SetMatchedGrantTarget(const Aws::String& value) { m_matchedGrantTarget = value; }
    inline void SetMatchedGrantTarget(Aws::String&& value) { m_matchedGrantTarget = std::move(value); }
    inline void SetMatchedGrantTarget(const char* value) { m_matchedGrantTarget.assign(value); }
    inline GetDataAccessResult& WithMatchedGrantTarget(const Aws::String& value) { SetMatchedGrantTarget(value); return *this;}
    inline GetDataAccessResult& WithMatchedGrantTarget(Aws::String&& value) { SetMatchedGrantTarget(std::move(value)); return *this;}
    inline GetDataAccessResult& WithMatchedGrantTarget(const char* value) { SetMatchedGrantTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataAccessResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataAccessResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataAccessResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetDataAccessResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetDataAccessResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetDataAccessResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Credentials m_credentials;

    Aws::String m_matchedGrantTarget;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
