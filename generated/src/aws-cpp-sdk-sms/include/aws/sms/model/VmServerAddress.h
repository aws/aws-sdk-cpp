/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Represents a VM server location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/VmServerAddress">AWS
   * API Reference</a></p>
   */
  class VmServerAddress
  {
  public:
    AWS_SMS_API VmServerAddress() = default;
    AWS_SMS_API VmServerAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API VmServerAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerId() const { return m_vmManagerId; }
    inline bool VmManagerIdHasBeenSet() const { return m_vmManagerIdHasBeenSet; }
    template<typename VmManagerIdT = Aws::String>
    void SetVmManagerId(VmManagerIdT&& value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId = std::forward<VmManagerIdT>(value); }
    template<typename VmManagerIdT = Aws::String>
    VmServerAddress& WithVmManagerId(VmManagerIdT&& value) { SetVmManagerId(std::forward<VmManagerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VM.</p>
     */
    inline const Aws::String& GetVmId() const { return m_vmId; }
    inline bool VmIdHasBeenSet() const { return m_vmIdHasBeenSet; }
    template<typename VmIdT = Aws::String>
    void SetVmId(VmIdT&& value) { m_vmIdHasBeenSet = true; m_vmId = std::forward<VmIdT>(value); }
    template<typename VmIdT = Aws::String>
    VmServerAddress& WithVmId(VmIdT&& value) { SetVmId(std::forward<VmIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vmManagerId;
    bool m_vmManagerIdHasBeenSet = false;

    Aws::String m_vmId;
    bool m_vmIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
