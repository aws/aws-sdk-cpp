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


    /**
     * <p>The certificate list.</p>
     */
    inline const Aws::Vector<CertificateSummary>& GetCertificateList() const{ return m_certificateList; }

    /**
     * <p>The certificate list.</p>
     */
    inline void SetCertificateList(const Aws::Vector<CertificateSummary>& value) { m_certificateList = value; }

    /**
     * <p>The certificate list.</p>
     */
    inline void SetCertificateList(Aws::Vector<CertificateSummary>&& value) { m_certificateList = std::move(value); }

    /**
     * <p>The certificate list.</p>
     */
    inline ListTrustStoreCertificatesResult& WithCertificateList(const Aws::Vector<CertificateSummary>& value) { SetCertificateList(value); return *this;}

    /**
     * <p>The certificate list.</p>
     */
    inline ListTrustStoreCertificatesResult& WithCertificateList(Aws::Vector<CertificateSummary>&& value) { SetCertificateList(std::move(value)); return *this;}

    /**
     * <p>The certificate list.</p>
     */
    inline ListTrustStoreCertificatesResult& AddCertificateList(const CertificateSummary& value) { m_certificateList.push_back(value); return *this; }

    /**
     * <p>The certificate list.</p>
     */
    inline ListTrustStoreCertificatesResult& AddCertificateList(CertificateSummary&& value) { m_certificateList.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.&gt;</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.&gt;</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.&gt;</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.&gt;</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.&gt;</p>
     */
    inline ListTrustStoreCertificatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.&gt;</p>
     */
    inline ListTrustStoreCertificatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.&gt;</p>
     */
    inline ListTrustStoreCertificatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ARN of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArn = value; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArn = std::move(value); }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArn.assign(value); }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline ListTrustStoreCertificatesResult& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline ListTrustStoreCertificatesResult& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline ListTrustStoreCertificatesResult& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}

  private:

    Aws::Vector<CertificateSummary> m_certificateList;

    Aws::String m_nextToken;

    Aws::String m_trustStoreArn;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
