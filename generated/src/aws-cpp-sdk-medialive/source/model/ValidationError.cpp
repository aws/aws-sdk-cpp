/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ValidationError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

ValidationError::ValidationError() : 
    m_elementPathHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

ValidationError::ValidationError(JsonView jsonValue) : 
    m_elementPathHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationError& ValidationError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("elementPath"))
  {
    m_elementPath = jsonValue.GetString("elementPath");

    m_elementPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationError::Jsonize() const
{
  JsonValue payload;

  if(m_elementPathHasBeenSet)
  {
   payload.WithString("elementPath", m_elementPath);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
