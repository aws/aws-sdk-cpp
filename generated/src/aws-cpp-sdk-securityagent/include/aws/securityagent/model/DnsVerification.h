/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/DNSRecordType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Represents dns txt verification details</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DnsVerification">AWS
 * API Reference</a></p>
 */
class DnsVerification {
 public:
  AWS_SECURITYAGENT_API DnsVerification() = default;
  AWS_SECURITYAGENT_API DnsVerification(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API DnsVerification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Token used to verify domain ownership</p>
   */
  inline const Aws::String& GetToken() const { return m_token; }
  inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
  template <typename TokenT = Aws::String>
  void SetToken(TokenT&& value) {
    m_tokenHasBeenSet = true;
    m_token = std::forward<TokenT>(value);
  }
  template <typename TokenT = Aws::String>
  DnsVerification& WithToken(TokenT&& value) {
    SetToken(std::forward<TokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Record name to be added in DNS for target domain</p>
   */
  inline const Aws::String& GetDnsRecordName() const { return m_dnsRecordName; }
  inline bool DnsRecordNameHasBeenSet() const { return m_dnsRecordNameHasBeenSet; }
  template <typename DnsRecordNameT = Aws::String>
  void SetDnsRecordName(DnsRecordNameT&& value) {
    m_dnsRecordNameHasBeenSet = true;
    m_dnsRecordName = std::forward<DnsRecordNameT>(value);
  }
  template <typename DnsRecordNameT = Aws::String>
  DnsVerification& WithDnsRecordName(DnsRecordNameT&& value) {
    SetDnsRecordName(std::forward<DnsRecordNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of record to be added in DNS for target domain</p>
   */
  inline DNSRecordType GetDnsRecordType() const { return m_dnsRecordType; }
  inline bool DnsRecordTypeHasBeenSet() const { return m_dnsRecordTypeHasBeenSet; }
  inline void SetDnsRecordType(DNSRecordType value) {
    m_dnsRecordTypeHasBeenSet = true;
    m_dnsRecordType = value;
  }
  inline DnsVerification& WithDnsRecordType(DNSRecordType value) {
    SetDnsRecordType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_token;

  Aws::String m_dnsRecordName;

  DNSRecordType m_dnsRecordType{DNSRecordType::NOT_SET};
  bool m_tokenHasBeenSet = false;
  bool m_dnsRecordNameHasBeenSet = false;
  bool m_dnsRecordTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
