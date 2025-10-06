/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/IndexStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

IndexStatus::IndexStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

IndexStatus& IndexStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetObject("Index");
    m_indexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("ErrorDetails");
    m_errorDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue IndexStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OperationStatusMapper::GetNameForOperationStatus(m_status));
  }

  if(m_indexHasBeenSet)
  {
   payload.WithObject("Index", m_index.Jsonize());

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithObject("ErrorDetails", m_errorDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
