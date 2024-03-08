/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/QuickResponseContents.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

QuickResponseContents::QuickResponseContents() : 
    m_markdownHasBeenSet(false),
    m_plainTextHasBeenSet(false)
{
}

QuickResponseContents::QuickResponseContents(JsonView jsonValue) : 
    m_markdownHasBeenSet(false),
    m_plainTextHasBeenSet(false)
{
  *this = jsonValue;
}

QuickResponseContents& QuickResponseContents::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("markdown"))
  {
    m_markdown = jsonValue.GetObject("markdown");

    m_markdownHasBeenSet = true;
  }

  if(jsonValue.ValueExists("plainText"))
  {
    m_plainText = jsonValue.GetObject("plainText");

    m_plainTextHasBeenSet = true;
  }

  return *this;
}

JsonValue QuickResponseContents::Jsonize() const
{
  JsonValue payload;

  if(m_markdownHasBeenSet)
  {
   payload.WithObject("markdown", m_markdown.Jsonize());

  }

  if(m_plainTextHasBeenSet)
  {
   payload.WithObject("plainText", m_plainText.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
