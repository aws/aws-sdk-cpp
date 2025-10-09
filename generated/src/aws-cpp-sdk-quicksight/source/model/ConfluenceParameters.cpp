/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConfluenceParameters.h>
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

ConfluenceParameters::ConfluenceParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfluenceParameters& ConfluenceParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfluenceUrl"))
  {
    m_confluenceUrl = jsonValue.GetString("ConfluenceUrl");
    m_confluenceUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfluenceParameters::Jsonize() const
{
  JsonValue payload;

  if(m_confluenceUrlHasBeenSet)
  {
   payload.WithString("ConfluenceUrl", m_confluenceUrl);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
