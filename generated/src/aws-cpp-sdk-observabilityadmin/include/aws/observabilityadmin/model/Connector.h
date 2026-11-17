/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ConnectorConfiguration.h>
#include <aws/observabilityadmin/model/ConnectorProvider.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>A connector to a third-party cloud provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/Connector">AWS
 * API Reference</a></p>
 */
class Connector {
 public:
  AWS_OBSERVABILITYADMIN_API Connector() = default;
  AWS_OBSERVABILITYADMIN_API Connector(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Connector& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider that the connector connects to.</p>
   */
  inline ConnectorProvider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(ConnectorProvider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline Connector& WithProvider(ConnectorProvider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for connecting to the third-party cloud provider.</p>
   */
  inline const ConnectorConfiguration& GetConnectorConfiguration() const { return m_connectorConfiguration; }
  inline bool ConnectorConfigurationHasBeenSet() const { return m_connectorConfigurationHasBeenSet; }
  template <typename ConnectorConfigurationT = ConnectorConfiguration>
  void SetConnectorConfiguration(ConnectorConfigurationT&& value) {
    m_connectorConfigurationHasBeenSet = true;
    m_connectorConfiguration = std::forward<ConnectorConfigurationT>(value);
  }
  template <typename ConnectorConfigurationT = ConnectorConfiguration>
  Connector& WithConnectorConfiguration(ConnectorConfigurationT&& value) {
    SetConnectorConfiguration(std::forward<ConnectorConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
   * Management (IAM) role that CloudWatch assumes to obtain credentials for the
   * third-party cloud provider.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  Connector& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Connector& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the connector was created, in milliseconds since the Unix
   * epoch.</p>
   */
  inline long long GetCreatedTimeStamp() const { return m_createdTimeStamp; }
  inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }
  inline void SetCreatedTimeStamp(long long value) {
    m_createdTimeStampHasBeenSet = true;
    m_createdTimeStamp = value;
  }
  inline Connector& WithCreatedTimeStamp(long long value) {
    SetCreatedTimeStamp(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  ConnectorProvider m_provider{ConnectorProvider::NOT_SET};

  ConnectorConfiguration m_connectorConfiguration;

  Aws::String m_roleArn;

  Aws::String m_name;

  long long m_createdTimeStamp{0};
  bool m_arnHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_connectorConfigurationHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_createdTimeStampHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
