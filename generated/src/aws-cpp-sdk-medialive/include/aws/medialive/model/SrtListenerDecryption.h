/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Algorithm.h>

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
 * Decryption settings for SRT listener. If present, both algorithm and
 * passphraseSecretArn are required.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtListenerDecryption">AWS
 * API Reference</a></p>
 */
class SrtListenerDecryption {
 public:
  AWS_MEDIALIVE_API SrtListenerDecryption() = default;
  AWS_MEDIALIVE_API SrtListenerDecryption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API SrtListenerDecryption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The algorithm used to decrypt content.
   */
  inline Algorithm GetAlgorithm() const { return m_algorithm; }
  inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
  inline void SetAlgorithm(Algorithm value) {
    m_algorithmHasBeenSet = true;
    m_algorithm = value;
  }
  inline SrtListenerDecryption& WithAlgorithm(Algorithm value) {
    SetAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The ARN for the secret in Secrets Manager that holds the passphrase for
   * decryption.
   */
  inline const Aws::String& GetPassphraseSecretArn() const { return m_passphraseSecretArn; }
  inline bool PassphraseSecretArnHasBeenSet() const { return m_passphraseSecretArnHasBeenSet; }
  template <typename PassphraseSecretArnT = Aws::String>
  void SetPassphraseSecretArn(PassphraseSecretArnT&& value) {
    m_passphraseSecretArnHasBeenSet = true;
    m_passphraseSecretArn = std::forward<PassphraseSecretArnT>(value);
  }
  template <typename PassphraseSecretArnT = Aws::String>
  SrtListenerDecryption& WithPassphraseSecretArn(PassphraseSecretArnT&& value) {
    SetPassphraseSecretArn(std::forward<PassphraseSecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Algorithm m_algorithm{Algorithm::NOT_SET};

  Aws::String m_passphraseSecretArn;
  bool m_algorithmHasBeenSet = false;
  bool m_passphraseSecretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
