/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Content.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

Content::Content() : 
    m_dataHasBeenSet(false),
    m_charsetHasBeenSet(false)
{
}

Content::Content(JsonView jsonValue) : 
    m_dataHasBeenSet(false),
    m_charsetHasBeenSet(false)
{
  *this = jsonValue;
}

Content& Content::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Data"))
  {
    m_data = jsonValue.GetString("Data");

    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Charset"))
  {
    m_charset = jsonValue.GetString("Charset");

    m_charsetHasBeenSet = true;
  }

  return *this;
}

JsonValue Content::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithString("Data", m_data);

  }

  if(m_charsetHasBeenSet)
  {
   payload.WithString("Charset", m_charset);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
