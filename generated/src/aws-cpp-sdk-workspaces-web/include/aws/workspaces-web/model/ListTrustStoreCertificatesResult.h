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
    AWS_WORKSPACESWEB_API ListTrustStoreCertificatesResult() = default;
    AWS_WORKSPACESWEB_API ListTrustStoreCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListTrustStoreCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The certificate list.</p>
     */
    inline const Aws::Vector<CertificateSummary>& GetCertificateList() const { return m_certificateList; }
    template<typename CertificateListT = Aws::Vector<CertificateSummary>>
    void SetCertificateList(CertificateListT&& value) { m_certificateListHasBeenSet = true; m_certificateList = std::forward<CertificateListT>(value); }
    template<typename CertificateListT = Aws::Vector<CertificateSummary>>
    ListTrustStoreCertificatesResult& WithCertificateList(CertificateListT&& value) { SetCertificateList(std::forward<CertificateListT>(value)); return *this;}
    template<typename CertificateListT = CertificateSummary>
    ListTrustStoreCertificatesResult& AddCertificateList(CertificateListT&& value) { m_certificateListHasBeenSet = true; m_certificateList.emplace_back(std::forward<CertificateListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const { return m_trustStoreArn; }
    template<typename TrustStoreArnT = Aws::String>
    void SetTrustStoreArn(TrustStoreArnT&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::forward<TrustStoreArnT>(value); }
    template<typename TrustStoreArnT = Aws::String>
    ListTrustStoreCertificatesResult& WithTrustStoreArn(TrustStoreArnT&& value) { SetTrustStoreArn(std::forward<TrustStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.&gt;</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrustStoreCertificatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrustStoreCertificatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CertificateSummary> m_certificateList;
    bool m_certificateListHasBeenSet = false;

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
