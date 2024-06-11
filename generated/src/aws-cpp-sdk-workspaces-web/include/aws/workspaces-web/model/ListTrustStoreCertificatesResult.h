/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/CertificateSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpacesWeb
{
namespace Model
{
  class ListTrustStoreCertificatesResult
  {
  public:
    AWS_WORKSPACESWEB_API ListTrustStoreCertificatesResult();
    AWS_WORKSPACESWEB_API ListTrustStoreCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListTrustStoreCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The certificate list.</p>
     */
    inline const Aws::Vector<CertificateSummary>& GetCertificateList() const{ return m_certificateList; }
    inline void SetCertificateList(const Aws::Vector<CertificateSummary>& value) { m_certificateList = value; }
    inline void SetCertificateList(Aws::Vector<CertificateSummary>&& value) { m_certificateList = std::move(value); }
    inline ListTrustStoreCertificatesResult& WithCertificateList(const Aws::Vector<CertificateSummary>& value) { SetCertificateList(value); return *this;}
    inline ListTrustStoreCertificatesResult& WithCertificateList(Aws::Vector<CertificateSummary>&& value) { SetCertificateList(std::move(value)); return *this;}
    inline ListTrustStoreCertificatesResult& AddCertificateList(const CertificateSummary& value) { m_certificateList.push_back(value); return *this; }
    inline ListTrustStoreCertificatesResult& AddCertificateList(CertificateSummary&& value) { m_certificateList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.&gt;</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTrustStoreCertificatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTrustStoreCertificatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTrustStoreCertificatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArn = value; }
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArn = std::move(value); }
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArn.assign(value); }
    inline ListTrustStoreCertificatesResult& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}
    inline ListTrustStoreCertificatesResult& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}
    inline ListTrustStoreCertificatesResult& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTrustStoreCertificatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTrustStoreCertificatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTrustStoreCertificatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CertificateSummary> m_certificateList;

    Aws::String m_nextToken;

    Aws::String m_trustStoreArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
