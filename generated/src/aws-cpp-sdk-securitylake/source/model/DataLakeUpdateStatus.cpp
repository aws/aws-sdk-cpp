/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeUpdateStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

DataLakeUpdateStatus::DataLakeUpdateStatus() : 
    m_exceptionHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_status(DataLakeStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DataLakeUpdateStatus::DataLakeUpdateStatus(JsonView jsonValue) : 
    m_exceptionHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_status(DataLakeStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeUpdateStatus& DataLakeUpdateStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exception"))
  {
    m_exception = jsonValue.GetObject("exception");

    m_exceptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

    m_requestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DataLakeStatusMapper::GetDataLakeStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeUpdateStatus::Jsonize() const
{
  JsonValue payload;

  if(m_exceptionHasBeenSet)
  {
   payload.WithObject("exception", m_exception.Jsonize());

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DataLakeStatusMapper::GetNameForDataLakeStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
