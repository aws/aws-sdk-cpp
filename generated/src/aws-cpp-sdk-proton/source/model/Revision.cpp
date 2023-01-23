/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/Revision.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

Revision::Revision() : 
    m_branchHasBeenSet(false),
    m_directoryHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryProvider(RepositoryProvider::NOT_SET),
    m_repositoryProviderHasBeenSet(false),
    m_shaHasBeenSet(false)
{
}

Revision::Revision(JsonView jsonValue) : 
    m_branchHasBeenSet(false),
    m_directoryHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryProvider(RepositoryProvider::NOT_SET),
    m_repositoryProviderHasBeenSet(false),
    m_shaHasBeenSet(false)
{
  *this = jsonValue;
}

Revision& Revision::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("branch"))
  {
    m_branch = jsonValue.GetString("branch");

    m_branchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directory"))
  {
    m_directory = jsonValue.GetString("directory");

    m_directoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryProvider"))
  {
    m_repositoryProvider = RepositoryProviderMapper::GetRepositoryProviderForName(jsonValue.GetString("repositoryProvider"));

    m_repositoryProviderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sha"))
  {
    m_sha = jsonValue.GetString("sha");

    m_shaHasBeenSet = true;
  }

  return *this;
}

JsonValue Revision::Jsonize() const
{
  JsonValue payload;

  if(m_branchHasBeenSet)
  {
   payload.WithString("branch", m_branch);

  }

  if(m_directoryHasBeenSet)
  {
   payload.WithString("directory", m_directory);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_repositoryProviderHasBeenSet)
  {
   payload.WithString("repositoryProvider", RepositoryProviderMapper::GetNameForRepositoryProvider(m_repositoryProvider));
  }

  if(m_shaHasBeenSet)
  {
   payload.WithString("sha", m_sha);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
