/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>A connection string profile for an Autonomous Database.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DatabaseConnectionStringProfile">AWS
 * API Reference</a></p>
 */
class DatabaseConnectionStringProfile {
 public:
  AWS_ODB_API DatabaseConnectionStringProfile() = default;
  AWS_ODB_API DatabaseConnectionStringProfile(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API DatabaseConnectionStringProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The consumer group associated with the connection string profile.</p>
   */
  inline const Aws::String& GetConsumerGroup() const { return m_consumerGroup; }
  inline bool ConsumerGroupHasBeenSet() const { return m_consumerGroupHasBeenSet; }
  template <typename ConsumerGroupT = Aws::String>
  void SetConsumerGroup(ConsumerGroupT&& value) {
    m_consumerGroupHasBeenSet = true;
    m_consumerGroup = std::forward<ConsumerGroupT>(value);
  }
  template <typename ConsumerGroupT = Aws::String>
  DatabaseConnectionStringProfile& WithConsumerGroup(ConsumerGroupT&& value) {
    SetConsumerGroup(std::forward<ConsumerGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-friendly name of the connection string profile.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  DatabaseConnectionStringProfile& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The host name format used in the connection string.</p>
   */
  inline const Aws::String& GetHostFormat() const { return m_hostFormat; }
  inline bool HostFormatHasBeenSet() const { return m_hostFormatHasBeenSet; }
  template <typename HostFormatT = Aws::String>
  void SetHostFormat(HostFormatT&& value) {
    m_hostFormatHasBeenSet = true;
    m_hostFormat = std::forward<HostFormatT>(value);
  }
  template <typename HostFormatT = Aws::String>
  DatabaseConnectionStringProfile& WithHostFormat(HostFormatT&& value) {
    SetHostFormat(std::forward<HostFormatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the connection string profile is regional.</p>
   */
  inline bool GetIsRegional() const { return m_isRegional; }
  inline bool IsRegionalHasBeenSet() const { return m_isRegionalHasBeenSet; }
  inline void SetIsRegional(bool value) {
    m_isRegionalHasBeenSet = true;
    m_isRegional = value;
  }
  inline DatabaseConnectionStringProfile& WithIsRegional(bool value) {
    SetIsRegional(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol used by the connection string profile.</p>
   */
  inline const Aws::String& GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  template <typename ProtocolT = Aws::String>
  void SetProtocol(ProtocolT&& value) {
    m_protocolHasBeenSet = true;
    m_protocol = std::forward<ProtocolT>(value);
  }
  template <typename ProtocolT = Aws::String>
  DatabaseConnectionStringProfile& WithProtocol(ProtocolT&& value) {
    SetProtocol(std::forward<ProtocolT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session mode of the connection string profile.</p>
   */
  inline const Aws::String& GetSessionMode() const { return m_sessionMode; }
  inline bool SessionModeHasBeenSet() const { return m_sessionModeHasBeenSet; }
  template <typename SessionModeT = Aws::String>
  void SetSessionMode(SessionModeT&& value) {
    m_sessionModeHasBeenSet = true;
    m_sessionMode = std::forward<SessionModeT>(value);
  }
  template <typename SessionModeT = Aws::String>
  DatabaseConnectionStringProfile& WithSessionMode(SessionModeT&& value) {
    SetSessionMode(std::forward<SessionModeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The syntax format of the connection string profile.</p>
   */
  inline const Aws::String& GetSyntaxFormat() const { return m_syntaxFormat; }
  inline bool SyntaxFormatHasBeenSet() const { return m_syntaxFormatHasBeenSet; }
  template <typename SyntaxFormatT = Aws::String>
  void SetSyntaxFormat(SyntaxFormatT&& value) {
    m_syntaxFormatHasBeenSet = true;
    m_syntaxFormat = std::forward<SyntaxFormatT>(value);
  }
  template <typename SyntaxFormatT = Aws::String>
  DatabaseConnectionStringProfile& WithSyntaxFormat(SyntaxFormatT&& value) {
    SetSyntaxFormat(std::forward<SyntaxFormatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The TLS authentication method used by the connection string profile.</p>
   */
  inline const Aws::String& GetTlsAuthentication() const { return m_tlsAuthentication; }
  inline bool TlsAuthenticationHasBeenSet() const { return m_tlsAuthenticationHasBeenSet; }
  template <typename TlsAuthenticationT = Aws::String>
  void SetTlsAuthentication(TlsAuthenticationT&& value) {
    m_tlsAuthenticationHasBeenSet = true;
    m_tlsAuthentication = std::forward<TlsAuthenticationT>(value);
  }
  template <typename TlsAuthenticationT = Aws::String>
  DatabaseConnectionStringProfile& WithTlsAuthentication(TlsAuthenticationT&& value) {
    SetTlsAuthentication(std::forward<TlsAuthenticationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection string value of the profile.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  DatabaseConnectionStringProfile& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_consumerGroup;

  Aws::String m_displayName;

  Aws::String m_hostFormat;

  bool m_isRegional{false};

  Aws::String m_protocol;

  Aws::String m_sessionMode;

  Aws::String m_syntaxFormat;

  Aws::String m_tlsAuthentication;

  Aws::String m_value;
  bool m_consumerGroupHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_hostFormatHasBeenSet = false;
  bool m_isRegionalHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_sessionModeHasBeenSet = false;
  bool m_syntaxFormatHasBeenSet = false;
  bool m_tlsAuthenticationHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
