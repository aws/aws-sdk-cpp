/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * Details of a follower channel in a linked pair<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeFollowerChannelSettings">AWS
 * API Reference</a></p>
 */
class DescribeFollowerChannelSettings {
 public:
  AWS_MEDIALIVE_API DescribeFollowerChannelSettings() = default;
  AWS_MEDIALIVE_API DescribeFollowerChannelSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API DescribeFollowerChannelSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Specifies this as a follower channel
   */
  inline LinkedChannelType GetLinkedChannelType() const { return m_linkedChannelType; }
  inline bool LinkedChannelTypeHasBeenSet() const { return m_linkedChannelTypeHasBeenSet; }
  inline void SetLinkedChannelType(LinkedChannelType value) {
    m_linkedChannelTypeHasBeenSet = true;
    m_linkedChannelType = value;
  }
  inline DescribeFollowerChannelSettings& WithLinkedChannelType(LinkedChannelType value) {
    SetLinkedChannelType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The ARN of the primary channel this channel follows
   */
  inline const Aws::String& GetPrimaryChannelArn() const { return m_primaryChannelArn; }
  inline bool PrimaryChannelArnHasBeenSet() const { return m_primaryChannelArnHasBeenSet; }
  template <typename PrimaryChannelArnT = Aws::String>
  void SetPrimaryChannelArn(PrimaryChannelArnT&& value) {
    m_primaryChannelArnHasBeenSet = true;
    m_primaryChannelArn = std::forward<PrimaryChannelArnT>(value);
  }
  template <typename PrimaryChannelArnT = Aws::String>
  DescribeFollowerChannelSettings& WithPrimaryChannelArn(PrimaryChannelArnT&& value) {
    SetPrimaryChannelArn(std::forward<PrimaryChannelArnT>(value));
    return *this;
  }
  ///@}
 private:
  LinkedChannelType m_linkedChannelType{LinkedChannelType::NOT_SET};

  Aws::String m_primaryChannelArn;
  bool m_linkedChannelTypeHasBeenSet = false;
  bool m_primaryChannelArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
