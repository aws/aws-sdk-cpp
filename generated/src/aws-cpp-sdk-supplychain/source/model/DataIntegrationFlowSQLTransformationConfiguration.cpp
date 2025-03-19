/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowSQLTransformationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

DataIntegrationFlowSQLTransformationConfiguration::DataIntegrationFlowSQLTransformationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowSQLTransformationConfiguration& DataIntegrationFlowSQLTransformationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("query"))
  {
    m_query = jsonValue.GetString("query");
    m_queryHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowSQLTransformationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_queryHasBeenSet)
  {
   payload.WithString("query", m_query);

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
