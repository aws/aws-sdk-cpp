/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/model/BatchPutMetricsError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerMetrics
{
namespace Model
{

BatchPutMetricsError::BatchPutMetricsError() : 
    m_code(PutMetricsErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_metricIndex(0),
    m_metricIndexHasBeenSet(false)
{
}

BatchPutMetricsError::BatchPutMetricsError(JsonView jsonValue) : 
    m_code(PutMetricsErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_metricIndex(0),
    m_metricIndexHasBeenSet(false)
{
  *this = jsonValue;
}

BatchPutMetricsError& BatchPutMetricsError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = PutMetricsErrorCodeMapper::GetPutMetricsErrorCodeForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricIndex"))
  {
    m_metricIndex = jsonValue.GetInteger("MetricIndex");

    m_metricIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchPutMetricsError::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", PutMetricsErrorCodeMapper::GetNameForPutMetricsErrorCode(m_code));
  }

  if(m_metricIndexHasBeenSet)
  {
   payload.WithInteger("MetricIndex", m_metricIndex);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
