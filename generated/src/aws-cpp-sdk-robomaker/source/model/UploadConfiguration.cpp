/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/UploadConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

UploadConfiguration::UploadConfiguration() : 
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_uploadBehavior(UploadBehavior::NOT_SET),
    m_uploadBehaviorHasBeenSet(false)
{
}

UploadConfiguration::UploadConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_uploadBehavior(UploadBehavior::NOT_SET),
    m_uploadBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

UploadConfiguration& UploadConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uploadBehavior"))
  {
    m_uploadBehavior = UploadBehaviorMapper::GetUploadBehaviorForName(jsonValue.GetString("uploadBehavior"));

    m_uploadBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue UploadConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_uploadBehaviorHasBeenSet)
  {
   payload.WithString("uploadBehavior", UploadBehaviorMapper::GetNameForUploadBehavior(m_uploadBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
