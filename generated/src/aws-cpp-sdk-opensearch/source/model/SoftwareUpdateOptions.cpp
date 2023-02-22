/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/SoftwareUpdateOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

SoftwareUpdateOptions::SoftwareUpdateOptions() : 
    m_autoSoftwareUpdateEnabled(false),
    m_autoSoftwareUpdateEnabledHasBeenSet(false)
{
}

SoftwareUpdateOptions::SoftwareUpdateOptions(JsonView jsonValue) : 
    m_autoSoftwareUpdateEnabled(false),
    m_autoSoftwareUpdateEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

SoftwareUpdateOptions& SoftwareUpdateOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoSoftwareUpdateEnabled"))
  {
    m_autoSoftwareUpdateEnabled = jsonValue.GetBool("AutoSoftwareUpdateEnabled");

    m_autoSoftwareUpdateEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue SoftwareUpdateOptions::Jsonize() const
{
  JsonValue payload;

  if(m_autoSoftwareUpdateEnabledHasBeenSet)
  {
   payload.WithBool("AutoSoftwareUpdateEnabled", m_autoSoftwareUpdateEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
