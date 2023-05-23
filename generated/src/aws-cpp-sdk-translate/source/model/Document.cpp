/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/Document.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

Document::Document() : 
    m_contentHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

Document::Document(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Document& Document::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Content"))
  {
    m_content = HashingUtils::Base64Decode(jsonValue.GetString("Content"));
    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Document::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", HashingUtils::Base64Encode(m_content));
  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
