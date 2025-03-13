/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputWhitelistRuleCidr.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * The request to update some combination of the Input Security Group name and the
   * IPv4 CIDRs the Input Security Group should allow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputSecurityGroupRequest">AWS
   * API Reference</a></p>
   */
  class UpdateInputSecurityGroupRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateInputSecurityGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInputSecurityGroup"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The id of the Input Security Group to update.
     */
    inline const Aws::String& GetInputSecurityGroupId() const { return m_inputSecurityGroupId; }
    inline bool InputSecurityGroupIdHasBeenSet() const { return m_inputSecurityGroupIdHasBeenSet; }
    template<typename InputSecurityGroupIdT = Aws::String>
    void SetInputSecurityGroupId(InputSecurityGroupIdT&& value) { m_inputSecurityGroupIdHasBeenSet = true; m_inputSecurityGroupId = std::forward<InputSecurityGroupIdT>(value); }
    template<typename InputSecurityGroupIdT = Aws::String>
    UpdateInputSecurityGroupRequest& WithInputSecurityGroupId(InputSecurityGroupIdT&& value) { SetInputSecurityGroupId(std::forward<InputSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * List of IPv4 CIDR addresses to whitelist
     */
    inline const Aws::Vector<InputWhitelistRuleCidr>& GetWhitelistRules() const { return m_whitelistRules; }
    inline bool WhitelistRulesHasBeenSet() const { return m_whitelistRulesHasBeenSet; }
    template<typename WhitelistRulesT = Aws::Vector<InputWhitelistRuleCidr>>
    void SetWhitelistRules(WhitelistRulesT&& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules = std::forward<WhitelistRulesT>(value); }
    template<typename WhitelistRulesT = Aws::Vector<InputWhitelistRuleCidr>>
    UpdateInputSecurityGroupRequest& WithWhitelistRules(WhitelistRulesT&& value) { SetWhitelistRules(std::forward<WhitelistRulesT>(value)); return *this;}
    template<typename WhitelistRulesT = InputWhitelistRuleCidr>
    UpdateInputSecurityGroupRequest& AddWhitelistRules(WhitelistRulesT&& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules.emplace_back(std::forward<WhitelistRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_inputSecurityGroupId;
    bool m_inputSecurityGroupIdHasBeenSet = false;

    Aws::Vector<InputWhitelistRuleCidr> m_whitelistRules;
    bool m_whitelistRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
