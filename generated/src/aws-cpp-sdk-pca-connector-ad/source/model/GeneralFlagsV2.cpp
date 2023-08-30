/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/GeneralFlagsV2.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

GeneralFlagsV2::GeneralFlagsV2() : 
    m_autoEnrollment(false),
    m_autoEnrollmentHasBeenSet(false),
    m_machineType(false),
    m_machineTypeHasBeenSet(false)
{
}

GeneralFlagsV2::GeneralFlagsV2(JsonView jsonValue) : 
    m_autoEnrollment(false),
    m_autoEnrollmentHasBeenSet(false),
    m_machineType(false),
    m_machineTypeHasBeenSet(false)
{
  *this = jsonValue;
}

GeneralFlagsV2& GeneralFlagsV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoEnrollment"))
  {
    m_autoEnrollment = jsonValue.GetBool("AutoEnrollment");

    m_autoEnrollmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MachineType"))
  {
    m_machineType = jsonValue.GetBool("MachineType");

    m_machineTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue GeneralFlagsV2::Jsonize() const
{
  JsonValue payload;

  if(m_autoEnrollmentHasBeenSet)
  {
   payload.WithBool("AutoEnrollment", m_autoEnrollment);

  }

  if(m_machineTypeHasBeenSet)
  {
   payload.WithBool("MachineType", m_machineType);

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
