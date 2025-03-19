/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/Regex.h>
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

Regex::Regex(JsonView jsonValue)
{
  *this = jsonValue;
}

Regex& Regex::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegexString"))
  {
    m_regexString = jsonValue.GetString("RegexString");
    m_regexStringHasBeenSet = true;
  }
  return *this;
}

JsonValue Regex::Jsonize() const
{
  JsonValue payload;

  if(m_regexStringHasBeenSet)
  {
   payload.WithString("RegexString", m_regexString);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
