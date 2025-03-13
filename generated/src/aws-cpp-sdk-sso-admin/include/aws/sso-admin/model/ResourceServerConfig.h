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
    AWS_SSOADMIN_API ResourceServerConfig() = default;
    AWS_SSOADMIN_API ResourceServerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ResourceServerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the IAM Identity Center access scopes that are associated with this
     * resource server.</p>
     */
    inline const Aws::Map<Aws::String, ResourceServerScopeDetails>& GetScopes() const { return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    template<typename ScopesT = Aws::Map<Aws::String, ResourceServerScopeDetails>>
    void SetScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes = std::forward<ScopesT>(value); }
    template<typename ScopesT = Aws::Map<Aws::String, ResourceServerScopeDetails>>
    ResourceServerConfig& WithScopes(ScopesT&& value) { SetScopes(std::forward<ScopesT>(value)); return *this;}
    template<typename ScopesKeyT = Aws::String, typename ScopesValueT = ResourceServerScopeDetails>
    ResourceServerConfig& AddScopes(ScopesKeyT&& key, ScopesValueT&& value) {
      m_scopesHasBeenSet = true; m_scopes.emplace(std::forward<ScopesKeyT>(key), std::forward<ScopesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, ResourceServerScopeDetails> m_scopes;
    bool m_scopesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
