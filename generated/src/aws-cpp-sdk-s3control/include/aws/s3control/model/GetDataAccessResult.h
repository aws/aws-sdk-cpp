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


    /**
     * <p>The temporary credential token that S3 Access Grants vends.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The temporary credential token that S3 Access Grants vends.</p>
     */
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }

    /**
     * <p>The temporary credential token that S3 Access Grants vends.</p>
     */
    inline void SetCredentials(Credentials&& value) { m_credentials = std::move(value); }

    /**
     * <p>The temporary credential token that S3 Access Grants vends.</p>
     */
    inline GetDataAccessResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The temporary credential token that S3 Access Grants vends.</p>
     */
    inline GetDataAccessResult& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}


    /**
     * <p>The S3 URI path of the data to which you are being granted temporary access
     * credentials. </p>
     */
    inline const Aws::String& GetMatchedGrantTarget() const{ return m_matchedGrantTarget; }

    /**
     * <p>The S3 URI path of the data to which you are being granted temporary access
     * credentials. </p>
     */
    inline void SetMatchedGrantTarget(const Aws::String& value) { m_matchedGrantTarget = value; }

    /**
     * <p>The S3 URI path of the data to which you are being granted temporary access
     * credentials. </p>
     */
    inline void SetMatchedGrantTarget(Aws::String&& value) { m_matchedGrantTarget = std::move(value); }

    /**
     * <p>The S3 URI path of the data to which you are being granted temporary access
     * credentials. </p>
     */
    inline void SetMatchedGrantTarget(const char* value) { m_matchedGrantTarget.assign(value); }

    /**
     * <p>The S3 URI path of the data to which you are being granted temporary access
     * credentials. </p>
     */
    inline GetDataAccessResult& WithMatchedGrantTarget(const Aws::String& value) { SetMatchedGrantTarget(value); return *this;}

    /**
     * <p>The S3 URI path of the data to which you are being granted temporary access
     * credentials. </p>
     */
    inline GetDataAccessResult& WithMatchedGrantTarget(Aws::String&& value) { SetMatchedGrantTarget(std::move(value)); return *this;}

    /**
     * <p>The S3 URI path of the data to which you are being granted temporary access
     * credentials. </p>
     */
    inline GetDataAccessResult& WithMatchedGrantTarget(const char* value) { SetMatchedGrantTarget(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDataAccessResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDataAccessResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDataAccessResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Credentials m_credentials;

    Aws::String m_matchedGrantTarget;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
