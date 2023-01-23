/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/RepositoryBranch.h>
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

RepositoryBranch::RepositoryBranch() : 
    m_arnHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provider(RepositoryProvider::NOT_SET),
    m_providerHasBeenSet(false)
{
}

RepositoryBranch::RepositoryBranch(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provider(RepositoryProvider::NOT_SET),
    m_providerHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryBranch& RepositoryBranch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branch"))
  {
    m_branch = jsonValue.GetString("branch");

    m_branchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provider"))
  {
    m_provider = RepositoryProviderMapper::GetRepositoryProviderForName(jsonValue.GetString("provider"));

    m_providerHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryBranch::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_branchHasBeenSet)
  {
   payload.WithString("branch", m_branch);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", RepositoryProviderMapper::GetNameForRepositoryProvider(m_provider));
  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
