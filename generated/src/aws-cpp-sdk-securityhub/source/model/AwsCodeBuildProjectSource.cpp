/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCodeBuildProjectSource.h>
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

AwsCodeBuildProjectSource::AwsCodeBuildProjectSource() : 
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_gitCloneDepth(0),
    m_gitCloneDepthHasBeenSet(false),
    m_insecureSsl(false),
    m_insecureSslHasBeenSet(false)
{
}

AwsCodeBuildProjectSource::AwsCodeBuildProjectSource(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_gitCloneDepth(0),
    m_gitCloneDepthHasBeenSet(false),
    m_insecureSsl(false),
    m_insecureSslHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCodeBuildProjectSource& AwsCodeBuildProjectSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitCloneDepth"))
  {
    m_gitCloneDepth = jsonValue.GetInteger("GitCloneDepth");

    m_gitCloneDepthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InsecureSsl"))
  {
    m_insecureSsl = jsonValue.GetBool("InsecureSsl");

    m_insecureSslHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCodeBuildProjectSource::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_gitCloneDepthHasBeenSet)
  {
   payload.WithInteger("GitCloneDepth", m_gitCloneDepth);

  }

  if(m_insecureSslHasBeenSet)
  {
   payload.WithBool("InsecureSsl", m_insecureSsl);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
