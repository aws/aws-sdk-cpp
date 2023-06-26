/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TranslatedDocument.h>
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

TranslatedDocument::TranslatedDocument() : 
    m_contentHasBeenSet(false)
{
}

TranslatedDocument::TranslatedDocument(JsonView jsonValue) : 
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

TranslatedDocument& TranslatedDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Content"))
  {
    m_content = HashingUtils::Base64Decode(jsonValue.GetString("Content"));
    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue TranslatedDocument::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", HashingUtils::Base64Encode(m_content));
  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
