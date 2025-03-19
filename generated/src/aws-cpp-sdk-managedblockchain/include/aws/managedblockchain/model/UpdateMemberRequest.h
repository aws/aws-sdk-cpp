/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberLogPublishingConfiguration.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class UpdateMemberRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API UpdateMemberRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMember"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the Managed Blockchain network to which the member
     * belongs.</p>
     */
    inline const Aws::String& GetNetworkId() const { return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    template<typename NetworkIdT = Aws::String>
    void SetNetworkId(NetworkIdT&& value) { m_networkIdHasBeenSet = true; m_networkId = std::forward<NetworkIdT>(value); }
    template<typename NetworkIdT = Aws::String>
    UpdateMemberRequest& WithNetworkId(NetworkIdT&& value) { SetNetworkId(std::forward<NetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the member.</p>
     */
    inline const Aws::String& GetMemberId() const { return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    template<typename MemberIdT = Aws::String>
    void SetMemberId(MemberIdT&& value) { m_memberIdHasBeenSet = true; m_memberId = std::forward<MemberIdT>(value); }
    template<typename MemberIdT = Aws::String>
    UpdateMemberRequest& WithMemberId(MemberIdT&& value) { SetMemberId(std::forward<MemberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration properties for publishing to Amazon CloudWatch Logs.</p>
     */
    inline const MemberLogPublishingConfiguration& GetLogPublishingConfiguration() const { return m_logPublishingConfiguration; }
    inline bool LogPublishingConfigurationHasBeenSet() const { return m_logPublishingConfigurationHasBeenSet; }
    template<typename LogPublishingConfigurationT = MemberLogPublishingConfiguration>
    void SetLogPublishingConfiguration(LogPublishingConfigurationT&& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = std::forward<LogPublishingConfigurationT>(value); }
    template<typename LogPublishingConfigurationT = MemberLogPublishingConfiguration>
    UpdateMemberRequest& WithLogPublishingConfiguration(LogPublishingConfigurationT&& value) { SetLogPublishingConfiguration(std::forward<LogPublishingConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    MemberLogPublishingConfiguration m_logPublishingConfiguration;
    bool m_logPublishingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
