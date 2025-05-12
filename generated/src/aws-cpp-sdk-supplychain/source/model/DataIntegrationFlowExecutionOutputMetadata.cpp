/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowExecutionOutputMetadata.h>
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

DataIntegrationFlowExecutionOutputMetadata::DataIntegrationFlowExecutionOutputMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationFlowExecutionOutputMetadata& DataIntegrationFlowExecutionOutputMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("diagnosticReportsRootS3URI"))
  {
    m_diagnosticReportsRootS3URI = jsonValue.GetString("diagnosticReportsRootS3URI");
    m_diagnosticReportsRootS3URIHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationFlowExecutionOutputMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_diagnosticReportsRootS3URIHasBeenSet)
  {
   payload.WithString("diagnosticReportsRootS3URI", m_diagnosticReportsRootS3URI);

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
