/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamAccessKeySessionContextAttributes.h>
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

AwsIamAccessKeySessionContextAttributes::AwsIamAccessKeySessionContextAttributes() : 
    m_mfaAuthenticated(false),
    m_mfaAuthenticatedHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

AwsIamAccessKeySessionContextAttributes::AwsIamAccessKeySessionContextAttributes(JsonView jsonValue) : 
    m_mfaAuthenticated(false),
    m_mfaAuthenticatedHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamAccessKeySessionContextAttributes& AwsIamAccessKeySessionContextAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MfaAuthenticated"))
  {
    m_mfaAuthenticated = jsonValue.GetBool("MfaAuthenticated");

    m_mfaAuthenticatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamAccessKeySessionContextAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_mfaAuthenticatedHasBeenSet)
  {
   payload.WithBool("MfaAuthenticated", m_mfaAuthenticated);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
