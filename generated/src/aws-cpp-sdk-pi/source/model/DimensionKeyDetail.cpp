/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/DimensionKeyDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

DimensionKeyDetail::DimensionKeyDetail() : 
    m_valueHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_status(DetailStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DimensionKeyDetail::DimensionKeyDetail(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_status(DetailStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionKeyDetail& DimensionKeyDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimension"))
  {
    m_dimension = jsonValue.GetString("Dimension");

    m_dimensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DetailStatusMapper::GetDetailStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DimensionKeyDetail::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_dimensionHasBeenSet)
  {
   payload.WithString("Dimension", m_dimension);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DetailStatusMapper::GetNameForDetailStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
