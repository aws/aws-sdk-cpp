/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/AdapterVersionEvaluationMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

AdapterVersionEvaluationMetric::AdapterVersionEvaluationMetric() : 
    m_baselineHasBeenSet(false),
    m_adapterVersionHasBeenSet(false),
    m_featureType(FeatureType::NOT_SET),
    m_featureTypeHasBeenSet(false)
{
}

AdapterVersionEvaluationMetric::AdapterVersionEvaluationMetric(JsonView jsonValue) : 
    m_baselineHasBeenSet(false),
    m_adapterVersionHasBeenSet(false),
    m_featureType(FeatureType::NOT_SET),
    m_featureTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AdapterVersionEvaluationMetric& AdapterVersionEvaluationMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Baseline"))
  {
    m_baseline = jsonValue.GetObject("Baseline");

    m_baselineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdapterVersion"))
  {
    m_adapterVersion = jsonValue.GetObject("AdapterVersion");

    m_adapterVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureType"))
  {
    m_featureType = FeatureTypeMapper::GetFeatureTypeForName(jsonValue.GetString("FeatureType"));

    m_featureTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AdapterVersionEvaluationMetric::Jsonize() const
{
  JsonValue payload;

  if(m_baselineHasBeenSet)
  {
   payload.WithObject("Baseline", m_baseline.Jsonize());

  }

  if(m_adapterVersionHasBeenSet)
  {
   payload.WithObject("AdapterVersion", m_adapterVersion.Jsonize());

  }

  if(m_featureTypeHasBeenSet)
  {
   payload.WithString("FeatureType", FeatureTypeMapper::GetNameForFeatureType(m_featureType));
  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
