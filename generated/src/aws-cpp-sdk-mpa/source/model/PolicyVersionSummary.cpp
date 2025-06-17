/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/PolicyVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MPA
{
namespace Model
{

PolicyVersionSummary::PolicyVersionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

PolicyVersionSummary& PolicyVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PolicyArn"))
  {
    m_policyArn = jsonValue.GetString("PolicyArn");
    m_policyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetInteger("VersionId");
    m_versionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = PolicyTypeMapper::GetPolicyTypeForName(jsonValue.GetString("PolicyType"));
    m_policyTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsDefault"))
  {
    m_isDefault = jsonValue.GetBool("IsDefault");
    m_isDefaultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = PolicyStatusMapper::GetPolicyStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("PolicyArn", m_policyArn);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithInteger("VersionId", m_versionId);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", PolicyTypeMapper::GetNameForPolicyType(m_policyType));
  }

  if(m_isDefaultHasBeenSet)
  {
   payload.WithBool("IsDefault", m_isDefault);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PolicyStatusMapper::GetNameForPolicyStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("LastUpdatedTime", m_lastUpdatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
