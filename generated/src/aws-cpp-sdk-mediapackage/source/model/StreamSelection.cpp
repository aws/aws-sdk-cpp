/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/StreamSelection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

StreamSelection::StreamSelection(JsonView jsonValue)
{
  *this = jsonValue;
}

StreamSelection& StreamSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxVideoBitsPerSecond"))
  {
    m_maxVideoBitsPerSecond = jsonValue.GetInteger("maxVideoBitsPerSecond");
    m_maxVideoBitsPerSecondHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minVideoBitsPerSecond"))
  {
    m_minVideoBitsPerSecond = jsonValue.GetInteger("minVideoBitsPerSecond");
    m_minVideoBitsPerSecondHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamOrder"))
  {
    m_streamOrder = StreamOrderMapper::GetStreamOrderForName(jsonValue.GetString("streamOrder"));
    m_streamOrderHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamSelection::Jsonize() const
{
  JsonValue payload;

  if(m_maxVideoBitsPerSecondHasBeenSet)
  {
   payload.WithInteger("maxVideoBitsPerSecond", m_maxVideoBitsPerSecond);

  }

  if(m_minVideoBitsPerSecondHasBeenSet)
  {
   payload.WithInteger("minVideoBitsPerSecond", m_minVideoBitsPerSecond);

  }

  if(m_streamOrderHasBeenSet)
  {
   payload.WithString("streamOrder", StreamOrderMapper::GetNameForStreamOrder(m_streamOrder));
  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
