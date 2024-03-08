/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/WAFLimitsExceededException.h>
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

WAFLimitsExceededException::WAFLimitsExceededException() : 
    m_messageHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

WAFLimitsExceededException::WAFLimitsExceededException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

WAFLimitsExceededException& WAFLimitsExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue WAFLimitsExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
