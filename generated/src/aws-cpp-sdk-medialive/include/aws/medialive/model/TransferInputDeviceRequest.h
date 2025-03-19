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
    AWS_MEDIALIVE_API TransferInputDeviceRequest() = default;

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
    inline const Aws::String& GetInputDeviceId() const { return m_inputDeviceId; }
    inline bool InputDeviceIdHasBeenSet() const { return m_inputDeviceIdHasBeenSet; }
    template<typename InputDeviceIdT = Aws::String>
    void SetInputDeviceId(InputDeviceIdT&& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = std::forward<InputDeviceIdT>(value); }
    template<typename InputDeviceIdT = Aws::String>
    TransferInputDeviceRequest& WithInputDeviceId(InputDeviceIdT&& value) { SetInputDeviceId(std::forward<InputDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The AWS account ID (12 digits) for the recipient of the device transfer.
     */
    inline const Aws::String& GetTargetCustomerId() const { return m_targetCustomerId; }
    inline bool TargetCustomerIdHasBeenSet() const { return m_targetCustomerIdHasBeenSet; }
    template<typename TargetCustomerIdT = Aws::String>
    void SetTargetCustomerId(TargetCustomerIdT&& value) { m_targetCustomerIdHasBeenSet = true; m_targetCustomerId = std::forward<TargetCustomerIdT>(value); }
    template<typename TargetCustomerIdT = Aws::String>
    TransferInputDeviceRequest& WithTargetCustomerId(TargetCustomerIdT&& value) { SetTargetCustomerId(std::forward<TargetCustomerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The target AWS region to transfer the device.
     */
    inline const Aws::String& GetTargetRegion() const { return m_targetRegion; }
    inline bool TargetRegionHasBeenSet() const { return m_targetRegionHasBeenSet; }
    template<typename TargetRegionT = Aws::String>
    void SetTargetRegion(TargetRegionT&& value) { m_targetRegionHasBeenSet = true; m_targetRegion = std::forward<TargetRegionT>(value); }
    template<typename TargetRegionT = Aws::String>
    TransferInputDeviceRequest& WithTargetRegion(TargetRegionT&& value) { SetTargetRegion(std::forward<TargetRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An optional message for the recipient. Maximum 280 characters.
     */
    inline const Aws::String& GetTransferMessage() const { return m_transferMessage; }
    inline bool TransferMessageHasBeenSet() const { return m_transferMessageHasBeenSet; }
    template<typename TransferMessageT = Aws::String>
    void SetTransferMessage(TransferMessageT&& value) { m_transferMessageHasBeenSet = true; m_transferMessage = std::forward<TransferMessageT>(value); }
    template<typename TransferMessageT = Aws::String>
    TransferInputDeviceRequest& WithTransferMessage(TransferMessageT&& value) { SetTransferMessage(std::forward<TransferMessageT>(value)); return *this;}
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
