/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/Address.h>
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
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about a request to return a network resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ReturnInformation">AWS
   * API Reference</a></p>
   */
  class ReturnInformation
  {
  public:
    AWS_PRIVATENETWORKS_API ReturnInformation();
    AWS_PRIVATENETWORKS_API ReturnInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API ReturnInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the replacement order.</p>
     */
    inline const Aws::String& GetReplacementOrderArn() const{ return m_replacementOrderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replacement order.</p>
     */
    inline bool ReplacementOrderArnHasBeenSet() const { return m_replacementOrderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replacement order.</p>
     */
    inline void SetReplacementOrderArn(const Aws::String& value) { m_replacementOrderArnHasBeenSet = true; m_replacementOrderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replacement order.</p>
     */
    inline void SetReplacementOrderArn(Aws::String&& value) { m_replacementOrderArnHasBeenSet = true; m_replacementOrderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replacement order.</p>
     */
    inline void SetReplacementOrderArn(const char* value) { m_replacementOrderArnHasBeenSet = true; m_replacementOrderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replacement order.</p>
     */
    inline ReturnInformation& WithReplacementOrderArn(const Aws::String& value) { SetReplacementOrderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replacement order.</p>
     */
    inline ReturnInformation& WithReplacementOrderArn(Aws::String&& value) { SetReplacementOrderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replacement order.</p>
     */
    inline ReturnInformation& WithReplacementOrderArn(const char* value) { SetReplacementOrderArn(value); return *this;}


    /**
     * <p>The reason for the return. If the return request did not include a reason for
     * the return, this value is null.</p>
     */
    inline const Aws::String& GetReturnReason() const{ return m_returnReason; }

    /**
     * <p>The reason for the return. If the return request did not include a reason for
     * the return, this value is null.</p>
     */
    inline bool ReturnReasonHasBeenSet() const { return m_returnReasonHasBeenSet; }

    /**
     * <p>The reason for the return. If the return request did not include a reason for
     * the return, this value is null.</p>
     */
    inline void SetReturnReason(const Aws::String& value) { m_returnReasonHasBeenSet = true; m_returnReason = value; }

    /**
     * <p>The reason for the return. If the return request did not include a reason for
     * the return, this value is null.</p>
     */
    inline void SetReturnReason(Aws::String&& value) { m_returnReasonHasBeenSet = true; m_returnReason = std::move(value); }

    /**
     * <p>The reason for the return. If the return request did not include a reason for
     * the return, this value is null.</p>
     */
    inline void SetReturnReason(const char* value) { m_returnReasonHasBeenSet = true; m_returnReason.assign(value); }

    /**
     * <p>The reason for the return. If the return request did not include a reason for
     * the return, this value is null.</p>
     */
    inline ReturnInformation& WithReturnReason(const Aws::String& value) { SetReturnReason(value); return *this;}

    /**
     * <p>The reason for the return. If the return request did not include a reason for
     * the return, this value is null.</p>
     */
    inline ReturnInformation& WithReturnReason(Aws::String&& value) { SetReturnReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the return. If the return request did not include a reason for
     * the return, this value is null.</p>
     */
    inline ReturnInformation& WithReturnReason(const char* value) { SetReturnReason(value); return *this;}


    /**
     * <p>The shipping address.</p>
     */
    inline const Address& GetShippingAddress() const{ return m_shippingAddress; }

    /**
     * <p>The shipping address.</p>
     */
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }

    /**
     * <p>The shipping address.</p>
     */
    inline void SetShippingAddress(const Address& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = value; }

    /**
     * <p>The shipping address.</p>
     */
    inline void SetShippingAddress(Address&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::move(value); }

    /**
     * <p>The shipping address.</p>
     */
    inline ReturnInformation& WithShippingAddress(const Address& value) { SetShippingAddress(value); return *this;}

    /**
     * <p>The shipping address.</p>
     */
    inline ReturnInformation& WithShippingAddress(Address&& value) { SetShippingAddress(std::move(value)); return *this;}


    /**
     * <p>The URL of the shipping label. The shipping label is available for download
     * only if the status of the network resource is <code>PENDING_RETURN</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html#return-radio-unit">Return
     * a radio unit</a>.</p>
     */
    inline const Aws::String& GetShippingLabel() const{ return m_shippingLabel; }

    /**
     * <p>The URL of the shipping label. The shipping label is available for download
     * only if the status of the network resource is <code>PENDING_RETURN</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html#return-radio-unit">Return
     * a radio unit</a>.</p>
     */
    inline bool ShippingLabelHasBeenSet() const { return m_shippingLabelHasBeenSet; }

    /**
     * <p>The URL of the shipping label. The shipping label is available for download
     * only if the status of the network resource is <code>PENDING_RETURN</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html#return-radio-unit">Return
     * a radio unit</a>.</p>
     */
    inline void SetShippingLabel(const Aws::String& value) { m_shippingLabelHasBeenSet = true; m_shippingLabel = value; }

    /**
     * <p>The URL of the shipping label. The shipping label is available for download
     * only if the status of the network resource is <code>PENDING_RETURN</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html#return-radio-unit">Return
     * a radio unit</a>.</p>
     */
    inline void SetShippingLabel(Aws::String&& value) { m_shippingLabelHasBeenSet = true; m_shippingLabel = std::move(value); }

    /**
     * <p>The URL of the shipping label. The shipping label is available for download
     * only if the status of the network resource is <code>PENDING_RETURN</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html#return-radio-unit">Return
     * a radio unit</a>.</p>
     */
    inline void SetShippingLabel(const char* value) { m_shippingLabelHasBeenSet = true; m_shippingLabel.assign(value); }

    /**
     * <p>The URL of the shipping label. The shipping label is available for download
     * only if the status of the network resource is <code>PENDING_RETURN</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html#return-radio-unit">Return
     * a radio unit</a>.</p>
     */
    inline ReturnInformation& WithShippingLabel(const Aws::String& value) { SetShippingLabel(value); return *this;}

    /**
     * <p>The URL of the shipping label. The shipping label is available for download
     * only if the status of the network resource is <code>PENDING_RETURN</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html#return-radio-unit">Return
     * a radio unit</a>.</p>
     */
    inline ReturnInformation& WithShippingLabel(Aws::String&& value) { SetShippingLabel(std::move(value)); return *this;}

    /**
     * <p>The URL of the shipping label. The shipping label is available for download
     * only if the status of the network resource is <code>PENDING_RETURN</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html#return-radio-unit">Return
     * a radio unit</a>.</p>
     */
    inline ReturnInformation& WithShippingLabel(const char* value) { SetShippingLabel(value); return *this;}

  private:

    Aws::String m_replacementOrderArn;
    bool m_replacementOrderArnHasBeenSet = false;

    Aws::String m_returnReason;
    bool m_returnReasonHasBeenSet = false;

    Address m_shippingAddress;
    bool m_shippingAddressHasBeenSet = false;

    Aws::String m_shippingLabel;
    bool m_shippingLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
