/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/privatenetworks/model/CommitmentConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/Address.h>
#include <aws/privatenetworks/model/UpdateType.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class StartNetworkResourceUpdateRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API StartNetworkResourceUpdateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartNetworkResourceUpdate"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Use this action to extend and automatically renew the commitment period for
     * the radio unit. You can do the following:</p> <ul> <li> <p>Change a 60-day
     * commitment to a 1-year or 3-year commitment. The change is immediate and the
     * hourly rate decreases to the rate for the new commitment period.</p> </li> <li>
     * <p>Change a 1-year commitment to a 3-year commitment. The change is immediate
     * and the hourly rate decreases to the rate for the 3-year commitment period.</p>
     * </li> <li> <p>Set a 1-year commitment to automatically renew for an additional 1
     * year. The hourly rate for the additional year will continue to be the same as
     * your existing 1-year rate.</p> </li> <li> <p>Set a 3-year commitment to
     * automatically renew for an additional 1 year. The hourly rate for the additional
     * year will continue to be the same as your existing 3-year rate.</p> </li> <li>
     * <p>Turn off a previously-enabled automatic renewal on a 1-year or 3-year
     * commitment. You cannot use the automatic-renewal option for a 60-day
     * commitment.</p> </li> </ul> <p>For pricing, see <a
     * href="http://aws.amazon.com/private5g/pricing">Amazon Web Services Private 5G
     * Pricing</a>.</p>
     */
    inline const CommitmentConfiguration& GetCommitmentConfiguration() const { return m_commitmentConfiguration; }
    inline bool CommitmentConfigurationHasBeenSet() const { return m_commitmentConfigurationHasBeenSet; }
    template<typename CommitmentConfigurationT = CommitmentConfiguration>
    void SetCommitmentConfiguration(CommitmentConfigurationT&& value) { m_commitmentConfigurationHasBeenSet = true; m_commitmentConfiguration = std::forward<CommitmentConfigurationT>(value); }
    template<typename CommitmentConfigurationT = CommitmentConfiguration>
    StartNetworkResourceUpdateRequest& WithCommitmentConfiguration(CommitmentConfigurationT&& value) { SetCommitmentConfiguration(std::forward<CommitmentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline const Aws::String& GetNetworkResourceArn() const { return m_networkResourceArn; }
    inline bool NetworkResourceArnHasBeenSet() const { return m_networkResourceArnHasBeenSet; }
    template<typename NetworkResourceArnT = Aws::String>
    void SetNetworkResourceArn(NetworkResourceArnT&& value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn = std::forward<NetworkResourceArnT>(value); }
    template<typename NetworkResourceArnT = Aws::String>
    StartNetworkResourceUpdateRequest& WithNetworkResourceArn(NetworkResourceArnT&& value) { SetNetworkResourceArn(std::forward<NetworkResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the return. Providing a reason for a return is optional.</p>
     */
    inline const Aws::String& GetReturnReason() const { return m_returnReason; }
    inline bool ReturnReasonHasBeenSet() const { return m_returnReasonHasBeenSet; }
    template<typename ReturnReasonT = Aws::String>
    void SetReturnReason(ReturnReasonT&& value) { m_returnReasonHasBeenSet = true; m_returnReason = std::forward<ReturnReasonT>(value); }
    template<typename ReturnReasonT = Aws::String>
    StartNetworkResourceUpdateRequest& WithReturnReason(ReturnReasonT&& value) { SetReturnReason(std::forward<ReturnReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shipping address. If you don't provide a shipping address when replacing
     * or returning a network resource, we use the address from the original order for
     * the network resource.</p>
     */
    inline const Address& GetShippingAddress() const { return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    template<typename ShippingAddressT = Address>
    void SetShippingAddress(ShippingAddressT&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::forward<ShippingAddressT>(value); }
    template<typename ShippingAddressT = Address>
    StartNetworkResourceUpdateRequest& WithShippingAddress(ShippingAddressT&& value) { SetShippingAddress(std::forward<ShippingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update type.</p> <ul> <li> <p> <code>REPLACE</code> - Submits a request
     * to replace a defective radio unit. We provide a shipping label that you can use
     * for the return process and we ship a replacement radio unit to you.</p> </li>
     * <li> <p> <code>RETURN</code> - Submits a request to return a radio unit that you
     * no longer need. We provide a shipping label that you can use for the return
     * process.</p> </li> <li> <p> <code>COMMITMENT</code> - Submits a request to
     * change or renew the commitment period. If you choose this value, then you must
     * set <a
     * href="https://docs.aws.amazon.com/private-networks/latest/APIReference/API_StartNetworkResourceUpdate.html#privatenetworks-StartNetworkResourceUpdate-request-commitmentConfiguration">
     * <code>commitmentConfiguration</code> </a>.</p> </li> </ul>
     */
    inline UpdateType GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(UpdateType value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline StartNetworkResourceUpdateRequest& WithUpdateType(UpdateType value) { SetUpdateType(value); return *this;}
    ///@}
  private:

    CommitmentConfiguration m_commitmentConfiguration;
    bool m_commitmentConfigurationHasBeenSet = false;

    Aws::String m_networkResourceArn;
    bool m_networkResourceArnHasBeenSet = false;

    Aws::String m_returnReason;
    bool m_returnReasonHasBeenSet = false;

    Address m_shippingAddress;
    bool m_shippingAddressHasBeenSet = false;

    UpdateType m_updateType{UpdateType::NOT_SET};
    bool m_updateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
