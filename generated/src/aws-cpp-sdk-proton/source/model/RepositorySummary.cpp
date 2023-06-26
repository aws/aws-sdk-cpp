﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/RepositorySummary.h>
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

RepositorySummary::RepositorySummary() : 
    m_arnHasBeenSet(false),
    m_connectionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provider(RepositoryProvider::NOT_SET),
    m_providerHasBeenSet(false)
{
}

RepositorySummary::RepositorySummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_connectionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provider(RepositoryProvider::NOT_SET),
    m_providerHasBeenSet(false)
{
  *this = jsonValue;
}

RepositorySummary& RepositorySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionArn"))
  {
    m_connectionArn = jsonValue.GetString("connectionArn");

    m_connectionArnHasBeenSet = true;
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

JsonValue RepositorySummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("connectionArn", m_connectionArn);

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
