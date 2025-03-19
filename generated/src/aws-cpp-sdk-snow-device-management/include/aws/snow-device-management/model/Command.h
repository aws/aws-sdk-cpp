/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/model/Reboot.h>
#include <aws/snow-device-management/model/Unlock.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>The command given to the device to execute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/Command">AWS
   * API Reference</a></p>
   */
  class Command
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API Command() = default;
    AWS_SNOWDEVICEMANAGEMENT_API Command(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Command& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Reboots the device.</p>
     */
    inline const Reboot& GetReboot() const { return m_reboot; }
    inline bool RebootHasBeenSet() const { return m_rebootHasBeenSet; }
    template<typename RebootT = Reboot>
    void SetReboot(RebootT&& value) { m_rebootHasBeenSet = true; m_reboot = std::forward<RebootT>(value); }
    template<typename RebootT = Reboot>
    Command& WithReboot(RebootT&& value) { SetReboot(std::forward<RebootT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unlocks the device.</p>
     */
    inline const Unlock& GetUnlock() const { return m_unlock; }
    inline bool UnlockHasBeenSet() const { return m_unlockHasBeenSet; }
    template<typename UnlockT = Unlock>
    void SetUnlock(UnlockT&& value) { m_unlockHasBeenSet = true; m_unlock = std::forward<UnlockT>(value); }
    template<typename UnlockT = Unlock>
    Command& WithUnlock(UnlockT&& value) { SetUnlock(std::forward<UnlockT>(value)); return *this;}
    ///@}
  private:

    Reboot m_reboot;
    bool m_rebootHasBeenSet = false;

    Unlock m_unlock;
    bool m_unlockHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
