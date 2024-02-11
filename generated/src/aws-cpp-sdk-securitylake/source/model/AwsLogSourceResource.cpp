/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/AwsLogSourceResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

AwsLogSourceResource::AwsLogSourceResource() : 
    m_sourceName(AwsLogSourceName::NOT_SET),
    m_sourceNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
}

AwsLogSourceResource::AwsLogSourceResource(JsonView jsonValue) : 
    m_sourceName(AwsLogSourceName::NOT_SET),
    m_sourceNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsLogSourceResource& AwsLogSourceResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceName"))
  {
    m_sourceName = AwsLogSourceNameMapper::GetAwsLogSourceNameForName(jsonValue.GetString("sourceName"));

    m_sourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceVersion"))
  {
    m_sourceVersion = jsonValue.GetString("sourceVersion");

    m_sourceVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsLogSourceResource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("sourceName", AwsLogSourceNameMapper::GetNameForAwsLogSourceName(m_sourceName));
  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
