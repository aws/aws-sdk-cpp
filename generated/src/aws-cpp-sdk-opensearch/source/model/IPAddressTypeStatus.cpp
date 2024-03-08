/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/IPAddressTypeStatus.h>
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

IPAddressTypeStatus::IPAddressTypeStatus() : 
    m_options(IPAddressType::NOT_SET),
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

IPAddressTypeStatus::IPAddressTypeStatus(JsonView jsonValue) : 
    m_options(IPAddressType::NOT_SET),
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

IPAddressTypeStatus& IPAddressTypeStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Options"))
  {
    m_options = IPAddressTypeMapper::GetIPAddressTypeForName(jsonValue.GetString("Options"));

    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue IPAddressTypeStatus::Jsonize() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   payload.WithString("Options", IPAddressTypeMapper::GetNameForIPAddressType(m_options));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
