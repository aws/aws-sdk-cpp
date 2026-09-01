/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DefaultSigningScheme.h>
#include <aws/sesv2/model/SmimeSigningScheme.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {

/**
 * <p>Specifies the signing scheme to apply to messages sent with a configuration
 * set. This is a union type, so you specify exactly one of its
 * members.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SigningScheme">AWS
 * API Reference</a></p>
 */
class SigningScheme {
 public:
  AWS_SESV2_API SigningScheme() = default;
  AWS_SESV2_API SigningScheme(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API SigningScheme& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Use the default signing behavior. When you select this option, Amazon SES API
   * v2 doesn't add an S/MIME signature to messages sent with the configuration
   * set.</p>
   */
  inline const DefaultSigningScheme& GetDefaultScheme() const { return m_defaultScheme; }
  inline bool DefaultSchemeHasBeenSet() const { return m_defaultSchemeHasBeenSet; }
  template <typename DefaultSchemeT = DefaultSigningScheme>
  void SetDefaultScheme(DefaultSchemeT&& value) {
    m_defaultSchemeHasBeenSet = true;
    m_defaultScheme = std::forward<DefaultSchemeT>(value);
  }
  template <typename DefaultSchemeT = DefaultSigningScheme>
  SigningScheme& WithDefaultScheme(DefaultSchemeT&& value) {
    SetDefaultScheme(std::forward<DefaultSchemeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sign messages sent with the configuration set using S/MIME. For signing to
   * apply, the email identity used to send a message must have an active S/MIME
   * certificate association.</p>
   */
  inline const SmimeSigningScheme& GetSmimeScheme() const { return m_smimeScheme; }
  inline bool SmimeSchemeHasBeenSet() const { return m_smimeSchemeHasBeenSet; }
  template <typename SmimeSchemeT = SmimeSigningScheme>
  void SetSmimeScheme(SmimeSchemeT&& value) {
    m_smimeSchemeHasBeenSet = true;
    m_smimeScheme = std::forward<SmimeSchemeT>(value);
  }
  template <typename SmimeSchemeT = SmimeSigningScheme>
  SigningScheme& WithSmimeScheme(SmimeSchemeT&& value) {
    SetSmimeScheme(std::forward<SmimeSchemeT>(value));
    return *this;
  }
  ///@}
 private:
  DefaultSigningScheme m_defaultScheme;

  SmimeSigningScheme m_smimeScheme;
  bool m_defaultSchemeHasBeenSet = false;
  bool m_smimeSchemeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
