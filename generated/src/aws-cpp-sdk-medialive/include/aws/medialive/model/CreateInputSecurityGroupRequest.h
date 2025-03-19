/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputWhitelistRuleCidr.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * The IPv4 CIDRs to whitelist for this Input Security Group<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroupRequest">AWS
   * API Reference</a></p>
   */
  class CreateInputSecurityGroupRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API CreateInputSecurityGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInputSecurityGroup"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateInputSecurityGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateInputSecurityGroupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    CreateInputSecurityGroupRequest& WithWhitelistRules(WhitelistRulesT&& value) { SetWhitelistRules(std::forward<WhitelistRulesT>(value)); return *this;}
    template<typename WhitelistRulesT = InputWhitelistRuleCidr>
    CreateInputSecurityGroupRequest& AddWhitelistRules(WhitelistRulesT&& value) { m_whitelistRulesHasBeenSet = true; m_whitelistRules.emplace_back(std::forward<WhitelistRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<InputWhitelistRuleCidr> m_whitelistRules;
    bool m_whitelistRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
