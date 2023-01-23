/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/BatchCreateRumMetricDefinitionsError.h>
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

BatchCreateRumMetricDefinitionsError::BatchCreateRumMetricDefinitionsError() : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_metricDefinitionHasBeenSet(false)
{
}

BatchCreateRumMetricDefinitionsError::BatchCreateRumMetricDefinitionsError(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_metricDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

BatchCreateRumMetricDefinitionsError& BatchCreateRumMetricDefinitionsError::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("MetricDefinition"))
  {
    m_metricDefinition = jsonValue.GetObject("MetricDefinition");

    m_metricDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchCreateRumMetricDefinitionsError::Jsonize() const
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

  if(m_metricDefinitionHasBeenSet)
  {
   payload.WithObject("MetricDefinition", m_metricDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
