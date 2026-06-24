/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/WorkspaceConfigurationInput.h>

#include <utility>

namespace Aws {
namespace OpenSearchService {
namespace Model {

/**
 */
class AttachDataSourceRequest : public OpenSearchServiceRequest {
 public:
  AWS_OPENSEARCHSERVICE_API AttachDataSourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AttachDataSource"; }

  AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier or name of the OpenSearch application to attach the
   * data source to. This is the same identifier used with
   * <code>UpdateApplication</code>, <code>GetApplication</code>, and
   * <code>DeleteApplication</code>.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AttachDataSourceRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
  inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
  template <typename DataSourceArnT = Aws::String>
  void SetDataSourceArn(DataSourceArnT&& value) {
    m_dataSourceArnHasBeenSet = true;
    m_dataSourceArn = std::forward<DataSourceArnT>(value);
  }
  template <typename DataSourceArnT = Aws::String>
  AttachDataSourceRequest& WithDataSourceArn(DataSourceArnT&& value) {
    SetDataSourceArn(std::forward<DataSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of an existing workspace to update with the new data source.
   * Mutually exclusive with <code>workspaceConfiguration</code>.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  AttachDataSourceRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for creating a new workspace during the attachment. If
   * specified, a workspace is created and linked to the data source after the
   * attachment completes. Mutually exclusive with <code>workspaceId</code>.</p>
   */
  inline const WorkspaceConfigurationInput& GetWorkspaceConfiguration() const { return m_workspaceConfiguration; }
  inline bool WorkspaceConfigurationHasBeenSet() const { return m_workspaceConfigurationHasBeenSet; }
  template <typename WorkspaceConfigurationT = WorkspaceConfigurationInput>
  void SetWorkspaceConfiguration(WorkspaceConfigurationT&& value) {
    m_workspaceConfigurationHasBeenSet = true;
    m_workspaceConfiguration = std::forward<WorkspaceConfigurationT>(value);
  }
  template <typename WorkspaceConfigurationT = WorkspaceConfigurationInput>
  AttachDataSourceRequest& WithWorkspaceConfiguration(WorkspaceConfigurationT&& value) {
    SetWorkspaceConfiguration(std::forward<WorkspaceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency of the request. If
   * you retry a request with the same client token and the same parameters, the
   * retry succeeds without performing any further actions.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  AttachDataSourceRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_dataSourceArn;

  Aws::String m_workspaceId;

  WorkspaceConfigurationInput m_workspaceConfiguration;

  Aws::String m_clientToken;
  bool m_idHasBeenSet = false;
  bool m_dataSourceArnHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
  bool m_workspaceConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
