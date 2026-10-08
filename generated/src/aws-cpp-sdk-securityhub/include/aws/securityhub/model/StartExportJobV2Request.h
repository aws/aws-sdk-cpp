/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ExportDestination.h>
#include <aws/securityhub/model/ExportOutput.h>
#include <aws/securityhub/model/ExportScopes.h>

#include <utility>

namespace Aws {
namespace SecurityHub {
namespace Model {

/**
 */
class StartExportJobV2Request : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API StartExportJobV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartExportJobV2"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>An optional, user-provided name for the export job that helps you identify it
   * in <code>ListExportJobsV2</code> results. The value can be 1–256 characters.
   * Alphanumeric characters, spaces, and the following ASCII characters are
   * permitted: <code>. _ , : ( ) / + -</code>.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StartExportJobV2Request& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination that Security Hub writes the export to. You must specify
   * exactly one destination type. Currently, the only supported type is Amazon
   * S3.</p>
   */
  inline const ExportDestination& GetDestination() const { return m_destination; }
  inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
  template <typename DestinationT = ExportDestination>
  void SetDestination(DestinationT&& value) {
    m_destinationHasBeenSet = true;
    m_destination = std::forward<DestinationT>(value);
  }
  template <typename DestinationT = ExportDestination>
  StartExportJobV2Request& WithDestination(DestinationT&& value) {
    SetDestination(std::forward<DestinationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies what data to export and how to format it. You must specify exactly
   * one output type. Currently, the only supported type is
   * <code>Findings</code>.</p>
   */
  inline const ExportOutput& GetOutputConfiguration() const { return m_outputConfiguration; }
  inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
  template <typename OutputConfigurationT = ExportOutput>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = ExportOutput>
  StartExportJobV2Request& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Limits the export to findings from specific organizational units (OUs) or
   * from the delegated administrator's organization. Only the delegated
   * administrator account can use this parameter; other accounts that specify it
   * receive an <code>AccessDeniedException</code>.</p> <p>This parameter is
   * optional. If you omit it, the delegated administrator exports findings from all
   * accounts across the entire organization, and other accounts export only their
   * own findings.</p> <p>You can specify up to 10 entries in
   * <code>Scopes.AwsOrganizations</code>. If you specify multiple entries, Security
   * Hub combines them using OR logic.</p>
   */
  inline const ExportScopes& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = ExportScopes>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = ExportScopes>
  StartExportJobV2Request& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier used to ensure idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartExportJobV2Request& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  ExportDestination m_destination;

  ExportOutput m_outputConfiguration;

  ExportScopes m_scopes;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_destinationHasBeenSet = false;
  bool m_outputConfigurationHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
