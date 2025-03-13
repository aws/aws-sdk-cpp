/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/NodeOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

NodeOption::NodeOption(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeOption& NodeOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = NodeOptionsNodeTypeMapper::GetNodeOptionsNodeTypeForName(jsonValue.GetString("NodeType"));
    m_nodeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeConfig"))
  {
    m_nodeConfig = jsonValue.GetObject("NodeConfig");
    m_nodeConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeOption::Jsonize() const
{
  JsonValue payload;

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", NodeOptionsNodeTypeMapper::GetNameForNodeOptionsNodeType(m_nodeType));
  }

  if(m_nodeConfigHasBeenSet)
  {
   payload.WithObject("NodeConfig", m_nodeConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
