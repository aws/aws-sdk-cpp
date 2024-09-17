/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_SSOADMIN_API ScopeDetails();
    AWS_SSOADMIN_API ScopeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ScopeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array list of ARNs of applications.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedTargets() const{ return m_authorizedTargets; }
    inline bool AuthorizedTargetsHasBeenSet() const { return m_authorizedTargetsHasBeenSet; }
    inline void SetAuthorizedTargets(const Aws::Vector<Aws::String>& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = value; }
    inline void SetAuthorizedTargets(Aws::Vector<Aws::String>&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = std::move(value); }
    inline ScopeDetails& WithAuthorizedTargets(const Aws::Vector<Aws::String>& value) { SetAuthorizedTargets(value); return *this;}
    inline ScopeDetails& WithAuthorizedTargets(Aws::Vector<Aws::String>&& value) { SetAuthorizedTargets(std::move(value)); return *this;}
    inline ScopeDetails& AddAuthorizedTargets(const Aws::String& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(value); return *this; }
    inline ScopeDetails& AddAuthorizedTargets(Aws::String&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(std::move(value)); return *this; }
    inline ScopeDetails& AddAuthorizedTargets(const char* value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the access scope.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }
    inline ScopeDetails& WithScope(const Aws::String& value) { SetScope(value); return *this;}
    inline ScopeDetails& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}
    inline ScopeDetails& WithScope(const char* value) { SetScope(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_authorizedTargets;
    bool m_authorizedTargetsHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
