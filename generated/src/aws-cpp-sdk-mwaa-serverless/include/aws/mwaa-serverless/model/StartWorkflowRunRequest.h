/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerlessRequest.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace MWAAServerless {
namespace Model {

/**
 */
class StartWorkflowRunRequest : public MWAAServerlessRequest {
 public:
  AWS_MWAASERVERLESS_API StartWorkflowRunRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartWorkflowRun"; }

  AWS_MWAASERVERLESS_API Aws::String SerializePayload() const override;

  AWS_MWAASERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow you want to run.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  StartWorkflowRunRequest& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. This token prevents duplicate workflow run
   * requests.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartWorkflowRunRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional parameters to override default workflow parameters for this specific
   * run. These parameters are passed to the workflow during execution and can be
   * used to customize behavior without modifying the workflow definition. Parameters
   * are made available as environment variables to tasks and you can reference them
   * within the YAML workflow definition using standard parameter substitution
   * syntax.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetOverrideParameters() const { return m_overrideParameters; }
  inline bool OverrideParametersHasBeenSet() const { return m_overrideParametersHasBeenSet; }
  template <typename OverrideParametersT = Aws::Map<Aws::String, Aws::Utils::Document>>
  void SetOverrideParameters(OverrideParametersT&& value) {
    m_overrideParametersHasBeenSet = true;
    m_overrideParameters = std::forward<OverrideParametersT>(value);
  }
  template <typename OverrideParametersT = Aws::Map<Aws::String, Aws::Utils::Document>>
  StartWorkflowRunRequest& WithOverrideParameters(OverrideParametersT&& value) {
    SetOverrideParameters(std::forward<OverrideParametersT>(value));
    return *this;
  }
  template <typename OverrideParametersKeyT = Aws::String, typename OverrideParametersValueT = Aws::Utils::Document>
  StartWorkflowRunRequest& AddOverrideParameters(OverrideParametersKeyT&& key, OverrideParametersValueT&& value) {
    m_overrideParametersHasBeenSet = true;
    m_overrideParameters.emplace(std::forward<OverrideParametersKeyT>(key), std::forward<OverrideParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional. The specific version of the workflow to execute. If not specified,
   * the latest version is used.</p>
   */
  inline const Aws::String& GetWorkflowVersion() const { return m_workflowVersion; }
  inline bool WorkflowVersionHasBeenSet() const { return m_workflowVersionHasBeenSet; }
  template <typename WorkflowVersionT = Aws::String>
  void SetWorkflowVersion(WorkflowVersionT&& value) {
    m_workflowVersionHasBeenSet = true;
    m_workflowVersion = std::forward<WorkflowVersionT>(value);
  }
  template <typename WorkflowVersionT = Aws::String>
  StartWorkflowRunRequest& WithWorkflowVersion(WorkflowVersionT&& value) {
    SetWorkflowVersion(std::forward<WorkflowVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowArn;
  bool m_workflowArnHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  Aws::Map<Aws::String, Aws::Utils::Document> m_overrideParameters;
  bool m_overrideParametersHasBeenSet = false;

  Aws::String m_workflowVersion;
  bool m_workflowVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
