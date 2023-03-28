/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/CoverageTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

CoverageTime::CoverageTime() : 
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

CoverageTime::CoverageTime(JsonView jsonValue) : 
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageTime& CoverageTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Start"))
  {
    m_start = jsonValue.GetObject("Start");

    m_startHasBeenSet = true;
  }

  if(jsonValue.ValueExists("End"))
  {
    m_end = jsonValue.GetObject("End");

    m_endHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageTime::Jsonize() const
{
  JsonValue payload;

  if(m_startHasBeenSet)
  {
   payload.WithObject("Start", m_start.Jsonize());

  }

  if(m_endHasBeenSet)
  {
   payload.WithObject("End", m_end.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
