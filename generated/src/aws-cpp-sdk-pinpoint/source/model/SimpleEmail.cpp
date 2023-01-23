/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SimpleEmail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SimpleEmail::SimpleEmail() : 
    m_htmlPartHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_textPartHasBeenSet(false)
{
}

SimpleEmail::SimpleEmail(JsonView jsonValue) : 
    m_htmlPartHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_textPartHasBeenSet(false)
{
  *this = jsonValue;
}

SimpleEmail& SimpleEmail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HtmlPart"))
  {
    m_htmlPart = jsonValue.GetObject("HtmlPart");

    m_htmlPartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetObject("Subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextPart"))
  {
    m_textPart = jsonValue.GetObject("TextPart");

    m_textPartHasBeenSet = true;
  }

  return *this;
}

JsonValue SimpleEmail::Jsonize() const
{
  JsonValue payload;

  if(m_htmlPartHasBeenSet)
  {
   payload.WithObject("HtmlPart", m_htmlPart.Jsonize());

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithObject("Subject", m_subject.Jsonize());

  }

  if(m_textPartHasBeenSet)
  {
   payload.WithObject("TextPart", m_textPart.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
