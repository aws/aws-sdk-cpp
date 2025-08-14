/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ImageSourceIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ImageSourceIdentifier::ImageSourceIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

ImageSourceIdentifier& ImageSourceIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ec2ImportTaskId"))
  {
    m_ec2ImportTaskId = jsonValue.GetString("Ec2ImportTaskId");
    m_ec2ImportTaskIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageBuildVersionArn"))
  {
    m_imageBuildVersionArn = jsonValue.GetString("ImageBuildVersionArn");
    m_imageBuildVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ec2ImageId"))
  {
    m_ec2ImageId = jsonValue.GetString("Ec2ImageId");
    m_ec2ImageIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageSourceIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_ec2ImportTaskIdHasBeenSet)
  {
   payload.WithString("Ec2ImportTaskId", m_ec2ImportTaskId);

  }

  if(m_imageBuildVersionArnHasBeenSet)
  {
   payload.WithString("ImageBuildVersionArn", m_imageBuildVersionArn);

  }

  if(m_ec2ImageIdHasBeenSet)
  {
   payload.WithString("Ec2ImageId", m_ec2ImageId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
