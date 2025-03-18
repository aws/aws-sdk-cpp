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
    AWS_STORAGEGATEWAY_API DescribeSMBSettingsResult() = default;
    AWS_STORAGEGATEWAY_API DescribeSMBSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeSMBSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    DescribeSMBSettingsResult& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain that the gateway is joined to.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DescribeSMBSettingsResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of a gateway that is a member of the Active Directory
     * domain.</p>  <p>This field is only used as part of a
     * <code>JoinDomain</code> request. It is not affected by Active Directory
     * connectivity changes that occur after the <code>JoinDomain</code> request
     * succeeds.</p>  <ul> <li> <p> <code>ACCESS_DENIED</code>: Indicates that
     * the <code>JoinDomain</code> operation failed due to an authentication error.</p>
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
    inline ActiveDirectoryStatus GetActiveDirectoryStatus() const { return m_activeDirectoryStatus; }
    inline void SetActiveDirectoryStatus(ActiveDirectoryStatus value) { m_activeDirectoryStatusHasBeenSet = true; m_activeDirectoryStatus = value; }
    inline DescribeSMBSettingsResult& WithActiveDirectoryStatus(ActiveDirectoryStatus value) { SetActiveDirectoryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is <code>true</code> if a password for the guest user
     * <code>smbguest</code> is set, otherwise <code>false</code>. Only supported for
     * S3 File Gateways.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetSMBGuestPasswordSet() const { return m_sMBGuestPasswordSet; }
    inline void SetSMBGuestPasswordSet(bool value) { m_sMBGuestPasswordSetHasBeenSet = true; m_sMBGuestPasswordSet = value; }
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
    inline SMBSecurityStrategy GetSMBSecurityStrategy() const { return m_sMBSecurityStrategy; }
    inline void SetSMBSecurityStrategy(SMBSecurityStrategy value) { m_sMBSecurityStrategyHasBeenSet = true; m_sMBSecurityStrategy = value; }
    inline DescribeSMBSettingsResult& WithSMBSecurityStrategy(SMBSecurityStrategy value) { SetSMBSecurityStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shares on this gateway appear when listing shares. Only supported for S3
     * File Gateways. </p>
     */
    inline bool GetFileSharesVisible() const { return m_fileSharesVisible; }
    inline void SetFileSharesVisible(bool value) { m_fileSharesVisibleHasBeenSet = true; m_fileSharesVisible = value; }
    inline DescribeSMBSettingsResult& WithFileSharesVisible(bool value) { SetFileSharesVisible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Active Directory users and groups that have special permissions for
     * SMB file shares on the gateway.</p>
     */
    inline const SMBLocalGroups& GetSMBLocalGroups() const { return m_sMBLocalGroups; }
    template<typename SMBLocalGroupsT = SMBLocalGroups>
    void SetSMBLocalGroups(SMBLocalGroupsT&& value) { m_sMBLocalGroupsHasBeenSet = true; m_sMBLocalGroups = std::forward<SMBLocalGroupsT>(value); }
    template<typename SMBLocalGroupsT = SMBLocalGroups>
    DescribeSMBSettingsResult& WithSMBLocalGroups(SMBLocalGroupsT&& value) { SetSMBLocalGroups(std::forward<SMBLocalGroupsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSMBSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ActiveDirectoryStatus m_activeDirectoryStatus{ActiveDirectoryStatus::NOT_SET};
    bool m_activeDirectoryStatusHasBeenSet = false;

    bool m_sMBGuestPasswordSet{false};
    bool m_sMBGuestPasswordSetHasBeenSet = false;

    SMBSecurityStrategy m_sMBSecurityStrategy{SMBSecurityStrategy::NOT_SET};
    bool m_sMBSecurityStrategyHasBeenSet = false;

    bool m_fileSharesVisible{false};
    bool m_fileSharesVisibleHasBeenSet = false;

    SMBLocalGroups m_sMBLocalGroups;
    bool m_sMBLocalGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
