/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ActionFilterConfiguration.h>
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

ActionFilterConfiguration::ActionFilterConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionFilterConfiguration& ActionFilterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("documentAttributeFilter"))
  {
    m_documentAttributeFilter = jsonValue.GetObject("documentAttributeFilter");
    m_documentAttributeFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionFilterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_documentAttributeFilterHasBeenSet)
  {
   payload.WithObject("documentAttributeFilter", m_documentAttributeFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
