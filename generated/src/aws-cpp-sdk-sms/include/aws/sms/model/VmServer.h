/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/VmServerAddress.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/VmManagerType.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Represents a VM server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/VmServer">AWS API
   * Reference</a></p>
   */
  class VmServer
  {
  public:
    AWS_SMS_API VmServer();
    AWS_SMS_API VmServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API VmServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The VM server location.</p>
     */
    inline const VmServerAddress& GetVmServerAddress() const{ return m_vmServerAddress; }
    inline bool VmServerAddressHasBeenSet() const { return m_vmServerAddressHasBeenSet; }
    inline void SetVmServerAddress(const VmServerAddress& value) { m_vmServerAddressHasBeenSet = true; m_vmServerAddress = value; }
    inline void SetVmServerAddress(VmServerAddress&& value) { m_vmServerAddressHasBeenSet = true; m_vmServerAddress = std::move(value); }
    inline VmServer& WithVmServerAddress(const VmServerAddress& value) { SetVmServerAddress(value); return *this;}
    inline VmServer& WithVmServerAddress(VmServerAddress&& value) { SetVmServerAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VM.</p>
     */
    inline const Aws::String& GetVmName() const{ return m_vmName; }
    inline bool VmNameHasBeenSet() const { return m_vmNameHasBeenSet; }
    inline void SetVmName(const Aws::String& value) { m_vmNameHasBeenSet = true; m_vmName = value; }
    inline void SetVmName(Aws::String&& value) { m_vmNameHasBeenSet = true; m_vmName = std::move(value); }
    inline void SetVmName(const char* value) { m_vmNameHasBeenSet = true; m_vmName.assign(value); }
    inline VmServer& WithVmName(const Aws::String& value) { SetVmName(value); return *this;}
    inline VmServer& WithVmName(Aws::String&& value) { SetVmName(std::move(value)); return *this;}
    inline VmServer& WithVmName(const char* value) { SetVmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerName() const{ return m_vmManagerName; }
    inline bool VmManagerNameHasBeenSet() const { return m_vmManagerNameHasBeenSet; }
    inline void SetVmManagerName(const Aws::String& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = value; }
    inline void SetVmManagerName(Aws::String&& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = std::move(value); }
    inline void SetVmManagerName(const char* value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName.assign(value); }
    inline VmServer& WithVmManagerName(const Aws::String& value) { SetVmManagerName(value); return *this;}
    inline VmServer& WithVmManagerName(Aws::String&& value) { SetVmManagerName(std::move(value)); return *this;}
    inline VmServer& WithVmManagerName(const char* value) { SetVmManagerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VM management product.</p>
     */
    inline const VmManagerType& GetVmManagerType() const{ return m_vmManagerType; }
    inline bool VmManagerTypeHasBeenSet() const { return m_vmManagerTypeHasBeenSet; }
    inline void SetVmManagerType(const VmManagerType& value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = value; }
    inline void SetVmManagerType(VmManagerType&& value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = std::move(value); }
    inline VmServer& WithVmManagerType(const VmManagerType& value) { SetVmManagerType(value); return *this;}
    inline VmServer& WithVmManagerType(VmManagerType&& value) { SetVmManagerType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VM folder path in the vCenter Server virtual machine inventory tree.</p>
     */
    inline const Aws::String& GetVmPath() const{ return m_vmPath; }
    inline bool VmPathHasBeenSet() const { return m_vmPathHasBeenSet; }
    inline void SetVmPath(const Aws::String& value) { m_vmPathHasBeenSet = true; m_vmPath = value; }
    inline void SetVmPath(Aws::String&& value) { m_vmPathHasBeenSet = true; m_vmPath = std::move(value); }
    inline void SetVmPath(const char* value) { m_vmPathHasBeenSet = true; m_vmPath.assign(value); }
    inline VmServer& WithVmPath(const Aws::String& value) { SetVmPath(value); return *this;}
    inline VmServer& WithVmPath(Aws::String&& value) { SetVmPath(std::move(value)); return *this;}
    inline VmServer& WithVmPath(const char* value) { SetVmPath(value); return *this;}
    ///@}
  private:

    VmServerAddress m_vmServerAddress;
    bool m_vmServerAddressHasBeenSet = false;

    Aws::String m_vmName;
    bool m_vmNameHasBeenSet = false;

    Aws::String m_vmManagerName;
    bool m_vmManagerNameHasBeenSet = false;

    VmManagerType m_vmManagerType;
    bool m_vmManagerTypeHasBeenSet = false;

    Aws::String m_vmPath;
    bool m_vmPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
