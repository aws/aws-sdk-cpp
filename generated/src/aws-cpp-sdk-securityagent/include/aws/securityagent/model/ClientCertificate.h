/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

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
 * <p>A client certificate for mutual TLS (mTLS) authentication to target
 * hosts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ClientCertificate">AWS
 * API Reference</a></p>
 */
class ClientCertificate {
 public:
  AWS_SECURITYAGENT_API ClientCertificate() = default;
  AWS_SECURITYAGENT_API ClientCertificate(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ClientCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A customer-chosen name for this client certificate, used in error messages
   * and console display.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ClientCertificate& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Secrets Manager secret containing the certificate and private
   * key.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  ClientCertificate& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The origins (scheme://host[:port]) this certificate applies to. Paths are not
   * supported. Each hostname can have at most one client certificate.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOrigins() const { return m_origins; }
  inline bool OriginsHasBeenSet() const { return m_originsHasBeenSet; }
  template <typename OriginsT = Aws::Vector<Aws::String>>
  void SetOrigins(OriginsT&& value) {
    m_originsHasBeenSet = true;
    m_origins = std::forward<OriginsT>(value);
  }
  template <typename OriginsT = Aws::Vector<Aws::String>>
  ClientCertificate& WithOrigins(OriginsT&& value) {
    SetOrigins(std::forward<OriginsT>(value));
    return *this;
  }
  template <typename OriginsT = Aws::String>
  ClientCertificate& AddOrigins(OriginsT&& value) {
    m_originsHasBeenSet = true;
    m_origins.emplace_back(std::forward<OriginsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_secretArn;

  Aws::Vector<Aws::String> m_origins;
  bool m_nameHasBeenSet = false;
  bool m_secretArnHasBeenSet = false;
  bool m_originsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
