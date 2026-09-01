/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SigningScheme.h>

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
 * <p>An object that defines the message-level security options that apply to
 * messages that you send using the configuration set. Currently, these options
 * determine whether Amazon SES API v2 adds an S/MIME signature to your messages
 * and, if so, the format of that signature.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/MessageSecurityOptions">AWS
 * API Reference</a></p>
 */
class MessageSecurityOptions {
 public:
  AWS_SESV2_API MessageSecurityOptions() = default;
  AWS_SESV2_API MessageSecurityOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API MessageSecurityOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The signing scheme that Amazon SES API v2 applies to messages sent with the
   * configuration set.</p>
   */
  inline const SigningScheme& GetSigningScheme() const { return m_signingScheme; }
  inline bool SigningSchemeHasBeenSet() const { return m_signingSchemeHasBeenSet; }
  template <typename SigningSchemeT = SigningScheme>
  void SetSigningScheme(SigningSchemeT&& value) {
    m_signingSchemeHasBeenSet = true;
    m_signingScheme = std::forward<SigningSchemeT>(value);
  }
  template <typename SigningSchemeT = SigningScheme>
  MessageSecurityOptions& WithSigningScheme(SigningSchemeT&& value) {
    SetSigningScheme(std::forward<SigningSchemeT>(value));
    return *this;
  }
  ///@}
 private:
  SigningScheme m_signingScheme;
  bool m_signingSchemeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
