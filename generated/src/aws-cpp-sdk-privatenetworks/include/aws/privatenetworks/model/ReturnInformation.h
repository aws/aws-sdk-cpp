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
    AWS_PRIVATENETWORKS_API ReturnInformation() = default;
    AWS_PRIVATENETWORKS_API ReturnInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API ReturnInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replacement order.</p>
     */
    inline const Aws::String& GetReplacementOrderArn() const { return m_replacementOrderArn; }
    inline bool ReplacementOrderArnHasBeenSet() const { return m_replacementOrderArnHasBeenSet; }
    template<typename ReplacementOrderArnT = Aws::String>
    void SetReplacementOrderArn(ReplacementOrderArnT&& value) { m_replacementOrderArnHasBeenSet = true; m_replacementOrderArn = std::forward<ReplacementOrderArnT>(value); }
    template<typename ReplacementOrderArnT = Aws::String>
    ReturnInformation& WithReplacementOrderArn(ReplacementOrderArnT&& value) { SetReplacementOrderArn(std::forward<ReplacementOrderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the return. If the return request did not include a reason for
     * the return, this value is null.</p>
     */
    inline const Aws::String& GetReturnReason() const { return m_returnReason; }
    inline bool ReturnReasonHasBeenSet() const { return m_returnReasonHasBeenSet; }
    template<typename ReturnReasonT = Aws::String>
    void SetReturnReason(ReturnReasonT&& value) { m_returnReasonHasBeenSet = true; m_returnReason = std::forward<ReturnReasonT>(value); }
    template<typename ReturnReasonT = Aws::String>
    ReturnInformation& WithReturnReason(ReturnReasonT&& value) { SetReturnReason(std::forward<ReturnReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shipping address.</p>
     */
    inline const Address& GetShippingAddress() const { return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    template<typename ShippingAddressT = Address>
    void SetShippingAddress(ShippingAddressT&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::forward<ShippingAddressT>(value); }
    template<typename ShippingAddressT = Address>
    ReturnInformation& WithShippingAddress(ShippingAddressT&& value) { SetShippingAddress(std::forward<ShippingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the shipping label. The shipping label is available for download
     * only if the status of the network resource is <code>PENDING_RETURN</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html#return-radio-unit">Return
     * a radio unit</a>.</p>
     */
    inline const Aws::String& GetShippingLabel() const { return m_shippingLabel; }
    inline bool ShippingLabelHasBeenSet() const { return m_shippingLabelHasBeenSet; }
    template<typename ShippingLabelT = Aws::String>
    void SetShippingLabel(ShippingLabelT&& value) { m_shippingLabelHasBeenSet = true; m_shippingLabel = std::forward<ShippingLabelT>(value); }
    template<typename ShippingLabelT = Aws::String>
    ReturnInformation& WithShippingLabel(ShippingLabelT&& value) { SetShippingLabel(std::forward<ShippingLabelT>(value)); return *this;}
    ///@}
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
