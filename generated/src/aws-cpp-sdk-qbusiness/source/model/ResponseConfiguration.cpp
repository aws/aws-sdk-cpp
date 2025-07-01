/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ResponseConfiguration.h>
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

ResponseConfiguration::ResponseConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ResponseConfiguration& ResponseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instructionCollection"))
  {
    m_instructionCollection = jsonValue.GetObject("instructionCollection");
    m_instructionCollectionHasBeenSet = true;
  }
  return *this;
}

JsonValue ResponseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instructionCollectionHasBeenSet)
  {
   payload.WithObject("instructionCollection", m_instructionCollection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
