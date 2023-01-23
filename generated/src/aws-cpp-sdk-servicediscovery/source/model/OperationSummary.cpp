/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/OperationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

OperationSummary::OperationSummary() : 
    m_idHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

OperationSummary::OperationSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

OperationSummary& OperationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue OperationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OperationStatusMapper::GetNameForOperationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
