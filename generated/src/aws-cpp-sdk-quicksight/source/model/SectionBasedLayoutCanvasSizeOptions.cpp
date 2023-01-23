/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SectionBasedLayoutCanvasSizeOptions.h>
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

SectionBasedLayoutCanvasSizeOptions::SectionBasedLayoutCanvasSizeOptions() : 
    m_paperCanvasSizeOptionsHasBeenSet(false)
{
}

SectionBasedLayoutCanvasSizeOptions::SectionBasedLayoutCanvasSizeOptions(JsonView jsonValue) : 
    m_paperCanvasSizeOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

SectionBasedLayoutCanvasSizeOptions& SectionBasedLayoutCanvasSizeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PaperCanvasSizeOptions"))
  {
    m_paperCanvasSizeOptions = jsonValue.GetObject("PaperCanvasSizeOptions");

    m_paperCanvasSizeOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SectionBasedLayoutCanvasSizeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_paperCanvasSizeOptionsHasBeenSet)
  {
   payload.WithObject("PaperCanvasSizeOptions", m_paperCanvasSizeOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
