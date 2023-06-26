/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/AuthType.h>
#include <aws/core/utils/DateTime.h>
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
  class GetServiceResult
  {
  public:
    AWS_VPCLATTICE_API GetServiceResult();
    AWS_VPCLATTICE_API GetServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetServiceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline GetServiceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline GetServiceResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline GetServiceResult& WithAuthType(const AuthType& value) { SetAuthType(value); return *this;}

    /**
     * <p>The type of IAM policy.</p>
     */
    inline GetServiceResult& WithAuthType(AuthType&& value) { SetAuthType(std::move(value)); return *this;}


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
    inline GetServiceResult& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline GetServiceResult& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline GetServiceResult& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The date and time that the service was created, specified in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the service was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time that the service was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the service was created, specified in ISO-8601
     * format.</p>
     */
    inline GetServiceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the service was created, specified in ISO-8601
     * format.</p>
     */
    inline GetServiceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


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
    inline GetServiceResult& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}

    /**
     * <p>The custom domain name of the service.</p>
     */
    inline GetServiceResult& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}

    /**
     * <p>The custom domain name of the service.</p>
     */
    inline GetServiceResult& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}


    /**
     * <p>The DNS name of the service.</p>
     */
    inline const DnsEntry& GetDnsEntry() const{ return m_dnsEntry; }

    /**
     * <p>The DNS name of the service.</p>
     */
    inline void SetDnsEntry(const DnsEntry& value) { m_dnsEntry = value; }

    /**
     * <p>The DNS name of the service.</p>
     */
    inline void SetDnsEntry(DnsEntry&& value) { m_dnsEntry = std::move(value); }

    /**
     * <p>The DNS name of the service.</p>
     */
    inline GetServiceResult& WithDnsEntry(const DnsEntry& value) { SetDnsEntry(value); return *this;}

    /**
     * <p>The DNS name of the service.</p>
     */
    inline GetServiceResult& WithDnsEntry(DnsEntry&& value) { SetDnsEntry(std::move(value)); return *this;}


    /**
     * <p>The failure code.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(const Aws::String& value) { m_failureCode = value; }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(Aws::String&& value) { m_failureCode = std::move(value); }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(const char* value) { m_failureCode.assign(value); }

    /**
     * <p>The failure code.</p>
     */
    inline GetServiceResult& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code.</p>
     */
    inline GetServiceResult& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}

    /**
     * <p>The failure code.</p>
     */
    inline GetServiceResult& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}


    /**
     * <p>The failure message.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }

    /**
     * <p>The failure message.</p>
     */
    inline GetServiceResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>The failure message.</p>
     */
    inline GetServiceResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>The failure message.</p>
     */
    inline GetServiceResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


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
    inline GetServiceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline GetServiceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline GetServiceResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date and time that the service was last updated, specified in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time that the service was last updated, specified in ISO-8601
     * format.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The date and time that the service was last updated, specified in ISO-8601
     * format.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time that the service was last updated, specified in ISO-8601
     * format.</p>
     */
    inline GetServiceResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the service was last updated, specified in ISO-8601
     * format.</p>
     */
    inline GetServiceResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


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
    inline GetServiceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline GetServiceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline GetServiceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the service.</p>
     */
    inline const ServiceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the service.</p>
     */
    inline void SetStatus(const ServiceStatus& value) { m_status = value; }

    /**
     * <p>The status of the service.</p>
     */
    inline void SetStatus(ServiceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the service.</p>
     */
    inline GetServiceResult& WithStatus(const ServiceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the service.</p>
     */
    inline GetServiceResult& WithStatus(ServiceStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    AuthType m_authType;

    Aws::String m_certificateArn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_customDomainName;

    DnsEntry m_dnsEntry;

    Aws::String m_failureCode;

    Aws::String m_failureMessage;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    ServiceStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
