/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BodySectionContent.h>
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

BodySectionContent::BodySectionContent() : 
    m_layoutHasBeenSet(false)
{
}

BodySectionContent::BodySectionContent(JsonView jsonValue) : 
    m_layoutHasBeenSet(false)
{
  *this = jsonValue;
}

BodySectionContent& BodySectionContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Layout"))
  {
    m_layout = jsonValue.GetObject("Layout");

    m_layoutHasBeenSet = true;
  }

  return *this;
}

JsonValue BodySectionContent::Jsonize() const
{
  JsonValue payload;

  if(m_layoutHasBeenSet)
  {
   payload.WithObject("Layout", m_layout.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
