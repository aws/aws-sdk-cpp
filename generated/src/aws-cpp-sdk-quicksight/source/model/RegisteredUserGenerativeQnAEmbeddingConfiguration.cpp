/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RegisteredUserGenerativeQnAEmbeddingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

RegisteredUserGenerativeQnAEmbeddingConfiguration::RegisteredUserGenerativeQnAEmbeddingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RegisteredUserGenerativeQnAEmbeddingConfiguration& RegisteredUserGenerativeQnAEmbeddingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InitialTopicId"))
  {
    m_initialTopicId = jsonValue.GetString("InitialTopicId");
    m_initialTopicIdHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredUserGenerativeQnAEmbeddingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_initialTopicIdHasBeenSet)
  {
   payload.WithString("InitialTopicId", m_initialTopicId);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
