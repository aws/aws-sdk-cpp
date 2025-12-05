/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/TlsInterceptMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>TLS decryption on traffic to filter on attributes in the HTTP header.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/TlsInterceptProperties">AWS
 * API Reference</a></p>
 */
class TlsInterceptProperties {
 public:
  AWS_NETWORKFIREWALL_API TlsInterceptProperties() = default;
  AWS_NETWORKFIREWALL_API TlsInterceptProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API TlsInterceptProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Private Certificate Authority (PCA) used to issue private TLS certificates so
   * that the proxy can present PCA-signed certificates which applications trust
   * through the same root, establishing a secure and consistent trust model for
   * encrypted communication.</p>
   */
  inline const Aws::String& GetPcaArn() const { return m_pcaArn; }
  inline bool PcaArnHasBeenSet() const { return m_pcaArnHasBeenSet; }
  template <typename PcaArnT = Aws::String>
  void SetPcaArn(PcaArnT&& value) {
    m_pcaArnHasBeenSet = true;
    m_pcaArn = std::forward<PcaArnT>(value);
  }
  template <typename PcaArnT = Aws::String>
  TlsInterceptProperties& WithPcaArn(PcaArnT&& value) {
    SetPcaArn(std::forward<PcaArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable or disable TLS Intercept Mode. </p>
   */
  inline TlsInterceptMode GetTlsInterceptMode() const { return m_tlsInterceptMode; }
  inline bool TlsInterceptModeHasBeenSet() const { return m_tlsInterceptModeHasBeenSet; }
  inline void SetTlsInterceptMode(TlsInterceptMode value) {
    m_tlsInterceptModeHasBeenSet = true;
    m_tlsInterceptMode = value;
  }
  inline TlsInterceptProperties& WithTlsInterceptMode(TlsInterceptMode value) {
    SetTlsInterceptMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_pcaArn;

  TlsInterceptMode m_tlsInterceptMode{TlsInterceptMode::NOT_SET};
  bool m_pcaArnHasBeenSet = false;
  bool m_tlsInterceptModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
