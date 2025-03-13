/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AmazonQSettings.h>
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

AmazonQSettings::AmazonQSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

AmazonQSettings& AmazonQSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QProfileArn"))
  {
    m_qProfileArn = jsonValue.GetString("QProfileArn");
    m_qProfileArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonQSettings::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FeatureStatusMapper::GetNameForFeatureStatus(m_status));
  }

  if(m_qProfileArnHasBeenSet)
  {
   payload.WithString("QProfileArn", m_qProfileArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
