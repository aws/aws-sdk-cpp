/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TextAreaControlDisplayOptions.h>
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

TextAreaControlDisplayOptions::TextAreaControlDisplayOptions() : 
    m_titleOptionsHasBeenSet(false),
    m_placeholderOptionsHasBeenSet(false)
{
}

TextAreaControlDisplayOptions::TextAreaControlDisplayOptions(JsonView jsonValue) : 
    m_titleOptionsHasBeenSet(false),
    m_placeholderOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

TextAreaControlDisplayOptions& TextAreaControlDisplayOptions::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue TextAreaControlDisplayOptions::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
