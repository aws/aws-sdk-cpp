﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TextFieldControlDisplayOptions.h>
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

TextFieldControlDisplayOptions::TextFieldControlDisplayOptions() : 
    m_titleOptionsHasBeenSet(false),
    m_placeholderOptionsHasBeenSet(false),
    m_infoIconLabelOptionsHasBeenSet(false)
{
}

TextFieldControlDisplayOptions::TextFieldControlDisplayOptions(JsonView jsonValue) : 
    m_titleOptionsHasBeenSet(false),
    m_placeholderOptionsHasBeenSet(false),
    m_infoIconLabelOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

TextFieldControlDisplayOptions& TextFieldControlDisplayOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TitleOptions"))
  {
    m_titleOptions = jsonValue.GetObject("TitleOptions");

    m_titleOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlaceholderOptions"))
  {
    m_placeholderOptions = jsonValue.GetObject("PlaceholderOptions");

    m_placeholderOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InfoIconLabelOptions"))
  {
    m_infoIconLabelOptions = jsonValue.GetObject("InfoIconLabelOptions");

    m_infoIconLabelOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TextFieldControlDisplayOptions::Jsonize() const
{
  JsonValue payload;

  if(m_titleOptionsHasBeenSet)
  {
   payload.WithObject("TitleOptions", m_titleOptions.Jsonize());

  }

  if(m_placeholderOptionsHasBeenSet)
  {
   payload.WithObject("PlaceholderOptions", m_placeholderOptions.Jsonize());

  }

  if(m_infoIconLabelOptionsHasBeenSet)
  {
   payload.WithObject("InfoIconLabelOptions", m_infoIconLabelOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
