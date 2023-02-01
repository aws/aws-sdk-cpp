/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails.h>
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

AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails::AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails::AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails& AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
