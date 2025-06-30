/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TextBoxInteractionOptions.h>
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

TextBoxInteractionOptions::TextBoxInteractionOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

TextBoxInteractionOptions& TextBoxInteractionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TextBoxMenuOption"))
  {
    m_textBoxMenuOption = jsonValue.GetObject("TextBoxMenuOption");
    m_textBoxMenuOptionHasBeenSet = true;
  }
  return *this;
}

JsonValue TextBoxInteractionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_textBoxMenuOptionHasBeenSet)
  {
   payload.WithObject("TextBoxMenuOption", m_textBoxMenuOption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
