/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to transfer an input device.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TransferInputDeviceRequest">AWS
   * API Reference</a></p>
   */
  class TransferInputDeviceRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API TransferInputDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TransferInputDevice"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The unique ID of this input device. For example, hd-123456789abcdef.
     */
    inline const Aws::String& GetInputDeviceId() const{ return m_inputDeviceId; }
    inline bool InputDeviceIdHasBeenSet() const { return m_inputDeviceIdHasBeenSet; }
    inline void SetInputDeviceId(const Aws::String& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = value; }
    inline void SetInputDeviceId(Aws::String&& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = std::move(value); }
    inline void SetInputDeviceId(const char* value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId.assign(value); }
    inline TransferInputDeviceRequest& WithInputDeviceId(const Aws::String& value) { SetInputDeviceId(value); return *this;}
    inline TransferInputDeviceRequest& WithInputDeviceId(Aws::String&& value) { SetInputDeviceId(std::move(value)); return *this;}
    inline TransferInputDeviceRequest& WithInputDeviceId(const char* value) { SetInputDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * The AWS account ID (12 digits) for the recipient of the device transfer.
     */
    inline const Aws::String& GetTargetCustomerId() const{ return m_targetCustomerId; }
    inline bool TargetCustomerIdHasBeenSet() const { return m_targetCustomerIdHasBeenSet; }
    inline void SetTargetCustomerId(const Aws::String& value) { m_targetCustomerIdHasBeenSet = true; m_targetCustomerId = value; }
    inline void SetTargetCustomerId(Aws::String&& value) { m_targetCustomerIdHasBeenSet = true; m_targetCustomerId = std::move(value); }
    inline void SetTargetCustomerId(const char* value) { m_targetCustomerIdHasBeenSet = true; m_targetCustomerId.assign(value); }
    inline TransferInputDeviceRequest& WithTargetCustomerId(const Aws::String& value) { SetTargetCustomerId(value); return *this;}
    inline TransferInputDeviceRequest& WithTargetCustomerId(Aws::String&& value) { SetTargetCustomerId(std::move(value)); return *this;}
    inline TransferInputDeviceRequest& WithTargetCustomerId(const char* value) { SetTargetCustomerId(value); return *this;}
    ///@}

    ///@{
    /**
     * The target AWS region to transfer the device.
     */
    inline const Aws::String& GetTargetRegion() const{ return m_targetRegion; }
    inline bool TargetRegionHasBeenSet() const { return m_targetRegionHasBeenSet; }
    inline void SetTargetRegion(const Aws::String& value) { m_targetRegionHasBeenSet = true; m_targetRegion = value; }
    inline void SetTargetRegion(Aws::String&& value) { m_targetRegionHasBeenSet = true; m_targetRegion = std::move(value); }
    inline void SetTargetRegion(const char* value) { m_targetRegionHasBeenSet = true; m_targetRegion.assign(value); }
    inline TransferInputDeviceRequest& WithTargetRegion(const Aws::String& value) { SetTargetRegion(value); return *this;}
    inline TransferInputDeviceRequest& WithTargetRegion(Aws::String&& value) { SetTargetRegion(std::move(value)); return *this;}
    inline TransferInputDeviceRequest& WithTargetRegion(const char* value) { SetTargetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * An optional message for the recipient. Maximum 280 characters.
     */
    inline const Aws::String& GetTransferMessage() const{ return m_transferMessage; }
    inline bool TransferMessageHasBeenSet() const { return m_transferMessageHasBeenSet; }
    inline void SetTransferMessage(const Aws::String& value) { m_transferMessageHasBeenSet = true; m_transferMessage = value; }
    inline void SetTransferMessage(Aws::String&& value) { m_transferMessageHasBeenSet = true; m_transferMessage = std::move(value); }
    inline void SetTransferMessage(const char* value) { m_transferMessageHasBeenSet = true; m_transferMessage.assign(value); }
    inline TransferInputDeviceRequest& WithTransferMessage(const Aws::String& value) { SetTransferMessage(value); return *this;}
    inline TransferInputDeviceRequest& WithTransferMessage(Aws::String&& value) { SetTransferMessage(std::move(value)); return *this;}
    inline TransferInputDeviceRequest& WithTransferMessage(const char* value) { SetTransferMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_inputDeviceId;
    bool m_inputDeviceIdHasBeenSet = false;

    Aws::String m_targetCustomerId;
    bool m_targetCustomerIdHasBeenSet = false;

    Aws::String m_targetRegion;
    bool m_targetRegionHasBeenSet = false;

    Aws::String m_transferMessage;
    bool m_transferMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
