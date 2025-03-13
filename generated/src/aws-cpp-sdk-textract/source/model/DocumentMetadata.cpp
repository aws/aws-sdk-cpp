/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/DocumentMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

DocumentMetadata::DocumentMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentMetadata& DocumentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Pages"))
  {
    m_pages = jsonValue.GetInteger("Pages");
    m_pagesHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_pagesHasBeenSet)
  {
   payload.WithInteger("Pages", m_pages);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
