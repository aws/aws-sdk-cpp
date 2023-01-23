/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/EndSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

EndSessionResult::EndSessionResult() : 
    m_timingInformationHasBeenSet(false)
{
}

EndSessionResult::EndSessionResult(JsonView jsonValue) : 
    m_timingInformationHasBeenSet(false)
{
  *this = jsonValue;
}

EndSessionResult& EndSessionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimingInformation"))
  {
    m_timingInformation = jsonValue.GetObject("TimingInformation");

    m_timingInformationHasBeenSet = true;
  }

  return *this;
}

JsonValue EndSessionResult::Jsonize() const
{
  JsonValue payload;

  if(m_timingInformationHasBeenSet)
  {
   payload.WithObject("TimingInformation", m_timingInformation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
