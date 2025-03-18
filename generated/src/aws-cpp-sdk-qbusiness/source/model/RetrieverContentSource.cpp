/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/RetrieverContentSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

RetrieverContentSource::RetrieverContentSource(JsonView jsonValue)
{
  *this = jsonValue;
}

RetrieverContentSource& RetrieverContentSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("retrieverId"))
  {
    m_retrieverId = jsonValue.GetString("retrieverId");
    m_retrieverIdHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrieverContentSource::Jsonize() const
{
  JsonValue payload;

  if(m_retrieverIdHasBeenSet)
  {
   payload.WithString("retrieverId", m_retrieverId);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
