/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/RebootInputDeviceForce.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to reboot an AWS Elemental device.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RebootInputDeviceRequest">AWS
   * API Reference</a></p>
   */
  class RebootInputDeviceRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API RebootInputDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebootInputDevice"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    /**
     * Force a reboot of an input device. If the device is streaming, it will stop
     * streaming and begin rebooting within a few seconds of sending the command. If
     * the device was streaming prior to the reboot, the device will resume streaming
     * when the reboot completes.
     */
    inline const RebootInputDeviceForce& GetForce() const{ return m_force; }

    /**
     * Force a reboot of an input device. If the device is streaming, it will stop
     * streaming and begin rebooting within a few seconds of sending the command. If
     * the device was streaming prior to the reboot, the device will resume streaming
     * when the reboot completes.
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * Force a reboot of an input device. If the device is streaming, it will stop
     * streaming and begin rebooting within a few seconds of sending the command. If
     * the device was streaming prior to the reboot, the device will resume streaming
     * when the reboot completes.
     */
    inline void SetForce(const RebootInputDeviceForce& value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * Force a reboot of an input device. If the device is streaming, it will stop
     * streaming and begin rebooting within a few seconds of sending the command. If
     * the device was streaming prior to the reboot, the device will resume streaming
     * when the reboot completes.
     */
    inline void SetForce(RebootInputDeviceForce&& value) { m_forceHasBeenSet = true; m_force = std::move(value); }

    /**
     * Force a reboot of an input device. If the device is streaming, it will stop
     * streaming and begin rebooting within a few seconds of sending the command. If
     * the device was streaming prior to the reboot, the device will resume streaming
     * when the reboot completes.
     */
    inline RebootInputDeviceRequest& WithForce(const RebootInputDeviceForce& value) { SetForce(value); return *this;}

    /**
     * Force a reboot of an input device. If the device is streaming, it will stop
     * streaming and begin rebooting within a few seconds of sending the command. If
     * the device was streaming prior to the reboot, the device will resume streaming
     * when the reboot completes.
     */
    inline RebootInputDeviceRequest& WithForce(RebootInputDeviceForce&& value) { SetForce(std::move(value)); return *this;}


    /**
     * The unique ID of the input device to reboot. For example, hd-123456789abcdef.
     */
    inline const Aws::String& GetInputDeviceId() const{ return m_inputDeviceId; }

    /**
     * The unique ID of the input device to reboot. For example, hd-123456789abcdef.
     */
    inline bool InputDeviceIdHasBeenSet() const { return m_inputDeviceIdHasBeenSet; }

    /**
     * The unique ID of the input device to reboot. For example, hd-123456789abcdef.
     */
    inline void SetInputDeviceId(const Aws::String& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = value; }

    /**
     * The unique ID of the input device to reboot. For example, hd-123456789abcdef.
     */
    inline void SetInputDeviceId(Aws::String&& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = std::move(value); }

    /**
     * The unique ID of the input device to reboot. For example, hd-123456789abcdef.
     */
    inline void SetInputDeviceId(const char* value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId.assign(value); }

    /**
     * The unique ID of the input device to reboot. For example, hd-123456789abcdef.
     */
    inline RebootInputDeviceRequest& WithInputDeviceId(const Aws::String& value) { SetInputDeviceId(value); return *this;}

    /**
     * The unique ID of the input device to reboot. For example, hd-123456789abcdef.
     */
    inline RebootInputDeviceRequest& WithInputDeviceId(Aws::String&& value) { SetInputDeviceId(std::move(value)); return *this;}

    /**
     * The unique ID of the input device to reboot. For example, hd-123456789abcdef.
     */
    inline RebootInputDeviceRequest& WithInputDeviceId(const char* value) { SetInputDeviceId(value); return *this;}

  private:

    RebootInputDeviceForce m_force;
    bool m_forceHasBeenSet = false;

    Aws::String m_inputDeviceId;
    bool m_inputDeviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
