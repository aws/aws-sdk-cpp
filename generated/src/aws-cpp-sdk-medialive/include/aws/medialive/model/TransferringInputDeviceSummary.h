/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputDeviceTransferType.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Details about the input device that is being transferred.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TransferringInputDeviceSummary">AWS
   * API Reference</a></p>
   */
  class TransferringInputDeviceSummary
  {
  public:
    AWS_MEDIALIVE_API TransferringInputDeviceSummary() = default;
    AWS_MEDIALIVE_API TransferringInputDeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API TransferringInputDeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The unique ID of the input device.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TransferringInputDeviceSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The optional message that the sender has attached to the transfer.
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    TransferringInputDeviceSummary& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The AWS account ID for the recipient of the input device transfer.
     */
    inline const Aws::String& GetTargetCustomerId() const { return m_targetCustomerId; }
    inline bool TargetCustomerIdHasBeenSet() const { return m_targetCustomerIdHasBeenSet; }
    template<typename TargetCustomerIdT = Aws::String>
    void SetTargetCustomerId(TargetCustomerIdT&& value) { m_targetCustomerIdHasBeenSet = true; m_targetCustomerId = std::forward<TargetCustomerIdT>(value); }
    template<typename TargetCustomerIdT = Aws::String>
    TransferringInputDeviceSummary& WithTargetCustomerId(TargetCustomerIdT&& value) { SetTargetCustomerId(std::forward<TargetCustomerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The type (direction) of the input device transfer.
     */
    inline InputDeviceTransferType GetTransferType() const { return m_transferType; }
    inline bool TransferTypeHasBeenSet() const { return m_transferTypeHasBeenSet; }
    inline void SetTransferType(InputDeviceTransferType value) { m_transferTypeHasBeenSet = true; m_transferType = value; }
    inline TransferringInputDeviceSummary& WithTransferType(InputDeviceTransferType value) { SetTransferType(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_targetCustomerId;
    bool m_targetCustomerIdHasBeenSet = false;

    InputDeviceTransferType m_transferType{InputDeviceTransferType::NOT_SET};
    bool m_transferTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
