/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ProblemDetails.h>
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

ProblemDetails::ProblemDetails() : 
    m_detailHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

ProblemDetails::ProblemDetails(JsonView jsonValue) : 
    m_detailHasBeenSet(false),
    m_titleHasBeenSet(false)
{
  *this = jsonValue;
}

ProblemDetails& ProblemDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detail"))
  {
    m_detail = jsonValue.GetString("detail");

    m_detailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  return *this;
}

JsonValue ProblemDetails::Jsonize() const
{
  JsonValue payload;

  if(m_detailHasBeenSet)
  {
   payload.WithString("detail", m_detail);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
