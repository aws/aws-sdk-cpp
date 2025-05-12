/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationEventDatasetLoadExecutionDetails.h>
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

DataIntegrationEventDatasetLoadExecutionDetails::DataIntegrationEventDatasetLoadExecutionDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationEventDatasetLoadExecutionDetails& DataIntegrationEventDatasetLoadExecutionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = DataIntegrationEventDatasetLoadStatusMapper::GetDataIntegrationEventDatasetLoadStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationEventDatasetLoadExecutionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DataIntegrationEventDatasetLoadStatusMapper::GetNameForDataIntegrationEventDatasetLoadStatus(m_status));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
