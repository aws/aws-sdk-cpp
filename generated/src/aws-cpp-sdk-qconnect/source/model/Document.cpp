/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/Document.h>
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

Document::Document() : 
    m_contentReferenceHasBeenSet(false),
    m_excerptHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

Document::Document(JsonView jsonValue) : 
    m_contentReferenceHasBeenSet(false),
    m_excerptHasBeenSet(false),
    m_titleHasBeenSet(false)
{
  *this = jsonValue;
}

Document& Document::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentReference"))
  {
    m_contentReference = jsonValue.GetObject("contentReference");

    m_contentReferenceHasBeenSet = true;
  }

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

JsonValue Document::Jsonize() const
{
  JsonValue payload;

  if(m_contentReferenceHasBeenSet)
  {
   payload.WithObject("contentReference", m_contentReference.Jsonize());

  }

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
