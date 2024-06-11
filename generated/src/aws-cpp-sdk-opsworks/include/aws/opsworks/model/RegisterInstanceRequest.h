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
    AWS_OPSWORKS_API RegisterInstanceRequest();

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
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline RegisterInstanceRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline RegisterInstanceRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline RegisterInstanceRequest& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's host name. The following are character limits for instance
     * host names.</p> <ul> <li> <p>Linux-based instances: 63 characters</p> </li> <li>
     * <p>Windows-based instances: 15 characters</p> </li> </ul>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }
    inline RegisterInstanceRequest& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}
    inline RegisterInstanceRequest& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}
    inline RegisterInstanceRequest& WithHostname(const char* value) { SetHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's public IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }
    inline RegisterInstanceRequest& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}
    inline RegisterInstanceRequest& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}
    inline RegisterInstanceRequest& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's private IP address.</p>
     */
    inline const Aws::String& GetPrivateIp() const{ return m_privateIp; }
    inline bool PrivateIpHasBeenSet() const { return m_privateIpHasBeenSet; }
    inline void SetPrivateIp(const Aws::String& value) { m_privateIpHasBeenSet = true; m_privateIp = value; }
    inline void SetPrivateIp(Aws::String&& value) { m_privateIpHasBeenSet = true; m_privateIp = std::move(value); }
    inline void SetPrivateIp(const char* value) { m_privateIpHasBeenSet = true; m_privateIp.assign(value); }
    inline RegisterInstanceRequest& WithPrivateIp(const Aws::String& value) { SetPrivateIp(value); return *this;}
    inline RegisterInstanceRequest& WithPrivateIp(Aws::String&& value) { SetPrivateIp(std::move(value)); return *this;}
    inline RegisterInstanceRequest& WithPrivateIp(const char* value) { SetPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instances public RSA key. This key is used to encrypt communication
     * between the instance and the service.</p>
     */
    inline const Aws::String& GetRsaPublicKey() const{ return m_rsaPublicKey; }
    inline bool RsaPublicKeyHasBeenSet() const { return m_rsaPublicKeyHasBeenSet; }
    inline void SetRsaPublicKey(const Aws::String& value) { m_rsaPublicKeyHasBeenSet = true; m_rsaPublicKey = value; }
    inline void SetRsaPublicKey(Aws::String&& value) { m_rsaPublicKeyHasBeenSet = true; m_rsaPublicKey = std::move(value); }
    inline void SetRsaPublicKey(const char* value) { m_rsaPublicKeyHasBeenSet = true; m_rsaPublicKey.assign(value); }
    inline RegisterInstanceRequest& WithRsaPublicKey(const Aws::String& value) { SetRsaPublicKey(value); return *this;}
    inline RegisterInstanceRequest& WithRsaPublicKey(Aws::String&& value) { SetRsaPublicKey(std::move(value)); return *this;}
    inline RegisterInstanceRequest& WithRsaPublicKey(const char* value) { SetRsaPublicKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instances public RSA key fingerprint.</p>
     */
    inline const Aws::String& GetRsaPublicKeyFingerprint() const{ return m_rsaPublicKeyFingerprint; }
    inline bool RsaPublicKeyFingerprintHasBeenSet() const { return m_rsaPublicKeyFingerprintHasBeenSet; }
    inline void SetRsaPublicKeyFingerprint(const Aws::String& value) { m_rsaPublicKeyFingerprintHasBeenSet = true; m_rsaPublicKeyFingerprint = value; }
    inline void SetRsaPublicKeyFingerprint(Aws::String&& value) { m_rsaPublicKeyFingerprintHasBeenSet = true; m_rsaPublicKeyFingerprint = std::move(value); }
    inline void SetRsaPublicKeyFingerprint(const char* value) { m_rsaPublicKeyFingerprintHasBeenSet = true; m_rsaPublicKeyFingerprint.assign(value); }
    inline RegisterInstanceRequest& WithRsaPublicKeyFingerprint(const Aws::String& value) { SetRsaPublicKeyFingerprint(value); return *this;}
    inline RegisterInstanceRequest& WithRsaPublicKeyFingerprint(Aws::String&& value) { SetRsaPublicKeyFingerprint(std::move(value)); return *this;}
    inline RegisterInstanceRequest& WithRsaPublicKeyFingerprint(const char* value) { SetRsaPublicKeyFingerprint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An InstanceIdentity object that contains the instance's identity.</p>
     */
    inline const InstanceIdentity& GetInstanceIdentity() const{ return m_instanceIdentity; }
    inline bool InstanceIdentityHasBeenSet() const { return m_instanceIdentityHasBeenSet; }
    inline void SetInstanceIdentity(const InstanceIdentity& value) { m_instanceIdentityHasBeenSet = true; m_instanceIdentity = value; }
    inline void SetInstanceIdentity(InstanceIdentity&& value) { m_instanceIdentityHasBeenSet = true; m_instanceIdentity = std::move(value); }
    inline RegisterInstanceRequest& WithInstanceIdentity(const InstanceIdentity& value) { SetInstanceIdentity(value); return *this;}
    inline RegisterInstanceRequest& WithInstanceIdentity(InstanceIdentity&& value) { SetInstanceIdentity(std::move(value)); return *this;}
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
