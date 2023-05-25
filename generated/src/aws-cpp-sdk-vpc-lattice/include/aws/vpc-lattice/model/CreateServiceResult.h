/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/AuthType.h>
#include <aws/vpc-lattice/model/DnsEntry.h>
#include <aws/vpc-lattice/model/ServiceStatus.h>
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
namespace VPCLattice
{
namespace Model
{
  class CreateServiceResult
  {
  public:
    AWS_VPCLATTICE_API CreateServiceResult();
    AWS_VPCLATTICE_API CreateServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API CreateServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline CreateServiceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline CreateServiceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline CreateServiceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of IAM policy.</p>
     */
    inline const AuthType& GetAuthType() const{ return m_authType; }

    /**
     * <p>The type of IAM policy.</p>
     */
    inline void SetAuthType(const AuthType& value) { m_authType = value; }

    /**
     * <p>The type of IAM policy.</p>
     */
    inline void SetAuthType(AuthType&& value) { m_authType = std::move(value); }

    /**
     * <p>The type of IAM policy.</p>
     */
    inline CreateServiceResult& WithAuthType(const AuthType& value) { SetAuthType(value); return *this;}

    /**
     * <p>The type of IAM policy.</p>
     */
    inline CreateServiceResult& WithAuthType(AuthType&& value) { SetAuthType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline CreateServiceResult& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline CreateServiceResult& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline CreateServiceResult& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The custom domain name of the service.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }

    /**
     * <p>The custom domain name of the service.</p>
     */
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainName = value; }

    /**
     * <p>The custom domain name of the service.</p>
     */
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainName = std::move(value); }

    /**
     * <p>The custom domain name of the service.</p>
     */
    inline void SetCustomDomainName(const char* value) { m_customDomainName.assign(value); }

    /**
     * <p>The custom domain name of the service.</p>
     */
    inline CreateServiceResult& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}

    /**
     * <p>The custom domain name of the service.</p>
     */
    inline CreateServiceResult& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}

    /**
     * <p>The custom domain name of the service.</p>
     */
    inline CreateServiceResult& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}


    /**
     * <p>The public DNS name of the service.</p>
     */
    inline const DnsEntry& GetDnsEntry() const{ return m_dnsEntry; }

    /**
     * <p>The public DNS name of the service.</p>
     */
    inline void SetDnsEntry(const DnsEntry& value) { m_dnsEntry = value; }

    /**
     * <p>The public DNS name of the service.</p>
     */
    inline void SetDnsEntry(DnsEntry&& value) { m_dnsEntry = std::move(value); }

    /**
     * <p>The public DNS name of the service.</p>
     */
    inline CreateServiceResult& WithDnsEntry(const DnsEntry& value) { SetDnsEntry(value); return *this;}

    /**
     * <p>The public DNS name of the service.</p>
     */
    inline CreateServiceResult& WithDnsEntry(DnsEntry&& value) { SetDnsEntry(std::move(value)); return *this;}


    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline CreateServiceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline CreateServiceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline CreateServiceResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline CreateServiceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline CreateServiceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline CreateServiceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status. If the status is <code>CREATE_FAILED</code>, you will have to
     * delete and recreate the service.</p>
     */
    inline const ServiceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status. If the status is <code>CREATE_FAILED</code>, you will have to
     * delete and recreate the service.</p>
     */
    inline void SetStatus(const ServiceStatus& value) { m_status = value; }

    /**
     * <p>The status. If the status is <code>CREATE_FAILED</code>, you will have to
     * delete and recreate the service.</p>
     */
    inline void SetStatus(ServiceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status. If the status is <code>CREATE_FAILED</code>, you will have to
     * delete and recreate the service.</p>
     */
    inline CreateServiceResult& WithStatus(const ServiceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status. If the status is <code>CREATE_FAILED</code>, you will have to
     * delete and recreate the service.</p>
     */
    inline CreateServiceResult& WithStatus(ServiceStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    AuthType m_authType;

    Aws::String m_certificateArn;

    Aws::String m_customDomainName;

    DnsEntry m_dnsEntry;

    Aws::String m_id;

    Aws::String m_name;

    ServiceStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
