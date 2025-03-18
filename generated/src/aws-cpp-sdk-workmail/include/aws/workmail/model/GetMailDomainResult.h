/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/model/DnsRecordVerificationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_WORKMAIL_API GetMailDomainResult() = default;
    AWS_WORKMAIL_API GetMailDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetMailDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the DNS records that WorkMail recommends adding in your DNS
     * provider for the best user experience. The records configure your domain with
     * DMARC, SPF, DKIM, and direct incoming email traffic to SES. See admin guide for
     * more details.</p>
     */
    inline const Aws::Vector<DnsRecord>& GetRecords() const { return m_records; }
    template<typename RecordsT = Aws::Vector<DnsRecord>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<DnsRecord>>
    GetMailDomainResult& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = DnsRecord>
    GetMailDomainResult& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the domain is a test domain provided by WorkMail, or a
     * custom domain.</p>
     */
    inline bool GetIsTestDomain() const { return m_isTestDomain; }
    inline void SetIsTestDomain(bool value) { m_isTestDomainHasBeenSet = true; m_isTestDomain = value; }
    inline GetMailDomainResult& WithIsTestDomain(bool value) { SetIsTestDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the domain is the default domain for your organization.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline GetMailDomainResult& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the status of the domain ownership verification.</p>
     */
    inline DnsRecordVerificationStatus GetOwnershipVerificationStatus() const { return m_ownershipVerificationStatus; }
    inline void SetOwnershipVerificationStatus(DnsRecordVerificationStatus value) { m_ownershipVerificationStatusHasBeenSet = true; m_ownershipVerificationStatus = value; }
    inline GetMailDomainResult& WithOwnershipVerificationStatus(DnsRecordVerificationStatus value) { SetOwnershipVerificationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of a DKIM verification.</p>
     */
    inline DnsRecordVerificationStatus GetDkimVerificationStatus() const { return m_dkimVerificationStatus; }
    inline void SetDkimVerificationStatus(DnsRecordVerificationStatus value) { m_dkimVerificationStatusHasBeenSet = true; m_dkimVerificationStatus = value; }
    inline GetMailDomainResult& WithDkimVerificationStatus(DnsRecordVerificationStatus value) { SetDkimVerificationStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMailDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DnsRecord> m_records;
    bool m_recordsHasBeenSet = false;

    bool m_isTestDomain{false};
    bool m_isTestDomainHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    DnsRecordVerificationStatus m_ownershipVerificationStatus{DnsRecordVerificationStatus::NOT_SET};
    bool m_ownershipVerificationStatusHasBeenSet = false;

    DnsRecordVerificationStatus m_dkimVerificationStatus{DnsRecordVerificationStatus::NOT_SET};
    bool m_dkimVerificationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
