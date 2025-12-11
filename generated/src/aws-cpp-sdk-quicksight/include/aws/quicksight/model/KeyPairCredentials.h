/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The combination of username, private key and passphrase that are used as
 * credentials.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KeyPairCredentials">AWS
 * API Reference</a></p>
 */
class KeyPairCredentials {
 public:
  AWS_QUICKSIGHT_API KeyPairCredentials() = default;
  AWS_QUICKSIGHT_API KeyPairCredentials(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API KeyPairCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Username</p>
   */
  inline const Aws::String& GetKeyPairUsername() const { return m_keyPairUsername; }
  inline bool KeyPairUsernameHasBeenSet() const { return m_keyPairUsernameHasBeenSet; }
  template <typename KeyPairUsernameT = Aws::String>
  void SetKeyPairUsername(KeyPairUsernameT&& value) {
    m_keyPairUsernameHasBeenSet = true;
    m_keyPairUsername = std::forward<KeyPairUsernameT>(value);
  }
  template <typename KeyPairUsernameT = Aws::String>
  KeyPairCredentials& WithKeyPairUsername(KeyPairUsernameT&& value) {
    SetKeyPairUsername(std::forward<KeyPairUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>PrivateKey</p>
   */
  inline const Aws::String& GetPrivateKey() const { return m_privateKey; }
  inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
  template <typename PrivateKeyT = Aws::String>
  void SetPrivateKey(PrivateKeyT&& value) {
    m_privateKeyHasBeenSet = true;
    m_privateKey = std::forward<PrivateKeyT>(value);
  }
  template <typename PrivateKeyT = Aws::String>
  KeyPairCredentials& WithPrivateKey(PrivateKeyT&& value) {
    SetPrivateKey(std::forward<PrivateKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>PrivateKeyPassphrase</p>
   */
  inline const Aws::String& GetPrivateKeyPassphrase() const { return m_privateKeyPassphrase; }
  inline bool PrivateKeyPassphraseHasBeenSet() const { return m_privateKeyPassphraseHasBeenSet; }
  template <typename PrivateKeyPassphraseT = Aws::String>
  void SetPrivateKeyPassphrase(PrivateKeyPassphraseT&& value) {
    m_privateKeyPassphraseHasBeenSet = true;
    m_privateKeyPassphrase = std::forward<PrivateKeyPassphraseT>(value);
  }
  template <typename PrivateKeyPassphraseT = Aws::String>
  KeyPairCredentials& WithPrivateKeyPassphrase(PrivateKeyPassphraseT&& value) {
    SetPrivateKeyPassphrase(std::forward<PrivateKeyPassphraseT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_keyPairUsername;

  Aws::String m_privateKey;

  Aws::String m_privateKeyPassphrase;
  bool m_keyPairUsernameHasBeenSet = false;
  bool m_privateKeyHasBeenSet = false;
  bool m_privateKeyPassphraseHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
