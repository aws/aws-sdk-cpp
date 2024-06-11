/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace mgn
{
namespace Model
{

  /**
   * <p>Identification hints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/IdentificationHints">AWS
   * API Reference</a></p>
   */
  class IdentificationHints
  {
  public:
    AWS_MGN_API IdentificationHints();
    AWS_MGN_API IdentificationHints(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API IdentificationHints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>AWS Instance ID identification hint.</p>
     */
    inline const Aws::String& GetAwsInstanceID() const{ return m_awsInstanceID; }
    inline bool AwsInstanceIDHasBeenSet() const { return m_awsInstanceIDHasBeenSet; }
    inline void SetAwsInstanceID(const Aws::String& value) { m_awsInstanceIDHasBeenSet = true; m_awsInstanceID = value; }
    inline void SetAwsInstanceID(Aws::String&& value) { m_awsInstanceIDHasBeenSet = true; m_awsInstanceID = std::move(value); }
    inline void SetAwsInstanceID(const char* value) { m_awsInstanceIDHasBeenSet = true; m_awsInstanceID.assign(value); }
    inline IdentificationHints& WithAwsInstanceID(const Aws::String& value) { SetAwsInstanceID(value); return *this;}
    inline IdentificationHints& WithAwsInstanceID(Aws::String&& value) { SetAwsInstanceID(std::move(value)); return *this;}
    inline IdentificationHints& WithAwsInstanceID(const char* value) { SetAwsInstanceID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>FQDN address identification hint.</p>
     */
    inline const Aws::String& GetFqdn() const{ return m_fqdn; }
    inline bool FqdnHasBeenSet() const { return m_fqdnHasBeenSet; }
    inline void SetFqdn(const Aws::String& value) { m_fqdnHasBeenSet = true; m_fqdn = value; }
    inline void SetFqdn(Aws::String&& value) { m_fqdnHasBeenSet = true; m_fqdn = std::move(value); }
    inline void SetFqdn(const char* value) { m_fqdnHasBeenSet = true; m_fqdn.assign(value); }
    inline IdentificationHints& WithFqdn(const Aws::String& value) { SetFqdn(value); return *this;}
    inline IdentificationHints& WithFqdn(Aws::String&& value) { SetFqdn(std::move(value)); return *this;}
    inline IdentificationHints& WithFqdn(const char* value) { SetFqdn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hostname identification hint.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }
    inline IdentificationHints& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}
    inline IdentificationHints& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}
    inline IdentificationHints& WithHostname(const char* value) { SetHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>vCenter VM path identification hint.</p>
     */
    inline const Aws::String& GetVmPath() const{ return m_vmPath; }
    inline bool VmPathHasBeenSet() const { return m_vmPathHasBeenSet; }
    inline void SetVmPath(const Aws::String& value) { m_vmPathHasBeenSet = true; m_vmPath = value; }
    inline void SetVmPath(Aws::String&& value) { m_vmPathHasBeenSet = true; m_vmPath = std::move(value); }
    inline void SetVmPath(const char* value) { m_vmPathHasBeenSet = true; m_vmPath.assign(value); }
    inline IdentificationHints& WithVmPath(const Aws::String& value) { SetVmPath(value); return *this;}
    inline IdentificationHints& WithVmPath(Aws::String&& value) { SetVmPath(std::move(value)); return *this;}
    inline IdentificationHints& WithVmPath(const char* value) { SetVmPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>vmWare UUID identification hint.</p>
     */
    inline const Aws::String& GetVmWareUuid() const{ return m_vmWareUuid; }
    inline bool VmWareUuidHasBeenSet() const { return m_vmWareUuidHasBeenSet; }
    inline void SetVmWareUuid(const Aws::String& value) { m_vmWareUuidHasBeenSet = true; m_vmWareUuid = value; }
    inline void SetVmWareUuid(Aws::String&& value) { m_vmWareUuidHasBeenSet = true; m_vmWareUuid = std::move(value); }
    inline void SetVmWareUuid(const char* value) { m_vmWareUuidHasBeenSet = true; m_vmWareUuid.assign(value); }
    inline IdentificationHints& WithVmWareUuid(const Aws::String& value) { SetVmWareUuid(value); return *this;}
    inline IdentificationHints& WithVmWareUuid(Aws::String&& value) { SetVmWareUuid(std::move(value)); return *this;}
    inline IdentificationHints& WithVmWareUuid(const char* value) { SetVmWareUuid(value); return *this;}
    ///@}
  private:

    Aws::String m_awsInstanceID;
    bool m_awsInstanceIDHasBeenSet = false;

    Aws::String m_fqdn;
    bool m_fqdnHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_vmPath;
    bool m_vmPathHasBeenSet = false;

    Aws::String m_vmWareUuid;
    bool m_vmWareUuidHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
