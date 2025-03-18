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
    AWS_SMS_API VmServer() = default;
    AWS_SMS_API VmServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API VmServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The VM server location.</p>
     */
    inline const VmServerAddress& GetVmServerAddress() const { return m_vmServerAddress; }
    inline bool VmServerAddressHasBeenSet() const { return m_vmServerAddressHasBeenSet; }
    template<typename VmServerAddressT = VmServerAddress>
    void SetVmServerAddress(VmServerAddressT&& value) { m_vmServerAddressHasBeenSet = true; m_vmServerAddress = std::forward<VmServerAddressT>(value); }
    template<typename VmServerAddressT = VmServerAddress>
    VmServer& WithVmServerAddress(VmServerAddressT&& value) { SetVmServerAddress(std::forward<VmServerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VM.</p>
     */
    inline const Aws::String& GetVmName() const { return m_vmName; }
    inline bool VmNameHasBeenSet() const { return m_vmNameHasBeenSet; }
    template<typename VmNameT = Aws::String>
    void SetVmName(VmNameT&& value) { m_vmNameHasBeenSet = true; m_vmName = std::forward<VmNameT>(value); }
    template<typename VmNameT = Aws::String>
    VmServer& WithVmName(VmNameT&& value) { SetVmName(std::forward<VmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerName() const { return m_vmManagerName; }
    inline bool VmManagerNameHasBeenSet() const { return m_vmManagerNameHasBeenSet; }
    template<typename VmManagerNameT = Aws::String>
    void SetVmManagerName(VmManagerNameT&& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = std::forward<VmManagerNameT>(value); }
    template<typename VmManagerNameT = Aws::String>
    VmServer& WithVmManagerName(VmManagerNameT&& value) { SetVmManagerName(std::forward<VmManagerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VM management product.</p>
     */
    inline VmManagerType GetVmManagerType() const { return m_vmManagerType; }
    inline bool VmManagerTypeHasBeenSet() const { return m_vmManagerTypeHasBeenSet; }
    inline void SetVmManagerType(VmManagerType value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = value; }
    inline VmServer& WithVmManagerType(VmManagerType value) { SetVmManagerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VM folder path in the vCenter Server virtual machine inventory tree.</p>
     */
    inline const Aws::String& GetVmPath() const { return m_vmPath; }
    inline bool VmPathHasBeenSet() const { return m_vmPathHasBeenSet; }
    template<typename VmPathT = Aws::String>
    void SetVmPath(VmPathT&& value) { m_vmPathHasBeenSet = true; m_vmPath = std::forward<VmPathT>(value); }
    template<typename VmPathT = Aws::String>
    VmServer& WithVmPath(VmPathT&& value) { SetVmPath(std::forward<VmPathT>(value)); return *this;}
    ///@}
  private:

    VmServerAddress m_vmServerAddress;
    bool m_vmServerAddressHasBeenSet = false;

    Aws::String m_vmName;
    bool m_vmNameHasBeenSet = false;

    Aws::String m_vmManagerName;
    bool m_vmManagerNameHasBeenSet = false;

    VmManagerType m_vmManagerType{VmManagerType::NOT_SET};
    bool m_vmManagerTypeHasBeenSet = false;

    Aws::String m_vmPath;
    bool m_vmPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
