/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/ActiveDirectoryStatus.h>
#include <aws/storagegateway/model/SMBSecurityStrategy.h>
#include <aws/storagegateway/model/SMBLocalGroups.h>
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
namespace StorageGateway
{
namespace Model
{
  class DescribeSMBSettingsResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeSMBSettingsResult();
    AWS_STORAGEGATEWAY_API DescribeSMBSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeSMBSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }
    inline DescribeSMBSettingsResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline DescribeSMBSettingsResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline DescribeSMBSettingsResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain that the gateway is joined to.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline DescribeSMBSettingsResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DescribeSMBSettingsResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DescribeSMBSettingsResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of a gateway that is a member of the Active Directory
     * domain.</p> <ul> <li> <p> <code>ACCESS_DENIED</code>: Indicates that the
     * <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p> <code>DETACHED</code>: Indicates that gateway is not joined to a
     * domain.</p> </li> <li> <p> <code>JOINED</code>: Indicates that the gateway has
     * successfully joined a domain.</p> </li> <li> <p> <code>JOINING</code>: Indicates
     * that a <code>JoinDomain</code> operation is in progress.</p> </li> <li> <p>
     * <code>NETWORK_ERROR</code>: Indicates that <code>JoinDomain</code> operation
     * failed due to a network or connectivity error.</p> </li> <li> <p>
     * <code>TIMEOUT</code>: Indicates that the <code>JoinDomain</code> operation
     * failed because the operation didn't complete within the allotted time.</p> </li>
     * <li> <p> <code>UNKNOWN_ERROR</code>: Indicates that the <code>JoinDomain</code>
     * operation failed due to another type of error.</p> </li> </ul>
     */
    inline const ActiveDirectoryStatus& GetActiveDirectoryStatus() const{ return m_activeDirectoryStatus; }
    inline void SetActiveDirectoryStatus(const ActiveDirectoryStatus& value) { m_activeDirectoryStatus = value; }
    inline void SetActiveDirectoryStatus(ActiveDirectoryStatus&& value) { m_activeDirectoryStatus = std::move(value); }
    inline DescribeSMBSettingsResult& WithActiveDirectoryStatus(const ActiveDirectoryStatus& value) { SetActiveDirectoryStatus(value); return *this;}
    inline DescribeSMBSettingsResult& WithActiveDirectoryStatus(ActiveDirectoryStatus&& value) { SetActiveDirectoryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is <code>true</code> if a password for the guest user
     * <code>smbguest</code> is set, otherwise <code>false</code>. Only supported for
     * S3 File Gateways.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetSMBGuestPasswordSet() const{ return m_sMBGuestPasswordSet; }
    inline void SetSMBGuestPasswordSet(bool value) { m_sMBGuestPasswordSet = value; }
    inline DescribeSMBSettingsResult& WithSMBGuestPasswordSet(bool value) { SetSMBGuestPasswordSet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of security strategy that was specified for file gateway.</p> <ul>
     * <li> <p> <code>ClientSpecified</code>: If you choose this option, requests are
     * established based on what is negotiated by the client. This option is
     * recommended when you want to maximize compatibility across different clients in
     * your environment. Supported only for S3 File Gateway.</p> </li> <li> <p>
     * <code>MandatorySigning</code>: If you choose this option, File Gateway only
     * allows connections from SMBv2 or SMBv3 clients that have signing turned on. This
     * option works with SMB clients on Microsoft Windows Vista, Windows Server 2008,
     * or later. </p> </li> <li> <p> <code>MandatoryEncryption</code>: If you choose
     * this option, File Gateway only allows connections from SMBv3 clients that have
     * encryption turned on. Both 256-bit and 128-bit algorithms are allowed. This
     * option is recommended for environments that handle sensitive data. It works with
     * SMB clients on Microsoft Windows 8, Windows Server 2012, or later.</p> </li>
     * <li> <p> <code>MandatoryEncryptionNoAes128</code>: If you choose this option,
     * File Gateway only allows connections from SMBv3 clients that use 256-bit AES
     * encryption algorithms. 128-bit algorithms are not allowed. This option is
     * recommended for environments that handle sensitive data. It works with SMB
     * clients on Microsoft Windows 8, Windows Server 2012, or later.</p> </li> </ul>
     */
    inline const SMBSecurityStrategy& GetSMBSecurityStrategy() const{ return m_sMBSecurityStrategy; }
    inline void SetSMBSecurityStrategy(const SMBSecurityStrategy& value) { m_sMBSecurityStrategy = value; }
    inline void SetSMBSecurityStrategy(SMBSecurityStrategy&& value) { m_sMBSecurityStrategy = std::move(value); }
    inline DescribeSMBSettingsResult& WithSMBSecurityStrategy(const SMBSecurityStrategy& value) { SetSMBSecurityStrategy(value); return *this;}
    inline DescribeSMBSettingsResult& WithSMBSecurityStrategy(SMBSecurityStrategy&& value) { SetSMBSecurityStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shares on this gateway appear when listing shares. Only supported for S3
     * File Gateways. </p>
     */
    inline bool GetFileSharesVisible() const{ return m_fileSharesVisible; }
    inline void SetFileSharesVisible(bool value) { m_fileSharesVisible = value; }
    inline DescribeSMBSettingsResult& WithFileSharesVisible(bool value) { SetFileSharesVisible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Active Directory users and groups that have special permissions for
     * SMB file shares on the gateway.</p>
     */
    inline const SMBLocalGroups& GetSMBLocalGroups() const{ return m_sMBLocalGroups; }
    inline void SetSMBLocalGroups(const SMBLocalGroups& value) { m_sMBLocalGroups = value; }
    inline void SetSMBLocalGroups(SMBLocalGroups&& value) { m_sMBLocalGroups = std::move(value); }
    inline DescribeSMBSettingsResult& WithSMBLocalGroups(const SMBLocalGroups& value) { SetSMBLocalGroups(value); return *this;}
    inline DescribeSMBSettingsResult& WithSMBLocalGroups(SMBLocalGroups&& value) { SetSMBLocalGroups(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSMBSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSMBSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSMBSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;

    Aws::String m_domainName;

    ActiveDirectoryStatus m_activeDirectoryStatus;

    bool m_sMBGuestPasswordSet;

    SMBSecurityStrategy m_sMBSecurityStrategy;

    bool m_fileSharesVisible;

    SMBLocalGroups m_sMBLocalGroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
