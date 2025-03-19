/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/IamPolicyConstraints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

IamPolicyConstraints::IamPolicyConstraints(JsonView jsonValue)
{
  *this = jsonValue;
}

IamPolicyConstraints& IamPolicyConstraints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceIp"))
  {
    m_sourceIp = EnabledOrDisabledMapper::GetEnabledOrDisabledForName(jsonValue.GetString("SourceIp"));
    m_sourceIpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcSourceIp"))
  {
    m_vpcSourceIp = EnabledOrDisabledMapper::GetEnabledOrDisabledForName(jsonValue.GetString("VpcSourceIp"));
    m_vpcSourceIpHasBeenSet = true;
  }
  return *this;
}

JsonValue IamPolicyConstraints::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIpHasBeenSet)
  {
   payload.WithString("SourceIp", EnabledOrDisabledMapper::GetNameForEnabledOrDisabled(m_sourceIp));
  }

  if(m_vpcSourceIpHasBeenSet)
  {
   payload.WithString("VpcSourceIp", EnabledOrDisabledMapper::GetNameForEnabledOrDisabled(m_vpcSourceIp));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
