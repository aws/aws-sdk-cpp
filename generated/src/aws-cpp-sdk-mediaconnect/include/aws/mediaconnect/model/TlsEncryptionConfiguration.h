/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/PublicTlsEncryptionConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The configuration settings for TLS encryption.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TlsEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class TlsEncryptionConfiguration {
 public:
  AWS_MEDIACONNECT_API TlsEncryptionConfiguration() = default;
  AWS_MEDIACONNECT_API TlsEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API TlsEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The TLS encryption configuration that validates the destination by using a
   * publicly trusted certificate authority.</p>
   */
  inline const PublicTlsEncryptionConfiguration& GetPublic() const { return m_public; }
  inline bool PublicHasBeenSet() const { return m_publicHasBeenSet; }
  template <typename PublicT = PublicTlsEncryptionConfiguration>
  void SetPublic(PublicT&& value) {
    m_publicHasBeenSet = true;
    m_public = std::forward<PublicT>(value);
  }
  template <typename PublicT = PublicTlsEncryptionConfiguration>
  TlsEncryptionConfiguration& WithPublic(PublicT&& value) {
    SetPublic(std::forward<PublicT>(value));
    return *this;
  }
  ///@}
 private:
  PublicTlsEncryptionConfiguration m_public;
  bool m_publicHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
