/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/AutomaticTapeCreationRule.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Information about the gateway's automatic tape creation policies, including
   * the automatic tape creation rules and the gateway that is using the
   * policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AutomaticTapeCreationPolicyInfo">AWS
   * API Reference</a></p>
   */
  class AutomaticTapeCreationPolicyInfo
  {
  public:
    AWS_STORAGEGATEWAY_API AutomaticTapeCreationPolicyInfo() = default;
    AWS_STORAGEGATEWAY_API AutomaticTapeCreationPolicyInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API AutomaticTapeCreationPolicyInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An automatic tape creation policy consists of a list of automatic tape
     * creation rules. This returns the rules that determine when and how to
     * automatically create new tapes.</p>
     */
    inline const Aws::Vector<AutomaticTapeCreationRule>& GetAutomaticTapeCreationRules() const { return m_automaticTapeCreationRules; }
    inline bool AutomaticTapeCreationRulesHasBeenSet() const { return m_automaticTapeCreationRulesHasBeenSet; }
    template<typename AutomaticTapeCreationRulesT = Aws::Vector<AutomaticTapeCreationRule>>
    void SetAutomaticTapeCreationRules(AutomaticTapeCreationRulesT&& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules = std::forward<AutomaticTapeCreationRulesT>(value); }
    template<typename AutomaticTapeCreationRulesT = Aws::Vector<AutomaticTapeCreationRule>>
    AutomaticTapeCreationPolicyInfo& WithAutomaticTapeCreationRules(AutomaticTapeCreationRulesT&& value) { SetAutomaticTapeCreationRules(std::forward<AutomaticTapeCreationRulesT>(value)); return *this;}
    template<typename AutomaticTapeCreationRulesT = AutomaticTapeCreationRule>
    AutomaticTapeCreationPolicyInfo& AddAutomaticTapeCreationRules(AutomaticTapeCreationRulesT&& value) { m_automaticTapeCreationRulesHasBeenSet = true; m_automaticTapeCreationRules.emplace_back(std::forward<AutomaticTapeCreationRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    AutomaticTapeCreationPolicyInfo& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
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
