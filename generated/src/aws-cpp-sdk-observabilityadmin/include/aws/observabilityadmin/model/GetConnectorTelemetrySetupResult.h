/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ConnectorProvider.h>
#include <aws/observabilityadmin/model/SetupArtifact.h>
#include <aws/observabilityadmin/model/SetupFormat.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {
class GetConnectorTelemetrySetupResult {
 public:
  AWS_OBSERVABILITYADMIN_API GetConnectorTelemetrySetupResult() = default;
  AWS_OBSERVABILITYADMIN_API GetConnectorTelemetrySetupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API GetConnectorTelemetrySetupResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The setup artifacts to apply in your cloud provider.</p>
   */
  inline const Aws::Vector<SetupArtifact>& GetArtifacts() const { return m_artifacts; }
  template <typename ArtifactsT = Aws::Vector<SetupArtifact>>
  void SetArtifacts(ArtifactsT&& value) {
    m_artifactsHasBeenSet = true;
    m_artifacts = std::forward<ArtifactsT>(value);
  }
  template <typename ArtifactsT = Aws::Vector<SetupArtifact>>
  GetConnectorTelemetrySetupResult& WithArtifacts(ArtifactsT&& value) {
    SetArtifacts(std::forward<ArtifactsT>(value));
    return *this;
  }
  template <typename ArtifactsT = SetupArtifact>
  GetConnectorTelemetrySetupResult& AddArtifacts(ArtifactsT&& value) {
    m_artifactsHasBeenSet = true;
    m_artifacts.emplace_back(std::forward<ArtifactsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions or roles in your cloud provider that you need to apply the
   * artifacts, for example Azure Contributor and User Access Administrator.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRequiredPermissionsToApply() const { return m_requiredPermissionsToApply; }
  template <typename RequiredPermissionsToApplyT = Aws::Vector<Aws::String>>
  void SetRequiredPermissionsToApply(RequiredPermissionsToApplyT&& value) {
    m_requiredPermissionsToApplyHasBeenSet = true;
    m_requiredPermissionsToApply = std::forward<RequiredPermissionsToApplyT>(value);
  }
  template <typename RequiredPermissionsToApplyT = Aws::Vector<Aws::String>>
  GetConnectorTelemetrySetupResult& WithRequiredPermissionsToApply(RequiredPermissionsToApplyT&& value) {
    SetRequiredPermissionsToApply(std::forward<RequiredPermissionsToApplyT>(value));
    return *this;
  }
  template <typename RequiredPermissionsToApplyT = Aws::String>
  GetConnectorTelemetrySetupResult& AddRequiredPermissionsToApply(RequiredPermissionsToApplyT&& value) {
    m_requiredPermissionsToApplyHasBeenSet = true;
    m_requiredPermissionsToApply.emplace_back(std::forward<RequiredPermissionsToApplyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the setup artifacts.</p>
   */
  inline SetupFormat GetFormat() const { return m_format; }
  inline void SetFormat(SetupFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline GetConnectorTelemetrySetupResult& WithFormat(SetupFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider that the setup artifacts are for.</p>
   */
  inline ConnectorProvider GetProvider() const { return m_provider; }
  inline void SetProvider(ConnectorProvider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline GetConnectorTelemetrySetupResult& WithProvider(ConnectorProvider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the telemetry manifest that the service generated the setup
   * artifacts from.</p>
   */
  inline long long GetManifestVersion() const { return m_manifestVersion; }
  inline void SetManifestVersion(long long value) {
    m_manifestVersionHasBeenSet = true;
    m_manifestVersion = value;
  }
  inline GetConnectorTelemetrySetupResult& WithManifestVersion(long long value) {
    SetManifestVersion(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetConnectorTelemetrySetupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SetupArtifact> m_artifacts;

  Aws::Vector<Aws::String> m_requiredPermissionsToApply;

  SetupFormat m_format{SetupFormat::NOT_SET};

  ConnectorProvider m_provider{ConnectorProvider::NOT_SET};

  long long m_manifestVersion{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_artifactsHasBeenSet = false;
  bool m_requiredPermissionsToApplyHasBeenSet = false;
  bool m_formatHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_manifestVersionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
