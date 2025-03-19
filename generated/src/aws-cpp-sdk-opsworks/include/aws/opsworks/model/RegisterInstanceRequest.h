/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/InstanceIdentity.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class RegisterInstanceRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API RegisterInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterInstance"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the stack that the instance is to be registered with.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    RegisterInstanceRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's host name. The following are character limits for instance
     * host names.</p> <ul> <li> <p>Linux-based instances: 63 characters</p> </li> <li>
     * <p>Windows-based instances: 15 characters</p> </li> </ul>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    RegisterInstanceRequest& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's public IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const { return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    template<typename PublicIpT = Aws::String>
    void SetPublicIp(PublicIpT&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::forward<PublicIpT>(value); }
    template<typename PublicIpT = Aws::String>
    RegisterInstanceRequest& WithPublicIp(PublicIpT&& value) { SetPublicIp(std::forward<PublicIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's private IP address.</p>
     */
    inline const Aws::String& GetPrivateIp() const { return m_privateIp; }
    inline bool PrivateIpHasBeenSet() const { return m_privateIpHasBeenSet; }
    template<typename PrivateIpT = Aws::String>
    void SetPrivateIp(PrivateIpT&& value) { m_privateIpHasBeenSet = true; m_privateIp = std::forward<PrivateIpT>(value); }
    template<typename PrivateIpT = Aws::String>
    RegisterInstanceRequest& WithPrivateIp(PrivateIpT&& value) { SetPrivateIp(std::forward<PrivateIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instances public RSA key. This key is used to encrypt communication
     * between the instance and the service.</p>
     */
    inline const Aws::String& GetRsaPublicKey() const { return m_rsaPublicKey; }
    inline bool RsaPublicKeyHasBeenSet() const { return m_rsaPublicKeyHasBeenSet; }
    template<typename RsaPublicKeyT = Aws::String>
    void SetRsaPublicKey(RsaPublicKeyT&& value) { m_rsaPublicKeyHasBeenSet = true; m_rsaPublicKey = std::forward<RsaPublicKeyT>(value); }
    template<typename RsaPublicKeyT = Aws::String>
    RegisterInstanceRequest& WithRsaPublicKey(RsaPublicKeyT&& value) { SetRsaPublicKey(std::forward<RsaPublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instances public RSA key fingerprint.</p>
     */
    inline const Aws::String& GetRsaPublicKeyFingerprint() const { return m_rsaPublicKeyFingerprint; }
    inline bool RsaPublicKeyFingerprintHasBeenSet() const { return m_rsaPublicKeyFingerprintHasBeenSet; }
    template<typename RsaPublicKeyFingerprintT = Aws::String>
    void SetRsaPublicKeyFingerprint(RsaPublicKeyFingerprintT&& value) { m_rsaPublicKeyFingerprintHasBeenSet = true; m_rsaPublicKeyFingerprint = std::forward<RsaPublicKeyFingerprintT>(value); }
    template<typename RsaPublicKeyFingerprintT = Aws::String>
    RegisterInstanceRequest& WithRsaPublicKeyFingerprint(RsaPublicKeyFingerprintT&& value) { SetRsaPublicKeyFingerprint(std::forward<RsaPublicKeyFingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An InstanceIdentity object that contains the instance's identity.</p>
     */
    inline const InstanceIdentity& GetInstanceIdentity() const { return m_instanceIdentity; }
    inline bool InstanceIdentityHasBeenSet() const { return m_instanceIdentityHasBeenSet; }
    template<typename InstanceIdentityT = InstanceIdentity>
    void SetInstanceIdentity(InstanceIdentityT&& value) { m_instanceIdentityHasBeenSet = true; m_instanceIdentity = std::forward<InstanceIdentityT>(value); }
    template<typename InstanceIdentityT = InstanceIdentity>
    RegisterInstanceRequest& WithInstanceIdentity(InstanceIdentityT&& value) { SetInstanceIdentity(std::forward<InstanceIdentityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::String m_privateIp;
    bool m_privateIpHasBeenSet = false;

    Aws::String m_rsaPublicKey;
    bool m_rsaPublicKeyHasBeenSet = false;

    Aws::String m_rsaPublicKeyFingerprint;
    bool m_rsaPublicKeyFingerprintHasBeenSet = false;

    InstanceIdentity m_instanceIdentity;
    bool m_instanceIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
