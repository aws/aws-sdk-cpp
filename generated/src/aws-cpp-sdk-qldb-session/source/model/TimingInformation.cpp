/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/TimingInformation.h>
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

TimingInformation::TimingInformation(JsonView jsonValue)
{
  *this = jsonValue;
}

TimingInformation& TimingInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProcessingTimeMilliseconds"))
  {
    m_processingTimeMilliseconds = jsonValue.GetInt64("ProcessingTimeMilliseconds");
    m_processingTimeMillisecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue TimingInformation::Jsonize() const
{
  JsonValue payload;

  if(m_processingTimeMillisecondsHasBeenSet)
  {
   payload.WithInt64("ProcessingTimeMilliseconds", m_processingTimeMilliseconds);

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
