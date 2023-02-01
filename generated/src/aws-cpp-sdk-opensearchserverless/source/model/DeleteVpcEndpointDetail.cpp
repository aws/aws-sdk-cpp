/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/DeleteVpcEndpointDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

DeleteVpcEndpointDetail::DeleteVpcEndpointDetail() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(VpcEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DeleteVpcEndpointDetail::DeleteVpcEndpointDetail(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(VpcEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteVpcEndpointDetail& DeleteVpcEndpointDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = VpcEndpointStatusMapper::GetVpcEndpointStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteVpcEndpointDetail::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", VpcEndpointStatusMapper::GetNameForVpcEndpointStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
