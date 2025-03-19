/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/Certificate.h>
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
namespace RDS
{
namespace Model
{
  /**
   * <p>Data returned by the <b>DescribeCertificates</b> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CertificateMessage">AWS
   * API Reference</a></p>
   */
  class DescribeCertificatesResult
  {
  public:
    AWS_RDS_API DescribeCertificatesResult() = default;
    AWS_RDS_API DescribeCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The default root CA for new databases created by your Amazon Web Services
     * account. This is either the root CA override set on your Amazon Web Services
     * account or the system default CA for the Region if no override exists. To
     * override the default CA, use the <code>ModifyCertificates</code> operation.</p>
     */
    inline const Aws::String& GetDefaultCertificateForNewLaunches() const { return m_defaultCertificateForNewLaunches; }
    template<typename DefaultCertificateForNewLaunchesT = Aws::String>
    void SetDefaultCertificateForNewLaunches(DefaultCertificateForNewLaunchesT&& value) { m_defaultCertificateForNewLaunchesHasBeenSet = true; m_defaultCertificateForNewLaunches = std::forward<DefaultCertificateForNewLaunchesT>(value); }
    template<typename DefaultCertificateForNewLaunchesT = Aws::String>
    DescribeCertificatesResult& WithDefaultCertificateForNewLaunches(DefaultCertificateForNewLaunchesT&& value) { SetDefaultCertificateForNewLaunches(std::forward<DefaultCertificateForNewLaunchesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <code>Certificate</code> objects for the Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const { return m_certificates; }
    template<typename CertificatesT = Aws::Vector<Certificate>>
    void SetCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates = std::forward<CertificatesT>(value); }
    template<typename CertificatesT = Aws::Vector<Certificate>>
    DescribeCertificatesResult& WithCertificates(CertificatesT&& value) { SetCertificates(std::forward<CertificatesT>(value)); return *this;}
    template<typename CertificatesT = Certificate>
    DescribeCertificatesResult& AddCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates.emplace_back(std::forward<CertificatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeCertificatesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCertificatesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultCertificateForNewLaunches;
    bool m_defaultCertificateForNewLaunchesHasBeenSet = false;

    Aws::Vector<Certificate> m_certificates;
    bool m_certificatesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
