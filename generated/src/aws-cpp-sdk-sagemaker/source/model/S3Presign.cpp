/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/S3Presign.h>
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

S3Presign::S3Presign(JsonView jsonValue)
{
  *this = jsonValue;
}

S3Presign& S3Presign::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IamPolicyConstraints"))
  {
    m_iamPolicyConstraints = jsonValue.GetObject("IamPolicyConstraints");
    m_iamPolicyConstraintsHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Presign::Jsonize() const
{
  JsonValue payload;

  if(m_iamPolicyConstraintsHasBeenSet)
  {
   payload.WithObject("IamPolicyConstraints", m_iamPolicyConstraints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
