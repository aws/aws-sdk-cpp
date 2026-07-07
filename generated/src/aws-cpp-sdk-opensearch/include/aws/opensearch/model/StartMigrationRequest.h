/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/MigrationOptions.h>

#include <utility>

namespace Aws {
namespace OpenSearchService {
namespace Model {

/**
 */
class StartMigrationRequest : public OpenSearchServiceRequest {
 public:
  AWS_OPENSEARCHSERVICE_API StartMigrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartMigration"; }

  AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the OpenSearch application to migrate saved objects
   * into.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  StartMigrationRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration options for the migration, including the source data
   * source, target workspace, export filters, and conflict resolution strategy.</p>
   */
  inline const MigrationOptions& GetMigrationOptions() const { return m_migrationOptions; }
  inline bool MigrationOptionsHasBeenSet() const { return m_migrationOptionsHasBeenSet; }
  template <typename MigrationOptionsT = MigrationOptions>
  void SetMigrationOptions(MigrationOptionsT&& value) {
    m_migrationOptionsHasBeenSet = true;
    m_migrationOptions = std::forward<MigrationOptionsT>(value);
  }
  template <typename MigrationOptionsT = MigrationOptions>
  StartMigrationRequest& WithMigrationOptions(MigrationOptionsT&& value) {
    SetMigrationOptions(std::forward<MigrationOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, Amazon OpenSearch
   * Service ignores the request but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartMigrationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  MigrationOptions m_migrationOptions;

  Aws::String m_clientToken;
  bool m_applicationIdHasBeenSet = false;
  bool m_migrationOptionsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
