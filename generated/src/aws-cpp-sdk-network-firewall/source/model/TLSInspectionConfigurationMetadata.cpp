/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/TLSInspectionConfigurationMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

TLSInspectionConfigurationMetadata::TLSInspectionConfigurationMetadata() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

TLSInspectionConfigurationMetadata::TLSInspectionConfigurationMetadata(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

TLSInspectionConfigurationMetadata& TLSInspectionConfigurationMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue TLSInspectionConfigurationMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
