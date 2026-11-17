/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/SetupFormat.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class GetConnectorTelemetrySetupRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API GetConnectorTelemetrySetupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetConnectorTelemetrySetup"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The connector whose telemetry manifest you want to generate the setup from.
   * Specify one of the following:</p> <ul> <li> <p>The Amazon Resource Name (ARN) of
   * the connector</p> </li> <li> <p>The ID of the connector</p> </li> </ul>
   */
  inline const Aws::String& GetConnectorIdentifier() const { return m_connectorIdentifier; }
  inline bool ConnectorIdentifierHasBeenSet() const { return m_connectorIdentifierHasBeenSet; }
  template <typename ConnectorIdentifierT = Aws::String>
  void SetConnectorIdentifier(ConnectorIdentifierT&& value) {
    m_connectorIdentifierHasBeenSet = true;
    m_connectorIdentifier = std::forward<ConnectorIdentifierT>(value);
  }
  template <typename ConnectorIdentifierT = Aws::String>
  GetConnectorTelemetrySetupRequest& WithConnectorIdentifier(ConnectorIdentifierT&& value) {
    SetConnectorIdentifier(std::forward<ConnectorIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the setup artifacts. If you omit this value, the service uses
   * the default format for the connector's provider (<code>BICEP</code> for an Azure
   * connector). If the provider doesn't support the format, the service returns a
   * <code>ValidationException</code>.</p>
   */
  inline SetupFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(SetupFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline GetConnectorTelemetrySetupRequest& WithFormat(SetupFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectorIdentifier;

  SetupFormat m_format{SetupFormat::NOT_SET};
  bool m_connectorIdentifierHasBeenSet = false;
  bool m_formatHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
