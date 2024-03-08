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
    AWS_RDS_API DescribeCertificatesResult();
    AWS_RDS_API DescribeCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The default root CA for new databases created by your Amazon Web Services
     * account. This is either the root CA override set on your Amazon Web Services
     * account or the system default CA for the Region if no override exists. To
     * override the default CA, use the <code>ModifyCertificates</code> operation.</p>
     */
    inline const Aws::String& GetDefaultCertificateForNewLaunches() const{ return m_defaultCertificateForNewLaunches; }

    /**
     * <p>The default root CA for new databases created by your Amazon Web Services
     * account. This is either the root CA override set on your Amazon Web Services
     * account or the system default CA for the Region if no override exists. To
     * override the default CA, use the <code>ModifyCertificates</code> operation.</p>
     */
    inline void SetDefaultCertificateForNewLaunches(const Aws::String& value) { m_defaultCertificateForNewLaunches = value; }

    /**
     * <p>The default root CA for new databases created by your Amazon Web Services
     * account. This is either the root CA override set on your Amazon Web Services
     * account or the system default CA for the Region if no override exists. To
     * override the default CA, use the <code>ModifyCertificates</code> operation.</p>
     */
    inline void SetDefaultCertificateForNewLaunches(Aws::String&& value) { m_defaultCertificateForNewLaunches = std::move(value); }

    /**
     * <p>The default root CA for new databases created by your Amazon Web Services
     * account. This is either the root CA override set on your Amazon Web Services
     * account or the system default CA for the Region if no override exists. To
     * override the default CA, use the <code>ModifyCertificates</code> operation.</p>
     */
    inline void SetDefaultCertificateForNewLaunches(const char* value) { m_defaultCertificateForNewLaunches.assign(value); }

    /**
     * <p>The default root CA for new databases created by your Amazon Web Services
     * account. This is either the root CA override set on your Amazon Web Services
     * account or the system default CA for the Region if no override exists. To
     * override the default CA, use the <code>ModifyCertificates</code> operation.</p>
     */
    inline DescribeCertificatesResult& WithDefaultCertificateForNewLaunches(const Aws::String& value) { SetDefaultCertificateForNewLaunches(value); return *this;}

    /**
     * <p>The default root CA for new databases created by your Amazon Web Services
     * account. This is either the root CA override set on your Amazon Web Services
     * account or the system default CA for the Region if no override exists. To
     * override the default CA, use the <code>ModifyCertificates</code> operation.</p>
     */
    inline DescribeCertificatesResult& WithDefaultCertificateForNewLaunches(Aws::String&& value) { SetDefaultCertificateForNewLaunches(std::move(value)); return *this;}

    /**
     * <p>The default root CA for new databases created by your Amazon Web Services
     * account. This is either the root CA override set on your Amazon Web Services
     * account or the system default CA for the Region if no override exists. To
     * override the default CA, use the <code>ModifyCertificates</code> operation.</p>
     */
    inline DescribeCertificatesResult& WithDefaultCertificateForNewLaunches(const char* value) { SetDefaultCertificateForNewLaunches(value); return *this;}


    /**
     * <p>The list of <code>Certificate</code> objects for the Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>The list of <code>Certificate</code> objects for the Amazon Web Services
     * account.</p>
     */
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificates = value; }

    /**
     * <p>The list of <code>Certificate</code> objects for the Amazon Web Services
     * account.</p>
     */
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificates = std::move(value); }

    /**
     * <p>The list of <code>Certificate</code> objects for the Amazon Web Services
     * account.</p>
     */
    inline DescribeCertificatesResult& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}

    /**
     * <p>The list of <code>Certificate</code> objects for the Amazon Web Services
     * account.</p>
     */
    inline DescribeCertificatesResult& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(std::move(value)); return *this;}

    /**
     * <p>The list of <code>Certificate</code> objects for the Amazon Web Services
     * account.</p>
     */
    inline DescribeCertificatesResult& AddCertificates(const Certificate& value) { m_certificates.push_back(value); return *this; }

    /**
     * <p>The list of <code>Certificate</code> objects for the Amazon Web Services
     * account.</p>
     */
    inline DescribeCertificatesResult& AddCertificates(Certificate&& value) { m_certificates.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline DescribeCertificatesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline DescribeCertificatesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCertificates</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline DescribeCertificatesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeCertificatesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeCertificatesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_defaultCertificateForNewLaunches;

    Aws::Vector<Certificate> m_certificates;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
