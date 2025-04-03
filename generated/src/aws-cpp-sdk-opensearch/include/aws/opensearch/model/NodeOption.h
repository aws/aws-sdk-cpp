/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/NodeOptionsNodeType.h>
#include <aws/opensearch/model/NodeConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Configuration settings for defining the node type within a
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/NodeOption">AWS
   * API Reference</a></p>
   */
  class NodeOption
  {
  public:
    AWS_OPENSEARCHSERVICE_API NodeOption() = default;
    AWS_OPENSEARCHSERVICE_API NodeOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API NodeOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the type of node, such as coordinating nodes.</p>
     */
    inline NodeOptionsNodeType GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(NodeOptionsNodeType value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline NodeOption& WithNodeType(NodeOptionsNodeType value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for defining the setup of any node type.</p>
     */
    inline const NodeConfig& GetNodeConfig() const { return m_nodeConfig; }
    inline bool NodeConfigHasBeenSet() const { return m_nodeConfigHasBeenSet; }
    template<typename NodeConfigT = NodeConfig>
    void SetNodeConfig(NodeConfigT&& value) { m_nodeConfigHasBeenSet = true; m_nodeConfig = std::forward<NodeConfigT>(value); }
    template<typename NodeConfigT = NodeConfig>
    NodeOption& WithNodeConfig(NodeConfigT&& value) { SetNodeConfig(std::forward<NodeConfigT>(value)); return *this;}
    ///@}
  private:

    NodeOptionsNodeType m_nodeType{NodeOptionsNodeType::NOT_SET};
    bool m_nodeTypeHasBeenSet = false;

    NodeConfig m_nodeConfig;
    bool m_nodeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
