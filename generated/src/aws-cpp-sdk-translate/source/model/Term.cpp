/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/Term.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

Term::Term() : 
    m_sourceTextHasBeenSet(false),
    m_targetTextHasBeenSet(false)
{
}

Term::Term(JsonView jsonValue) : 
    m_sourceTextHasBeenSet(false),
    m_targetTextHasBeenSet(false)
{
  *this = jsonValue;
}

Term& Term::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceText"))
  {
    m_sourceText = jsonValue.GetString("SourceText");

    m_sourceTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetText"))
  {
    m_targetText = jsonValue.GetString("TargetText");

    m_targetTextHasBeenSet = true;
  }

  return *this;
}

JsonValue Term::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTextHasBeenSet)
  {
   payload.WithString("SourceText", m_sourceText);

  }

  if(m_targetTextHasBeenSet)
  {
   payload.WithString("TargetText", m_targetText);

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
