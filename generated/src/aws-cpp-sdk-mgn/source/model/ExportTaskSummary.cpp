/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ExportTaskSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

ExportTaskSummary::ExportTaskSummary() : 
    m_applicationsCount(0),
    m_applicationsCountHasBeenSet(false),
    m_serversCount(0),
    m_serversCountHasBeenSet(false),
    m_wavesCount(0),
    m_wavesCountHasBeenSet(false)
{
}

ExportTaskSummary::ExportTaskSummary(JsonView jsonValue) : 
    m_applicationsCount(0),
    m_applicationsCountHasBeenSet(false),
    m_serversCount(0),
    m_serversCountHasBeenSet(false),
    m_wavesCount(0),
    m_wavesCountHasBeenSet(false)
{
  *this = jsonValue;
}

ExportTaskSummary& ExportTaskSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationsCount"))
  {
    m_applicationsCount = jsonValue.GetInt64("applicationsCount");

    m_applicationsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serversCount"))
  {
    m_serversCount = jsonValue.GetInt64("serversCount");

    m_serversCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("wavesCount"))
  {
    m_wavesCount = jsonValue.GetInt64("wavesCount");

    m_wavesCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportTaskSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationsCountHasBeenSet)
  {
   payload.WithInt64("applicationsCount", m_applicationsCount);

  }

  if(m_serversCountHasBeenSet)
  {
   payload.WithInt64("serversCount", m_serversCount);

  }

  if(m_wavesCountHasBeenSet)
  {
   payload.WithInt64("wavesCount", m_wavesCount);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
