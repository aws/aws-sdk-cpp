/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Note.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Note::Note() : 
    m_textHasBeenSet(false),
    m_updatedByHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Note::Note(JsonView jsonValue) : 
    m_textHasBeenSet(false),
    m_updatedByHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Note& Note::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedBy"))
  {
    m_updatedBy = jsonValue.GetString("UpdatedBy");

    m_updatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Note::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("UpdatedBy", m_updatedBy);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
