/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ErrorInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

ErrorInfo::ErrorInfo() : 
    m_causeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

ErrorInfo::ErrorInfo(JsonView jsonValue) : 
    m_causeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorInfo& ErrorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cause"))
  {
    m_cause = jsonValue.GetString("cause");

    m_causeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");

    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", m_cause);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
