/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/TemplateSyncConfig.h>
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

TemplateSyncConfig::TemplateSyncConfig() : 
    m_branchHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryProvider(RepositoryProvider::NOT_SET),
    m_repositoryProviderHasBeenSet(false),
    m_subdirectoryHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateType(TemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false)
{
}

TemplateSyncConfig::TemplateSyncConfig(JsonView jsonValue) : 
    m_branchHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryProvider(RepositoryProvider::NOT_SET),
    m_repositoryProviderHasBeenSet(false),
    m_subdirectoryHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateType(TemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateSyncConfig& TemplateSyncConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("branch"))
  {
    m_branch = jsonValue.GetString("branch");

    m_branchHasBeenSet = true;
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

  if(jsonValue.ValueExists("subdirectory"))
  {
    m_subdirectory = jsonValue.GetString("subdirectory");

    m_subdirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateType"))
  {
    m_templateType = TemplateTypeMapper::GetTemplateTypeForName(jsonValue.GetString("templateType"));

    m_templateTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateSyncConfig::Jsonize() const
{
  JsonValue payload;

  if(m_branchHasBeenSet)
  {
   payload.WithString("branch", m_branch);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_repositoryProviderHasBeenSet)
  {
   payload.WithString("repositoryProvider", RepositoryProviderMapper::GetNameForRepositoryProvider(m_repositoryProvider));
  }

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("subdirectory", m_subdirectory);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("templateType", TemplateTypeMapper::GetNameForTemplateType(m_templateType));
  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
