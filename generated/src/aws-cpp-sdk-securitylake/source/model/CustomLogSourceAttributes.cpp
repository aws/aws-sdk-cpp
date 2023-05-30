/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CustomLogSourceAttributes.h>
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

CustomLogSourceAttributes::CustomLogSourceAttributes() : 
    m_crawlerArnHasBeenSet(false),
    m_databaseArnHasBeenSet(false),
    m_tableArnHasBeenSet(false)
{
}

CustomLogSourceAttributes::CustomLogSourceAttributes(JsonView jsonValue) : 
    m_crawlerArnHasBeenSet(false),
    m_databaseArnHasBeenSet(false),
    m_tableArnHasBeenSet(false)
{
  *this = jsonValue;
}

CustomLogSourceAttributes& CustomLogSourceAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("crawlerArn"))
  {
    m_crawlerArn = jsonValue.GetString("crawlerArn");

    m_crawlerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("databaseArn"))
  {
    m_databaseArn = jsonValue.GetString("databaseArn");

    m_databaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tableArn"))
  {
    m_tableArn = jsonValue.GetString("tableArn");

    m_tableArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomLogSourceAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_crawlerArnHasBeenSet)
  {
   payload.WithString("crawlerArn", m_crawlerArn);

  }

  if(m_databaseArnHasBeenSet)
  {
   payload.WithString("databaseArn", m_databaseArn);

  }

  if(m_tableArnHasBeenSet)
  {
   payload.WithString("tableArn", m_tableArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
