/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/RouterDestination.h>
#include <aws/medialive/model/RouterEncryptionType.h>

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
 * The settings for a MediaConnect Router Input.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RouterInputSettings">AWS
 * API Reference</a></p>
 */
class RouterInputSettings {
 public:
  AWS_MEDIALIVE_API RouterInputSettings() = default;
  AWS_MEDIALIVE_API RouterInputSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API RouterInputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * MediaConnect Router destinations associated with the MediaLive Input.
   */
  inline const Aws::Vector<RouterDestination>& GetDestinations() const { return m_destinations; }
  inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
  template <typename DestinationsT = Aws::Vector<RouterDestination>>
  void SetDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations = std::forward<DestinationsT>(value);
  }
  template <typename DestinationsT = Aws::Vector<RouterDestination>>
  RouterInputSettings& WithDestinations(DestinationsT&& value) {
    SetDestinations(std::forward<DestinationsT>(value));
    return *this;
  }
  template <typename DestinationsT = RouterDestination>
  RouterInputSettings& AddDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations.emplace_back(std::forward<DestinationsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline RouterEncryptionType GetEncryptionType() const { return m_encryptionType; }
  inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
  inline void SetEncryptionType(RouterEncryptionType value) {
    m_encryptionTypeHasBeenSet = true;
    m_encryptionType = value;
  }
  inline RouterInputSettings& WithEncryptionType(RouterEncryptionType value) {
    SetEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * ARN of the secret used to encrypt this input.
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  RouterInputSettings& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouterDestination> m_destinations;
  bool m_destinationsHasBeenSet = false;

  RouterEncryptionType m_encryptionType{RouterEncryptionType::NOT_SET};
  bool m_encryptionTypeHasBeenSet = false;

  Aws::String m_secretArn;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
