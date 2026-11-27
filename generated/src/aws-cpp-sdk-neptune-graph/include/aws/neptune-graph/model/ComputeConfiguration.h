/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/model/GraphSessionConfiguration.h>
#include <aws/neptune-graph/model/ProvisionedGraphConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NeptuneGraph {
namespace Model {

/**
 * <p>The compute configuration of a graph. A graph is either a provisioned graph
 * or a graph session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ComputeConfiguration">AWS
 * API Reference</a></p>
 */
class ComputeConfiguration {
 public:
  AWS_NEPTUNEGRAPH_API ComputeConfiguration() = default;
  AWS_NEPTUNEGRAPH_API ComputeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEGRAPH_API ComputeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for a provisioned graph. A provisioned graph uses dedicated
   * compute that is always available. Use provisioned graphs for workloads that
   * require higher memory or predictable latency.</p>
   */
  inline const ProvisionedGraphConfiguration& GetProvisionedGraph() const { return m_provisionedGraph; }
  inline bool ProvisionedGraphHasBeenSet() const { return m_provisionedGraphHasBeenSet; }
  template <typename ProvisionedGraphT = ProvisionedGraphConfiguration>
  void SetProvisionedGraph(ProvisionedGraphT&& value) {
    m_provisionedGraphHasBeenSet = true;
    m_provisionedGraph = std::forward<ProvisionedGraphT>(value);
  }
  template <typename ProvisionedGraphT = ProvisionedGraphConfiguration>
  ComputeConfiguration& WithProvisionedGraph(ProvisionedGraphT&& value) {
    SetProvisionedGraph(std::forward<ProvisionedGraphT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for a graph session. A graph session uses ephemeral compute
   * that is bootstrapped when a query is sent to the graph. The compute is
   * automatically stopped after a few minutes with no traffic; the next query
   * bootstraps the compute again. Queries that bootstrap the compute are subject to
   * cold start latency.</p>
   */
  inline const GraphSessionConfiguration& GetGraphSession() const { return m_graphSession; }
  inline bool GraphSessionHasBeenSet() const { return m_graphSessionHasBeenSet; }
  template <typename GraphSessionT = GraphSessionConfiguration>
  void SetGraphSession(GraphSessionT&& value) {
    m_graphSessionHasBeenSet = true;
    m_graphSession = std::forward<GraphSessionT>(value);
  }
  template <typename GraphSessionT = GraphSessionConfiguration>
  ComputeConfiguration& WithGraphSession(GraphSessionT&& value) {
    SetGraphSession(std::forward<GraphSessionT>(value));
    return *this;
  }
  ///@}
 private:
  ProvisionedGraphConfiguration m_provisionedGraph;

  GraphSessionConfiguration m_graphSession;
  bool m_provisionedGraphHasBeenSet = false;
  bool m_graphSessionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NeptuneGraph
}  // namespace Aws
