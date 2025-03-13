/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultDateTimePickerControlOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DefaultDateTimePickerControlOptions::DefaultDateTimePickerControlOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DefaultDateTimePickerControlOptions& DefaultDateTimePickerControlOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = SheetControlDateTimePickerTypeMapper::GetSheetControlDateTimePickerTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayOptions"))
  {
    m_displayOptions = jsonValue.GetObject("DisplayOptions");
    m_displayOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CommitMode"))
  {
    m_commitMode = CommitModeMapper::GetCommitModeForName(jsonValue.GetString("CommitMode"));
    m_commitModeHasBeenSet = true;
  }
  return *this;
}

JsonValue DefaultDateTimePickerControlOptions::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SheetControlDateTimePickerTypeMapper::GetNameForSheetControlDateTimePickerType(m_type));
  }

  if(m_displayOptionsHasBeenSet)
  {
   payload.WithObject("DisplayOptions", m_displayOptions.Jsonize());

  }

  if(m_commitModeHasBeenSet)
  {
   payload.WithString("CommitMode", CommitModeMapper::GetNameForCommitMode(m_commitMode));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
