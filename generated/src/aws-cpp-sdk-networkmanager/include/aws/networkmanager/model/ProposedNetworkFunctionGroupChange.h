/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Tag.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes proposed changes to a network function group. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ProposedNetworkFunctionGroupChange">AWS
   * API Reference</a></p>
   */
  class ProposedNetworkFunctionGroupChange
  {
  public:
    AWS_NETWORKMANAGER_API ProposedNetworkFunctionGroupChange() = default;
    AWS_NETWORKMANAGER_API ProposedNetworkFunctionGroupChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ProposedNetworkFunctionGroupChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of proposed changes to the key-value tags associated with the
     * network function group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ProposedNetworkFunctionGroupChange& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ProposedNetworkFunctionGroupChange& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The proposed new attachment policy rule number for the network function
     * group.</p>
     */
    inline int GetAttachmentPolicyRuleNumber() const { return m_attachmentPolicyRuleNumber; }
    inline bool AttachmentPolicyRuleNumberHasBeenSet() const { return m_attachmentPolicyRuleNumberHasBeenSet; }
    inline void SetAttachmentPolicyRuleNumber(int value) { m_attachmentPolicyRuleNumberHasBeenSet = true; m_attachmentPolicyRuleNumber = value; }
    inline ProposedNetworkFunctionGroupChange& WithAttachmentPolicyRuleNumber(int value) { SetAttachmentPolicyRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proposed name change for the network function group name.</p>
     */
    inline const Aws::String& GetNetworkFunctionGroupName() const { return m_networkFunctionGroupName; }
    inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
    template<typename NetworkFunctionGroupNameT = Aws::String>
    void SetNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = std::forward<NetworkFunctionGroupNameT>(value); }
    template<typename NetworkFunctionGroupNameT = Aws::String>
    ProposedNetworkFunctionGroupChange& WithNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) { SetNetworkFunctionGroupName(std::forward<NetworkFunctionGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_attachmentPolicyRuleNumber{0};
    bool m_attachmentPolicyRuleNumberHasBeenSet = false;

    Aws::String m_networkFunctionGroupName;
    bool m_networkFunctionGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
