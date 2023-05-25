/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ImportTaskSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

ImportTaskSummary::ImportTaskSummary() : 
    m_applicationsHasBeenSet(false),
    m_serversHasBeenSet(false),
    m_wavesHasBeenSet(false)
{
}

ImportTaskSummary::ImportTaskSummary(JsonView jsonValue) : 
    m_applicationsHasBeenSet(false),
    m_serversHasBeenSet(false),
    m_wavesHasBeenSet(false)
{
  *this = jsonValue;
}

ImportTaskSummary& ImportTaskSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applications"))
  {
    m_applications = jsonValue.GetObject("applications");

    m_applicationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("servers"))
  {
    m_servers = jsonValue.GetObject("servers");

    m_serversHasBeenSet = true;
  }

  if(jsonValue.ValueExists("waves"))
  {
    m_waves = jsonValue.GetObject("waves");

    m_wavesHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportTaskSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationsHasBeenSet)
  {
   payload.WithObject("applications", m_applications.Jsonize());

  }

  if(m_serversHasBeenSet)
  {
   payload.WithObject("servers", m_servers.Jsonize());

  }

  if(m_wavesHasBeenSet)
  {
   payload.WithObject("waves", m_waves.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
