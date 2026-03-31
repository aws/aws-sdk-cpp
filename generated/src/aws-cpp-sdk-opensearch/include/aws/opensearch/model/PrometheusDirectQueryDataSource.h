/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p> Configuration details for a Prometheus data source that can be used for
 * direct queries. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PrometheusDirectQueryDataSource">AWS
 * API Reference</a></p>
 */
class PrometheusDirectQueryDataSource {
 public:
  AWS_OPENSEARCHSERVICE_API PrometheusDirectQueryDataSource() = default;
  AWS_OPENSEARCHSERVICE_API PrometheusDirectQueryDataSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API PrometheusDirectQueryDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The unique identifier of the IAM role that grants OpenSearch Service
   * permission to access the specified data source. </p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  PrometheusDirectQueryDataSource& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the Amazon Managed Prometheus Workspace that is
   * associated with the specified data source. </p>
   */
  inline const Aws::String& GetWorkspaceArn() const { return m_workspaceArn; }
  inline bool WorkspaceArnHasBeenSet() const { return m_workspaceArnHasBeenSet; }
  template <typename WorkspaceArnT = Aws::String>
  void SetWorkspaceArn(WorkspaceArnT&& value) {
    m_workspaceArnHasBeenSet = true;
    m_workspaceArn = std::forward<WorkspaceArnT>(value);
  }
  template <typename WorkspaceArnT = Aws::String>
  PrometheusDirectQueryDataSource& WithWorkspaceArn(WorkspaceArnT&& value) {
    SetWorkspaceArn(std::forward<WorkspaceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleArn;

  Aws::String m_workspaceArn;
  bool m_roleArnHasBeenSet = false;
  bool m_workspaceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
