/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/ResourceServerScopeDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes the configuration of a resource
   * server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ResourceServerConfig">AWS
   * API Reference</a></p>
   */
  class ResourceServerConfig
  {
  public:
    AWS_SSOADMIN_API ResourceServerConfig();
    AWS_SSOADMIN_API ResourceServerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ResourceServerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline const Aws::Map<Aws::String, ResourceServerScopeDetails>& GetScopes() const{ return m_scopes; }

    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }

    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline void SetScopes(const Aws::Map<Aws::String, ResourceServerScopeDetails>& value) { m_scopesHasBeenSet = true; m_scopes = value; }

    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline void SetScopes(Aws::Map<Aws::String, ResourceServerScopeDetails>&& value) { m_scopesHasBeenSet = true; m_scopes = std::move(value); }

    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline ResourceServerConfig& WithScopes(const Aws::Map<Aws::String, ResourceServerScopeDetails>& value) { SetScopes(value); return *this;}

    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline ResourceServerConfig& WithScopes(Aws::Map<Aws::String, ResourceServerScopeDetails>&& value) { SetScopes(std::move(value)); return *this;}

    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline ResourceServerConfig& AddScopes(const Aws::String& key, const ResourceServerScopeDetails& value) { m_scopesHasBeenSet = true; m_scopes.emplace(key, value); return *this; }

    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline ResourceServerConfig& AddScopes(Aws::String&& key, const ResourceServerScopeDetails& value) { m_scopesHasBeenSet = true; m_scopes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline ResourceServerConfig& AddScopes(const Aws::String& key, ResourceServerScopeDetails&& value) { m_scopesHasBeenSet = true; m_scopes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline ResourceServerConfig& AddScopes(Aws::String&& key, ResourceServerScopeDetails&& value) { m_scopesHasBeenSet = true; m_scopes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline ResourceServerConfig& AddScopes(const char* key, ResourceServerScopeDetails&& value) { m_scopesHasBeenSet = true; m_scopes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline ResourceServerConfig& AddScopes(const char* key, const ResourceServerScopeDetails& value) { m_scopesHasBeenSet = true; m_scopes.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, ResourceServerScopeDetails> m_scopes;
    bool m_scopesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
