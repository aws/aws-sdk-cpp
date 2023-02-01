/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/LendingDetection.h>
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

LendingDetection::LendingDetection() : 
    m_textHasBeenSet(false),
    m_selectionStatus(SelectionStatus::NOT_SET),
    m_selectionStatusHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
}

LendingDetection::LendingDetection(JsonView jsonValue) : 
    m_textHasBeenSet(false),
    m_selectionStatus(SelectionStatus::NOT_SET),
    m_selectionStatusHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
  *this = jsonValue;
}

LendingDetection& LendingDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectionStatus"))
  {
    m_selectionStatus = SelectionStatusMapper::GetSelectionStatusForName(jsonValue.GetString("SelectionStatus"));

    m_selectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");

    m_geometryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue LendingDetection::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_selectionStatusHasBeenSet)
  {
   payload.WithString("SelectionStatus", SelectionStatusMapper::GetNameForSelectionStatus(m_selectionStatus));
  }

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
