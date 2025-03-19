/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ContentSource.h>
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

ContentSource::ContentSource(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentSource& ContentSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("retriever"))
  {
    m_retriever = jsonValue.GetObject("retriever");
    m_retrieverHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentSource::Jsonize() const
{
  JsonValue payload;

  if(m_retrieverHasBeenSet)
  {
   payload.WithObject("retriever", m_retriever.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
