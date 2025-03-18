/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CopyFromSource.h>
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

CopyFromSource::CopyFromSource(JsonView jsonValue)
{
  *this = jsonValue;
}

CopyFromSource& CopyFromSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conversation"))
  {
    m_conversation = jsonValue.GetObject("conversation");
    m_conversationHasBeenSet = true;
  }
  return *this;
}

JsonValue CopyFromSource::Jsonize() const
{
  JsonValue payload;

  if(m_conversationHasBeenSet)
  {
   payload.WithObject("conversation", m_conversation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
