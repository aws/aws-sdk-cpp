/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/Application.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

Application::Application() : 
    m_applicationAccountHasBeenSet(false),
    m_applicationArnHasBeenSet(false),
    m_applicationProviderArnHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_portalOptionsHasBeenSet(false),
    m_status(ApplicationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Application::Application(JsonView jsonValue) : 
    m_applicationAccountHasBeenSet(false),
    m_applicationArnHasBeenSet(false),
    m_applicationProviderArnHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_portalOptionsHasBeenSet(false),
    m_status(ApplicationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

Application& Application::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationAccount"))
  {
    m_applicationAccount = jsonValue.GetString("ApplicationAccount");

    m_applicationAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");

    m_applicationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationProviderArn"))
  {
    m_applicationProviderArn = jsonValue.GetString("ApplicationProviderArn");

    m_applicationProviderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceArn"))
  {
    m_instanceArn = jsonValue.GetString("InstanceArn");

    m_instanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortalOptions"))
  {
    m_portalOptions = jsonValue.GetObject("PortalOptions");

    m_portalOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApplicationStatusMapper::GetApplicationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue Application::Jsonize() const
{
  JsonValue payload;

  if(m_applicationAccountHasBeenSet)
  {
   payload.WithString("ApplicationAccount", m_applicationAccount);

  }

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  if(m_applicationProviderArnHasBeenSet)
  {
   payload.WithString("ApplicationProviderArn", m_applicationProviderArn);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_portalOptionsHasBeenSet)
  {
   payload.WithObject("PortalOptions", m_portalOptions.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ApplicationStatusMapper::GetNameForApplicationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
