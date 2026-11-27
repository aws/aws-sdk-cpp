/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/model/ComputeConfiguration.h>

#include <utility>

namespace Aws {
namespace NeptuneGraph {
namespace Model {

/**
 */
class UpdateGraphRequest : public NeptuneGraphRequest {
 public:
  AWS_NEPTUNEGRAPH_API UpdateGraphRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateGraph"; }

  AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The unique identifier of the Neptune Analytics graph.</p>
   */
  inline const Aws::String& GetGraphIdentifier() const { return m_graphIdentifier; }
  inline bool GraphIdentifierHasBeenSet() const { return m_graphIdentifierHasBeenSet; }
  template <typename GraphIdentifierT = Aws::String>
  void SetGraphIdentifier(GraphIdentifierT&& value) {
    m_graphIdentifierHasBeenSet = true;
    m_graphIdentifier = std::forward<GraphIdentifierT>(value);
  }
  template <typename GraphIdentifierT = Aws::String>
  UpdateGraphRequest& WithGraphIdentifier(GraphIdentifierT&& value) {
    SetGraphIdentifier(std::forward<GraphIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether or not the graph can be reachable over the internet. All
   * access to graphs is IAM authenticated. (<code>true</code> to enable, or
   * <code>false</code> to disable.</p>
   */
  inline bool GetPublicConnectivity() const { return m_publicConnectivity; }
  inline bool PublicConnectivityHasBeenSet() const { return m_publicConnectivityHasBeenSet; }
  inline void SetPublicConnectivity(bool value) {
    m_publicConnectivityHasBeenSet = true;
    m_publicConnectivity = value;
  }
  inline UpdateGraphRequest& WithPublicConnectivity(bool value) {
    SetPublicConnectivity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated compute configuration for the graph. A graph session can be
   * scaled up to a provisioned graph, and a provisioned graph can be scaled down to
   * a graph session, as long as the data in the graph fits within the graph
   * session.</p>
   */
  inline const ComputeConfiguration& GetComputeConfiguration() const { return m_computeConfiguration; }
  inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
  template <typename ComputeConfigurationT = ComputeConfiguration>
  void SetComputeConfiguration(ComputeConfigurationT&& value) {
    m_computeConfigurationHasBeenSet = true;
    m_computeConfiguration = std::forward<ComputeConfigurationT>(value);
  }
  template <typename ComputeConfigurationT = ComputeConfiguration>
  UpdateGraphRequest& WithComputeConfiguration(ComputeConfigurationT&& value) {
    SetComputeConfiguration(std::forward<ComputeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A value that indicates whether the graph has deletion protection enabled. The
   * graph can't be deleted when deletion protection is enabled.</p>
   */
  inline bool GetDeletionProtection() const { return m_deletionProtection; }
  inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
  inline void SetDeletionProtection(bool value) {
    m_deletionProtectionHasBeenSet = true;
    m_deletionProtection = value;
  }
  inline UpdateGraphRequest& WithDeletionProtection(bool value) {
    SetDeletionProtection(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_graphIdentifier;

  bool m_publicConnectivity{false};

  ComputeConfiguration m_computeConfiguration;

  bool m_deletionProtection{false};
  bool m_graphIdentifierHasBeenSet = false;
  bool m_publicConnectivityHasBeenSet = false;
  bool m_computeConfigurationHasBeenSet = false;
  bool m_deletionProtectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NeptuneGraph
}  // namespace Aws
