/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/TextData.h>
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

TextData::TextData() : 
    m_excerptHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

TextData::TextData(JsonView jsonValue) : 
    m_excerptHasBeenSet(false),
    m_titleHasBeenSet(false)
{
  *this = jsonValue;
}

TextData& TextData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("excerpt"))
  {
    m_excerpt = jsonValue.GetObject("excerpt");

    m_excerptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetObject("title");

    m_titleHasBeenSet = true;
  }

  return *this;
}

JsonValue TextData::Jsonize() const
{
  JsonValue payload;

  if(m_excerptHasBeenSet)
  {
   payload.WithObject("excerpt", m_excerpt.Jsonize());

  }

  if(m_titleHasBeenSet)
  {
   payload.WithObject("title", m_title.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
