/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/CustomResponseBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

CustomResponseBody::CustomResponseBody() : 
    m_contentType(ResponseContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CustomResponseBody::CustomResponseBody(JsonView jsonValue) : 
    m_contentType(ResponseContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

CustomResponseBody& CustomResponseBody::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = ResponseContentTypeMapper::GetResponseContentTypeForName(jsonValue.GetString("ContentType"));

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomResponseBody::Jsonize() const
{
  JsonValue payload;

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", ResponseContentTypeMapper::GetNameForResponseContentType(m_contentType));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
