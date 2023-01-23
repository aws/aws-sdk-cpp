/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/SubStatementData.h>
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

SubStatementData::SubStatementData() : 
    m_createdAtHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_hasResultSet(false),
    m_hasResultSetHasBeenSet(false),
    m_idHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_redshiftQueryId(0),
    m_redshiftQueryIdHasBeenSet(false),
    m_resultRows(0),
    m_resultRowsHasBeenSet(false),
    m_resultSize(0),
    m_resultSizeHasBeenSet(false),
    m_status(StatementStatusString::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

SubStatementData::SubStatementData(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_hasResultSet(false),
    m_hasResultSetHasBeenSet(false),
    m_idHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_redshiftQueryId(0),
    m_redshiftQueryIdHasBeenSet(false),
    m_resultRows(0),
    m_resultRowsHasBeenSet(false),
    m_resultSize(0),
    m_resultSizeHasBeenSet(false),
    m_status(StatementStatusString::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

SubStatementData& SubStatementData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HasResultSet"))
  {
    m_hasResultSet = jsonValue.GetBool("HasResultSet");

    m_hasResultSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetString("QueryString");

    m_queryStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftQueryId"))
  {
    m_redshiftQueryId = jsonValue.GetInt64("RedshiftQueryId");

    m_redshiftQueryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultRows"))
  {
    m_resultRows = jsonValue.GetInt64("ResultRows");

    m_resultRowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultSize"))
  {
    m_resultSize = jsonValue.GetInt64("ResultSize");

    m_resultSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatementStatusStringMapper::GetStatementStatusStringForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue SubStatementData::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("Duration", m_duration);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", m_error);

  }

  if(m_hasResultSetHasBeenSet)
  {
   payload.WithBool("HasResultSet", m_hasResultSet);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  if(m_redshiftQueryIdHasBeenSet)
  {
   payload.WithInt64("RedshiftQueryId", m_redshiftQueryId);

  }

  if(m_resultRowsHasBeenSet)
  {
   payload.WithInt64("ResultRows", m_resultRows);

  }

  if(m_resultSizeHasBeenSet)
  {
   payload.WithInt64("ResultSize", m_resultSize);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatementStatusStringMapper::GetNameForStatementStatusString(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
