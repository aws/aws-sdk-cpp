/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TelemetryManifest.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class PutConnectorTelemetryManifestRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API PutConnectorTelemetryManifestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutConnectorTelemetryManifest"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The connector. Specify one of the following:</p> <ul> <li> <p>The Amazon
   * Resource Name (ARN) of the connector</p> </li> <li> <p>The ID of the
   * connector</p> </li> </ul>
   */
  inline const Aws::String& GetConnectorIdentifier() const { return m_connectorIdentifier; }
  inline bool ConnectorIdentifierHasBeenSet() const { return m_connectorIdentifierHasBeenSet; }
  template <typename ConnectorIdentifierT = Aws::String>
  void SetConnectorIdentifier(ConnectorIdentifierT&& value) {
    m_connectorIdentifierHasBeenSet = true;
    m_connectorIdentifier = std::forward<ConnectorIdentifierT>(value);
  }
  template <typename ConnectorIdentifierT = Aws::String>
  PutConnectorTelemetryManifestRequest& WithConnectorIdentifier(ConnectorIdentifierT&& value) {
    SetConnectorIdentifier(std::forward<ConnectorIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The telemetry manifest.</p>
   */
  inline const TelemetryManifest& GetManifest() const { return m_manifest; }
  inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
  template <typename ManifestT = TelemetryManifest>
  void SetManifest(ManifestT&& value) {
    m_manifestHasBeenSet = true;
    m_manifest = std::forward<ManifestT>(value);
  }
  template <typename ManifestT = TelemetryManifest>
  PutConnectorTelemetryManifestRequest& WithManifest(ManifestT&& value) {
    SetManifest(std::forward<ManifestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the telemetry manifest that you expect to replace, as returned
   * by <code>GetConnectorTelemetryManifest</code>. Omit this value when you create
   * the first telemetry manifest. If the value doesn't match the current version,
   * the request fails with a <code>ConflictException</code>.</p>
   */
  inline long long GetExpectedVersion() const { return m_expectedVersion; }
  inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }
  inline void SetExpectedVersion(long long value) {
    m_expectedVersionHasBeenSet = true;
    m_expectedVersion = value;
  }
  inline PutConnectorTelemetryManifestRequest& WithExpectedVersion(long long value) {
    SetExpectedVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the operation
   * completes no more than one time. If you use an Amazon Web Services SDK, the SDK
   * generates this value and reuses it on retries. If this token matches a previous
   * request with the same telemetry manifest, the service returns the stored version
   * without an error. If you use the same token with a different telemetry manifest,
   * the service returns a <code>ValidationException</code>. This operation is
   * idempotent when you use the same token and parameters.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PutConnectorTelemetryManifestRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectorIdentifier;

  TelemetryManifest m_manifest;

  long long m_expectedVersion{0};

  Aws::String m_clientToken;
  bool m_connectorIdentifierHasBeenSet = false;
  bool m_manifestHasBeenSet = false;
  bool m_expectedVersionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
