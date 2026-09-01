/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SignatureFormat.h>

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
 * <p>Specifies that Amazon SES API v2 signs messages sent with the configuration
 * set using S/MIME.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SmimeSigningScheme">AWS
 * API Reference</a></p>
 */
class SmimeSigningScheme {
 public:
  AWS_SESV2_API SmimeSigningScheme() = default;
  AWS_SESV2_API SmimeSigningScheme(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API SmimeSigningScheme& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The format of the S/MIME signature that Amazon SES API v2 applies to
   * messages.</p>
   */
  inline SignatureFormat GetSignatureFormat() const { return m_signatureFormat; }
  inline bool SignatureFormatHasBeenSet() const { return m_signatureFormatHasBeenSet; }
  inline void SetSignatureFormat(SignatureFormat value) {
    m_signatureFormatHasBeenSet = true;
    m_signatureFormat = value;
  }
  inline SmimeSigningScheme& WithSignatureFormat(SignatureFormat value) {
    SetSignatureFormat(value);
    return *this;
  }
  ///@}
 private:
  SignatureFormat m_signatureFormat{SignatureFormat::NOT_SET};
  bool m_signatureFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
