/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/CpuOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

CpuOptionsRequest::CpuOptionsRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

CpuOptionsRequest& CpuOptionsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmdSevSnp"))
  {
    m_amdSevSnp = AmdSevSnpEnumMapper::GetAmdSevSnpEnumForName(jsonValue.GetString("AmdSevSnp"));
    m_amdSevSnpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CoreCount"))
  {
    m_coreCount = jsonValue.GetInteger("CoreCount");
    m_coreCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThreadsPerCore"))
  {
    m_threadsPerCore = jsonValue.GetInteger("ThreadsPerCore");
    m_threadsPerCoreHasBeenSet = true;
  }
  return *this;
}

JsonValue CpuOptionsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_amdSevSnpHasBeenSet)
  {
   payload.WithString("AmdSevSnp", AmdSevSnpEnumMapper::GetNameForAmdSevSnpEnum(m_amdSevSnp));
  }

  if(m_coreCountHasBeenSet)
  {
   payload.WithInteger("CoreCount", m_coreCount);

  }

  if(m_threadsPerCoreHasBeenSet)
  {
   payload.WithInteger("ThreadsPerCore", m_threadsPerCore);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
