/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/QueryRecords.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftDataAPIService
{
namespace Model
{

QueryRecords::QueryRecords(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryRecords& QueryRecords::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CSVRecords"))
  {
    m_cSVRecords = jsonValue.GetString("CSVRecords");
    m_cSVRecordsHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryRecords::Jsonize() const
{
  JsonValue payload;

  if(m_cSVRecordsHasBeenSet)
  {
   payload.WithString("CSVRecords", m_cSVRecords);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
