/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TeletextSourceSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

TeletextSourceSettings::TeletextSourceSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

TeletextSourceSettings& TeletextSourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputRectangle"))
  {
    m_outputRectangle = jsonValue.GetObject("outputRectangle");
    m_outputRectangleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pageNumber"))
  {
    m_pageNumber = jsonValue.GetString("pageNumber");
    m_pageNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue TeletextSourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_outputRectangleHasBeenSet)
  {
   payload.WithObject("outputRectangle", m_outputRectangle.Jsonize());

  }

  if(m_pageNumberHasBeenSet)
  {
   payload.WithString("pageNumber", m_pageNumber);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
