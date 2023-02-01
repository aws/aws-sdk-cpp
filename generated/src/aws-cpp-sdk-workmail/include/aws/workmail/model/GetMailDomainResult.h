/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/model/DnsRecordVerificationStatus.h>
#include <aws/workmail/model/DnsRecord.h>
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
namespace WorkMail
{
namespace Model
{
  class GetMailDomainResult
  {
  public:
    AWS_WORKMAIL_API GetMailDomainResult();
    AWS_WORKMAIL_API GetMailDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetMailDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the DNS records that WorkMail recommends adding in your DNS
     * provider for the best user experience. The records configure your domain with
     * DMARC, SPF, DKIM, and direct incoming email traffic to SES. See admin guide for
     * more details.</p>
     */
    inline const Aws::Vector<DnsRecord>& GetRecords() const{ return m_records; }

    /**
     * <p>A list of the DNS records that WorkMail recommends adding in your DNS
     * provider for the best user experience. The records configure your domain with
     * DMARC, SPF, DKIM, and direct incoming email traffic to SES. See admin guide for
     * more details.</p>
     */
    inline void SetRecords(const Aws::Vector<DnsRecord>& value) { m_records = value; }

    /**
     * <p>A list of the DNS records that WorkMail recommends adding in your DNS
     * provider for the best user experience. The records configure your domain with
     * DMARC, SPF, DKIM, and direct incoming email traffic to SES. See admin guide for
     * more details.</p>
     */
    inline void SetRecords(Aws::Vector<DnsRecord>&& value) { m_records = std::move(value); }

    /**
     * <p>A list of the DNS records that WorkMail recommends adding in your DNS
     * provider for the best user experience. The records configure your domain with
     * DMARC, SPF, DKIM, and direct incoming email traffic to SES. See admin guide for
     * more details.</p>
     */
    inline GetMailDomainResult& WithRecords(const Aws::Vector<DnsRecord>& value) { SetRecords(value); return *this;}

    /**
     * <p>A list of the DNS records that WorkMail recommends adding in your DNS
     * provider for the best user experience. The records configure your domain with
     * DMARC, SPF, DKIM, and direct incoming email traffic to SES. See admin guide for
     * more details.</p>
     */
    inline GetMailDomainResult& WithRecords(Aws::Vector<DnsRecord>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p>A list of the DNS records that WorkMail recommends adding in your DNS
     * provider for the best user experience. The records configure your domain with
     * DMARC, SPF, DKIM, and direct incoming email traffic to SES. See admin guide for
     * more details.</p>
     */
    inline GetMailDomainResult& AddRecords(const DnsRecord& value) { m_records.push_back(value); return *this; }

    /**
     * <p>A list of the DNS records that WorkMail recommends adding in your DNS
     * provider for the best user experience. The records configure your domain with
     * DMARC, SPF, DKIM, and direct incoming email traffic to SES. See admin guide for
     * more details.</p>
     */
    inline GetMailDomainResult& AddRecords(DnsRecord&& value) { m_records.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether the domain is a test domain provided by WorkMail, or a
     * custom domain.</p>
     */
    inline bool GetIsTestDomain() const{ return m_isTestDomain; }

    /**
     * <p>Specifies whether the domain is a test domain provided by WorkMail, or a
     * custom domain.</p>
     */
    inline void SetIsTestDomain(bool value) { m_isTestDomain = value; }

    /**
     * <p>Specifies whether the domain is a test domain provided by WorkMail, or a
     * custom domain.</p>
     */
    inline GetMailDomainResult& WithIsTestDomain(bool value) { SetIsTestDomain(value); return *this;}


    /**
     * <p>Specifies whether the domain is the default domain for your organization.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>Specifies whether the domain is the default domain for your organization.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefault = value; }

    /**
     * <p>Specifies whether the domain is the default domain for your organization.</p>
     */
    inline GetMailDomainResult& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


    /**
     * <p> Indicates the status of the domain ownership verification.</p>
     */
    inline const DnsRecordVerificationStatus& GetOwnershipVerificationStatus() const{ return m_ownershipVerificationStatus; }

    /**
     * <p> Indicates the status of the domain ownership verification.</p>
     */
    inline void SetOwnershipVerificationStatus(const DnsRecordVerificationStatus& value) { m_ownershipVerificationStatus = value; }

    /**
     * <p> Indicates the status of the domain ownership verification.</p>
     */
    inline void SetOwnershipVerificationStatus(DnsRecordVerificationStatus&& value) { m_ownershipVerificationStatus = std::move(value); }

    /**
     * <p> Indicates the status of the domain ownership verification.</p>
     */
    inline GetMailDomainResult& WithOwnershipVerificationStatus(const DnsRecordVerificationStatus& value) { SetOwnershipVerificationStatus(value); return *this;}

    /**
     * <p> Indicates the status of the domain ownership verification.</p>
     */
    inline GetMailDomainResult& WithOwnershipVerificationStatus(DnsRecordVerificationStatus&& value) { SetOwnershipVerificationStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates the status of a DKIM verification.</p>
     */
    inline const DnsRecordVerificationStatus& GetDkimVerificationStatus() const{ return m_dkimVerificationStatus; }

    /**
     * <p>Indicates the status of a DKIM verification.</p>
     */
    inline void SetDkimVerificationStatus(const DnsRecordVerificationStatus& value) { m_dkimVerificationStatus = value; }

    /**
     * <p>Indicates the status of a DKIM verification.</p>
     */
    inline void SetDkimVerificationStatus(DnsRecordVerificationStatus&& value) { m_dkimVerificationStatus = std::move(value); }

    /**
     * <p>Indicates the status of a DKIM verification.</p>
     */
    inline GetMailDomainResult& WithDkimVerificationStatus(const DnsRecordVerificationStatus& value) { SetDkimVerificationStatus(value); return *this;}

    /**
     * <p>Indicates the status of a DKIM verification.</p>
     */
    inline GetMailDomainResult& WithDkimVerificationStatus(DnsRecordVerificationStatus&& value) { SetDkimVerificationStatus(std::move(value)); return *this;}

  private:

    Aws::Vector<DnsRecord> m_records;

    bool m_isTestDomain;

    bool m_isDefault;

    DnsRecordVerificationStatus m_ownershipVerificationStatus;

    DnsRecordVerificationStatus m_dkimVerificationStatus;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
