﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/QuickResponseContents.h>
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

QuickResponseContents::QuickResponseContents(JsonView jsonValue)
{
  *this = jsonValue;
}

QuickResponseContents& QuickResponseContents::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("plainText"))
  {
    m_plainText = jsonValue.GetObject("plainText");
    m_plainTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("markdown"))
  {
    m_markdown = jsonValue.GetObject("markdown");
    m_markdownHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickResponseContents::Jsonize() const
{
  JsonValue payload;

  if(m_plainTextHasBeenSet)
  {
   payload.WithObject("plainText", m_plainText.Jsonize());

  }

  if(m_markdownHasBeenSet)
  {
   payload.WithObject("markdown", m_markdown.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
