/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OutputSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OutputSource::OutputSource() : 
    m_outputSourceIdHasBeenSet(false),
    m_outputSourceTypeHasBeenSet(false)
{
}

OutputSource::OutputSource(JsonView jsonValue) : 
    m_outputSourceIdHasBeenSet(false),
    m_outputSourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

OutputSource& OutputSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputSourceId"))
  {
    m_outputSourceId = jsonValue.GetString("OutputSourceId");

    m_outputSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputSourceType"))
  {
    m_outputSourceType = jsonValue.GetString("OutputSourceType");

    m_outputSourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputSource::Jsonize() const
{
  JsonValue payload;

  if(m_outputSourceIdHasBeenSet)
  {
   payload.WithString("OutputSourceId", m_outputSourceId);

  }

  if(m_outputSourceTypeHasBeenSet)
  {
   payload.WithString("OutputSourceType", m_outputSourceType);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
