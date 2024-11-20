/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/CustomPattern.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

CustomPattern::CustomPattern() : 
    m_keywordRegexHasBeenSet(false),
    m_patternDescriptionHasBeenSet(false),
    m_patternNameHasBeenSet(false),
    m_patternRegexHasBeenSet(false)
{
}

CustomPattern::CustomPattern(JsonView jsonValue)
  : CustomPattern()
{
  *this = jsonValue;
}

CustomPattern& CustomPattern::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keywordRegex"))
  {
    m_keywordRegex = jsonValue.GetString("keywordRegex");

    m_keywordRegexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patternDescription"))
  {
    m_patternDescription = jsonValue.GetString("patternDescription");

    m_patternDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patternName"))
  {
    m_patternName = jsonValue.GetString("patternName");

    m_patternNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patternRegex"))
  {
    m_patternRegex = jsonValue.GetString("patternRegex");

    m_patternRegexHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomPattern::Jsonize() const
{
  JsonValue payload;

  if(m_keywordRegexHasBeenSet)
  {
   payload.WithString("keywordRegex", m_keywordRegex);

  }

  if(m_patternDescriptionHasBeenSet)
  {
   payload.WithString("patternDescription", m_patternDescription);

  }

  if(m_patternNameHasBeenSet)
  {
   payload.WithString("patternName", m_patternName);

  }

  if(m_patternRegexHasBeenSet)
  {
   payload.WithString("patternRegex", m_patternRegex);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
