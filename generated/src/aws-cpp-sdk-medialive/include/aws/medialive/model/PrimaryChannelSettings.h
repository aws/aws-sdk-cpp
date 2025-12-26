/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * Settings for a primary (leader) channel in a linked pair<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PrimaryChannelSettings">AWS
 * API Reference</a></p>
 */
class PrimaryChannelSettings {
 public:
  AWS_MEDIALIVE_API PrimaryChannelSettings() = default;
  AWS_MEDIALIVE_API PrimaryChannelSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API PrimaryChannelSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  inline PrimaryChannelSettings& WithLinkedChannelType(LinkedChannelType value) {
    SetLinkedChannelType(value);
    return *this;
  }
  ///@}
 private:
  LinkedChannelType m_linkedChannelType{LinkedChannelType::NOT_SET};
  bool m_linkedChannelTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
