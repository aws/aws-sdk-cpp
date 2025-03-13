/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/QAppsConfiguration.h>
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

QAppsConfiguration::QAppsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

QAppsConfiguration& QAppsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("qAppsControlMode"))
  {
    m_qAppsControlMode = QAppsControlModeMapper::GetQAppsControlModeForName(jsonValue.GetString("qAppsControlMode"));
    m_qAppsControlModeHasBeenSet = true;
  }
  return *this;
}

JsonValue QAppsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_qAppsControlModeHasBeenSet)
  {
   payload.WithString("qAppsControlMode", QAppsControlModeMapper::GetNameForQAppsControlMode(m_qAppsControlMode));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
