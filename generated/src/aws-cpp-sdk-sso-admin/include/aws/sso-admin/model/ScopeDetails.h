/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A structure that describes an IAM Identity Center access scope and its
   * authorized targets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ScopeDetails">AWS
   * API Reference</a></p>
   */
  class ScopeDetails
  {
  public:
    AWS_SSOADMIN_API ScopeDetails() = default;
    AWS_SSOADMIN_API ScopeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ScopeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the access scope.</p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    ScopeDetails& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array list of ARNs of applications.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedTargets() const { return m_authorizedTargets; }
    inline bool AuthorizedTargetsHasBeenSet() const { return m_authorizedTargetsHasBeenSet; }
    template<typename AuthorizedTargetsT = Aws::Vector<Aws::String>>
    void SetAuthorizedTargets(AuthorizedTargetsT&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = std::forward<AuthorizedTargetsT>(value); }
    template<typename AuthorizedTargetsT = Aws::Vector<Aws::String>>
    ScopeDetails& WithAuthorizedTargets(AuthorizedTargetsT&& value) { SetAuthorizedTargets(std::forward<AuthorizedTargetsT>(value)); return *this;}
    template<typename AuthorizedTargetsT = Aws::String>
    ScopeDetails& AddAuthorizedTargets(AuthorizedTargetsT&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.emplace_back(std::forward<AuthorizedTargetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedTargets;
    bool m_authorizedTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
