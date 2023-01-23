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
    AWS_MEDIALIVE_API TransferringInputDeviceSummary();
    AWS_MEDIALIVE_API TransferringInputDeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API TransferringInputDeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The unique ID of the input device.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique ID of the input device.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The unique ID of the input device.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique ID of the input device.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique ID of the input device.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique ID of the input device.
     */
    inline TransferringInputDeviceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique ID of the input device.
     */
    inline TransferringInputDeviceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique ID of the input device.
     */
    inline TransferringInputDeviceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The optional message that the sender has attached to the transfer.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * The optional message that the sender has attached to the transfer.
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * The optional message that the sender has attached to the transfer.
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * The optional message that the sender has attached to the transfer.
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * The optional message that the sender has attached to the transfer.
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * The optional message that the sender has attached to the transfer.
     */
    inline TransferringInputDeviceSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * The optional message that the sender has attached to the transfer.
     */
    inline TransferringInputDeviceSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * The optional message that the sender has attached to the transfer.
     */
    inline TransferringInputDeviceSummary& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * The AWS account ID for the recipient of the input device transfer.
     */
    inline const Aws::String& GetTargetCustomerId() const{ return m_targetCustomerId; }

    /**
     * The AWS account ID for the recipient of the input device transfer.
     */
    inline bool TargetCustomerIdHasBeenSet() const { return m_targetCustomerIdHasBeenSet; }

    /**
     * The AWS account ID for the recipient of the input device transfer.
     */
    inline void SetTargetCustomerId(const Aws::String& value) { m_targetCustomerIdHasBeenSet = true; m_targetCustomerId = value; }

    /**
     * The AWS account ID for the recipient of the input device transfer.
     */
    inline void SetTargetCustomerId(Aws::String&& value) { m_targetCustomerIdHasBeenSet = true; m_targetCustomerId = std::move(value); }

    /**
     * The AWS account ID for the recipient of the input device transfer.
     */
    inline void SetTargetCustomerId(const char* value) { m_targetCustomerIdHasBeenSet = true; m_targetCustomerId.assign(value); }

    /**
     * The AWS account ID for the recipient of the input device transfer.
     */
    inline TransferringInputDeviceSummary& WithTargetCustomerId(const Aws::String& value) { SetTargetCustomerId(value); return *this;}

    /**
     * The AWS account ID for the recipient of the input device transfer.
     */
    inline TransferringInputDeviceSummary& WithTargetCustomerId(Aws::String&& value) { SetTargetCustomerId(std::move(value)); return *this;}

    /**
     * The AWS account ID for the recipient of the input device transfer.
     */
    inline TransferringInputDeviceSummary& WithTargetCustomerId(const char* value) { SetTargetCustomerId(value); return *this;}


    /**
     * The type (direction) of the input device transfer.
     */
    inline const InputDeviceTransferType& GetTransferType() const{ return m_transferType; }

    /**
     * The type (direction) of the input device transfer.
     */
    inline bool TransferTypeHasBeenSet() const { return m_transferTypeHasBeenSet; }

    /**
     * The type (direction) of the input device transfer.
     */
    inline void SetTransferType(const InputDeviceTransferType& value) { m_transferTypeHasBeenSet = true; m_transferType = value; }

    /**
     * The type (direction) of the input device transfer.
     */
    inline void SetTransferType(InputDeviceTransferType&& value) { m_transferTypeHasBeenSet = true; m_transferType = std::move(value); }

    /**
     * The type (direction) of the input device transfer.
     */
    inline TransferringInputDeviceSummary& WithTransferType(const InputDeviceTransferType& value) { SetTransferType(value); return *this;}

    /**
     * The type (direction) of the input device transfer.
     */
    inline TransferringInputDeviceSummary& WithTransferType(InputDeviceTransferType&& value) { SetTransferType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_targetCustomerId;
    bool m_targetCustomerIdHasBeenSet = false;

    InputDeviceTransferType m_transferType;
    bool m_transferTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
