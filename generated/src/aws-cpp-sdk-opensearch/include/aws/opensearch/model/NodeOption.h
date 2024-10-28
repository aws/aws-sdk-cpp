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
   * <p>Container for specifying node type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/NodeOption">AWS
   * API Reference</a></p>
   */
  class NodeOption
  {
  public:
    AWS_OPENSEARCHSERVICE_API NodeOption();
    AWS_OPENSEARCHSERVICE_API NodeOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API NodeOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Container for node type like coordinating.</p>
     */
    inline const NodeOptionsNodeType& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const NodeOptionsNodeType& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(NodeOptionsNodeType&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline NodeOption& WithNodeType(const NodeOptionsNodeType& value) { SetNodeType(value); return *this;}
    inline NodeOption& WithNodeType(NodeOptionsNodeType&& value) { SetNodeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for specifying configuration of any node type.</p>
     */
    inline const NodeConfig& GetNodeConfig() const{ return m_nodeConfig; }
    inline bool NodeConfigHasBeenSet() const { return m_nodeConfigHasBeenSet; }
    inline void SetNodeConfig(const NodeConfig& value) { m_nodeConfigHasBeenSet = true; m_nodeConfig = value; }
    inline void SetNodeConfig(NodeConfig&& value) { m_nodeConfigHasBeenSet = true; m_nodeConfig = std::move(value); }
    inline NodeOption& WithNodeConfig(const NodeConfig& value) { SetNodeConfig(value); return *this;}
    inline NodeOption& WithNodeConfig(NodeConfig&& value) { SetNodeConfig(std::move(value)); return *this;}
    ///@}
  private:

    NodeOptionsNodeType m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    NodeConfig m_nodeConfig;
    bool m_nodeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
