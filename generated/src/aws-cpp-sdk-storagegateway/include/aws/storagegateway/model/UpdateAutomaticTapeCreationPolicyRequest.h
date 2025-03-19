/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/AutomaticTapeCreationRule.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class UpdateAutomaticTapeCreationPolicyRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateAutomaticTapeCreationPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAutomaticTapeCreationPolicy"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. The rules determine when and how to automatically create new
     * tapes.</p>
     */
    inline const Aws::Vector<AutomaticTapeCreationRule>& GetAutomaticTapeCreationRules() const { return m_automaticTapeCreationRules; }
    inline bool AutomaticTapeCreationRulesHasBeenSet() const { return m_automaticTapeCreationRulesHasBeenSet; }
    template<typename AutomaticTapeCreationRulesT = Aws::Vector<AutomaticTapeCreationRule>>
    void SetAutomaticTapeCreationRules(AutomaticTapeCreationRulesT&& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules = std::forward<AutomaticTapeCreationRulesT>(value); }
    template<typename AutomaticTapeCreationRulesT = Aws::Vector<AutomaticTapeCreationRule>>
    UpdateAutomaticTapeCreationPolicyRequest& WithAutomaticTapeCreationRules(AutomaticTapeCreationRulesT&& value) { SetAutomaticTapeCreationRules(std::forward<AutomaticTapeCreationRulesT>(value)); return *this;}
    template<typename AutomaticTapeCreationRulesT = AutomaticTapeCreationRule>
    UpdateAutomaticTapeCreationPolicyRequest& AddAutomaticTapeCreationRules(AutomaticTapeCreationRulesT&& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules.emplace_back(std::forward<AutomaticTapeCreationRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    UpdateAutomaticTapeCreationPolicyRequest& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomaticTapeCreationRule> m_automaticTapeCreationRules;
    bool m_automaticTapeCreationRulesHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
