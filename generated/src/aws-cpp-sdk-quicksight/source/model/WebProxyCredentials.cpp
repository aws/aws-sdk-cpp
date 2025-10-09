/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WebProxyCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

WebProxyCredentials::WebProxyCredentials(JsonView jsonValue)
{
  *this = jsonValue;
}

WebProxyCredentials& WebProxyCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WebProxyUsername"))
  {
    m_webProxyUsername = jsonValue.GetString("WebProxyUsername");
    m_webProxyUsernameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebProxyPassword"))
  {
    m_webProxyPassword = jsonValue.GetString("WebProxyPassword");
    m_webProxyPasswordHasBeenSet = true;
  }
  return *this;
}

JsonValue WebProxyCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_webProxyUsernameHasBeenSet)
  {
   payload.WithString("WebProxyUsername", m_webProxyUsername);

  }

  if(m_webProxyPasswordHasBeenSet)
  {
   payload.WithString("WebProxyPassword", m_webProxyPassword);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
