/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/LinkedChannelType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Details of a primary (leader) channel in a linked pair<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribePrimaryChannelSettings">AWS
 * API Reference</a></p>
 */
class DescribePrimaryChannelSettings {
 public:
  AWS_MEDIALIVE_API DescribePrimaryChannelSettings() = default;
  AWS_MEDIALIVE_API DescribePrimaryChannelSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API DescribePrimaryChannelSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The ARNs of the following channels for this primary channel
   */
  inline const Aws::Vector<Aws::String>& GetFollowingChannelArns() const { return m_followingChannelArns; }
  inline bool FollowingChannelArnsHasBeenSet() const { return m_followingChannelArnsHasBeenSet; }
  template <typename FollowingChannelArnsT = Aws::Vector<Aws::String>>
  void SetFollowingChannelArns(FollowingChannelArnsT&& value) {
    m_followingChannelArnsHasBeenSet = true;
    m_followingChannelArns = std::forward<FollowingChannelArnsT>(value);
  }
  template <typename FollowingChannelArnsT = Aws::Vector<Aws::String>>
  DescribePrimaryChannelSettings& WithFollowingChannelArns(FollowingChannelArnsT&& value) {
    SetFollowingChannelArns(std::forward<FollowingChannelArnsT>(value));
    return *this;
  }
  template <typename FollowingChannelArnsT = Aws::String>
  DescribePrimaryChannelSettings& AddFollowingChannelArns(FollowingChannelArnsT&& value) {
    m_followingChannelArnsHasBeenSet = true;
    m_followingChannelArns.emplace_back(std::forward<FollowingChannelArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specifies this as a primary channel
   */
  inline LinkedChannelType GetLinkedChannelType() const { return m_linkedChannelType; }
  inline bool LinkedChannelTypeHasBeenSet() const { return m_linkedChannelTypeHasBeenSet; }
  inline void SetLinkedChannelType(LinkedChannelType value) {
    m_linkedChannelTypeHasBeenSet = true;
    m_linkedChannelType = value;
  }
  inline DescribePrimaryChannelSettings& WithLinkedChannelType(LinkedChannelType value) {
    SetLinkedChannelType(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_followingChannelArns;

  LinkedChannelType m_linkedChannelType{LinkedChannelType::NOT_SET};
  bool m_followingChannelArnsHasBeenSet = false;
  bool m_linkedChannelTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
