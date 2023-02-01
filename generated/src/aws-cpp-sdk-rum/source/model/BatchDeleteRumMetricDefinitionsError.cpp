/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/BatchDeleteRumMetricDefinitionsError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

BatchDeleteRumMetricDefinitionsError::BatchDeleteRumMetricDefinitionsError() : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_metricDefinitionIdHasBeenSet(false)
{
}

BatchDeleteRumMetricDefinitionsError::BatchDeleteRumMetricDefinitionsError(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_metricDefinitionIdHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDeleteRumMetricDefinitionsError& BatchDeleteRumMetricDefinitionsError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricDefinitionId"))
  {
    m_metricDefinitionId = jsonValue.GetString("MetricDefinitionId");

    m_metricDefinitionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDeleteRumMetricDefinitionsError::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_metricDefinitionIdHasBeenSet)
  {
   payload.WithString("MetricDefinitionId", m_metricDefinitionId);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
