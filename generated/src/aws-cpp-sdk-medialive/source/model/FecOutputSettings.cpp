/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FecOutputSettings.h>
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

FecOutputSettings::FecOutputSettings() : 
    m_columnDepth(0),
    m_columnDepthHasBeenSet(false),
    m_includeFec(FecOutputIncludeFec::NOT_SET),
    m_includeFecHasBeenSet(false),
    m_rowLength(0),
    m_rowLengthHasBeenSet(false)
{
}

FecOutputSettings::FecOutputSettings(JsonView jsonValue) : 
    m_columnDepth(0),
    m_columnDepthHasBeenSet(false),
    m_includeFec(FecOutputIncludeFec::NOT_SET),
    m_includeFecHasBeenSet(false),
    m_rowLength(0),
    m_rowLengthHasBeenSet(false)
{
  *this = jsonValue;
}

FecOutputSettings& FecOutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnDepth"))
  {
    m_columnDepth = jsonValue.GetInteger("columnDepth");

    m_columnDepthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeFec"))
  {
    m_includeFec = FecOutputIncludeFecMapper::GetFecOutputIncludeFecForName(jsonValue.GetString("includeFec"));

    m_includeFecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rowLength"))
  {
    m_rowLength = jsonValue.GetInteger("rowLength");

    m_rowLengthHasBeenSet = true;
  }

  return *this;
}

JsonValue FecOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_columnDepthHasBeenSet)
  {
   payload.WithInteger("columnDepth", m_columnDepth);

  }

  if(m_includeFecHasBeenSet)
  {
   payload.WithString("includeFec", FecOutputIncludeFecMapper::GetNameForFecOutputIncludeFec(m_includeFec));
  }

  if(m_rowLengthHasBeenSet)
  {
   payload.WithInteger("rowLength", m_rowLength);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
