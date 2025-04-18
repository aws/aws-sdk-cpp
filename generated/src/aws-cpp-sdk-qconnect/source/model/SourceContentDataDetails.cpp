/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SourceContentDataDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

SourceContentDataDetails::SourceContentDataDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceContentDataDetails& SourceContentDataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = SourceContentTypeMapper::GetSourceContentTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("textData"))
  {
    m_textData = jsonValue.GetObject("textData");
    m_textDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rankingData"))
  {
    m_rankingData = jsonValue.GetObject("rankingData");
    m_rankingDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("citationSpan"))
  {
    m_citationSpan = jsonValue.GetObject("citationSpan");
    m_citationSpanHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceContentDataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SourceContentTypeMapper::GetNameForSourceContentType(m_type));
  }

  if(m_textDataHasBeenSet)
  {
   payload.WithObject("textData", m_textData.Jsonize());

  }

  if(m_rankingDataHasBeenSet)
  {
   payload.WithObject("rankingData", m_rankingData.Jsonize());

  }

  if(m_citationSpanHasBeenSet)
  {
   payload.WithObject("citationSpan", m_citationSpan.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
