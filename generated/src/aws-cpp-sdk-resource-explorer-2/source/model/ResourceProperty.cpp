/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/ResourceProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

ResourceProperty::ResourceProperty() : 
    m_dataHasBeenSet(false),
    m_lastReportedAtHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

ResourceProperty::ResourceProperty(JsonView jsonValue) : 
    m_dataHasBeenSet(false),
    m_lastReportedAtHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceProperty& ResourceProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Data"))
  {
    m_data = jsonValue.GetObject("Data");

    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastReportedAt"))
  {
    m_lastReportedAt = jsonValue.GetString("LastReportedAt");

    m_lastReportedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceProperty::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
    if(!m_data.View().IsNull())
    {
       payload.WithObject("Data", JsonValue(m_data.View()));
    }
  }

  if(m_lastReportedAtHasBeenSet)
  {
   payload.WithString("LastReportedAt", m_lastReportedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
