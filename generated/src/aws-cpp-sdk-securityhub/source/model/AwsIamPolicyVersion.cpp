/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamPolicyVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsIamPolicyVersion::AwsIamPolicyVersion(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsIamPolicyVersion& AwsIamPolicyVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");
    m_versionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsDefaultVersion"))
  {
    m_isDefaultVersion = jsonValue.GetBool("IsDefaultVersion");
    m_isDefaultVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetString("CreateDate");
    m_createDateHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsIamPolicyVersion::Jsonize() const
{
  JsonValue payload;

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_isDefaultVersionHasBeenSet)
  {
   payload.WithBool("IsDefaultVersion", m_isDefaultVersion);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithString("CreateDate", m_createDate);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
