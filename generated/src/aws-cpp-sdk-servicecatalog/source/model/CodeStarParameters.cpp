/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/CodeStarParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

CodeStarParameters::CodeStarParameters() : 
    m_connectionArnHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_artifactPathHasBeenSet(false)
{
}

CodeStarParameters::CodeStarParameters(JsonView jsonValue) : 
    m_connectionArnHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_artifactPathHasBeenSet(false)
{
  *this = jsonValue;
}

CodeStarParameters& CodeStarParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionArn"))
  {
    m_connectionArn = jsonValue.GetString("ConnectionArn");

    m_connectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Repository"))
  {
    m_repository = jsonValue.GetString("Repository");

    m_repositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Branch"))
  {
    m_branch = jsonValue.GetString("Branch");

    m_branchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArtifactPath"))
  {
    m_artifactPath = jsonValue.GetString("ArtifactPath");

    m_artifactPathHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeStarParameters::Jsonize() const
{
  JsonValue payload;

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("ConnectionArn", m_connectionArn);

  }

  if(m_repositoryHasBeenSet)
  {
   payload.WithString("Repository", m_repository);

  }

  if(m_branchHasBeenSet)
  {
   payload.WithString("Branch", m_branch);

  }

  if(m_artifactPathHasBeenSet)
  {
   payload.WithString("ArtifactPath", m_artifactPath);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
