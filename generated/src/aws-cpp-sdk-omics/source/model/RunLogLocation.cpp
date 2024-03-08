/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/RunLogLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

RunLogLocation::RunLogLocation() : 
    m_engineLogStreamHasBeenSet(false),
    m_runLogStreamHasBeenSet(false)
{
}

RunLogLocation::RunLogLocation(JsonView jsonValue) : 
    m_engineLogStreamHasBeenSet(false),
    m_runLogStreamHasBeenSet(false)
{
  *this = jsonValue;
}

RunLogLocation& RunLogLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("engineLogStream"))
  {
    m_engineLogStream = jsonValue.GetString("engineLogStream");

    m_engineLogStreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runLogStream"))
  {
    m_runLogStream = jsonValue.GetString("runLogStream");

    m_runLogStreamHasBeenSet = true;
  }

  return *this;
}

JsonValue RunLogLocation::Jsonize() const
{
  JsonValue payload;

  if(m_engineLogStreamHasBeenSet)
  {
   payload.WithString("engineLogStream", m_engineLogStream);

  }

  if(m_runLogStreamHasBeenSet)
  {
   payload.WithString("runLogStream", m_runLogStream);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
