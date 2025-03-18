/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetImageSource.h>
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

SheetImageSource::SheetImageSource(JsonView jsonValue)
{
  *this = jsonValue;
}

SheetImageSource& SheetImageSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SheetImageStaticFileSource"))
  {
    m_sheetImageStaticFileSource = jsonValue.GetObject("SheetImageStaticFileSource");
    m_sheetImageStaticFileSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue SheetImageSource::Jsonize() const
{
  JsonValue payload;

  if(m_sheetImageStaticFileSourceHasBeenSet)
  {
   payload.WithObject("SheetImageStaticFileSource", m_sheetImageStaticFileSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
