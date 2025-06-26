/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DataAccessorAuthenticationDetail.h>
#include <aws/qbusiness/model/ActionConfiguration.h>
#include <aws/qbusiness/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class CreateDataAccessorRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreateDataAccessorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataAccessor"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CreateDataAccessorRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the ISV that will be
     * accessing the data.</p>
     */
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    CreateDataAccessorRequest& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of action configurations specifying the allowed actions and any
     * associated filters.</p>
     */
    inline const Aws::Vector<ActionConfiguration>& GetActionConfigurations() const { return m_actionConfigurations; }
    inline bool ActionConfigurationsHasBeenSet() const { return m_actionConfigurationsHasBeenSet; }
    template<typename ActionConfigurationsT = Aws::Vector<ActionConfiguration>>
    void SetActionConfigurations(ActionConfigurationsT&& value) { m_actionConfigurationsHasBeenSet = true; m_actionConfigurations = std::forward<ActionConfigurationsT>(value); }
    template<typename ActionConfigurationsT = Aws::Vector<ActionConfiguration>>
    CreateDataAccessorRequest& WithActionConfigurations(ActionConfigurationsT&& value) { SetActionConfigurations(std::forward<ActionConfigurationsT>(value)); return *this;}
    template<typename ActionConfigurationsT = ActionConfiguration>
    CreateDataAccessorRequest& AddActionConfigurations(ActionConfigurationsT&& value) { m_actionConfigurationsHasBeenSet = true; m_actionConfigurations.emplace_back(std::forward<ActionConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier you provide to ensure idempotency of the
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateDataAccessorRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the data accessor.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateDataAccessorRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration details for the data accessor. This
     * specifies how the ISV will authenticate when accessing data through this data
     * accessor.</p>
     */
    inline const DataAccessorAuthenticationDetail& GetAuthenticationDetail() const { return m_authenticationDetail; }
    inline bool AuthenticationDetailHasBeenSet() const { return m_authenticationDetailHasBeenSet; }
    template<typename AuthenticationDetailT = DataAccessorAuthenticationDetail>
    void SetAuthenticationDetail(AuthenticationDetailT&& value) { m_authenticationDetailHasBeenSet = true; m_authenticationDetail = std::forward<AuthenticationDetailT>(value); }
    template<typename AuthenticationDetailT = DataAccessorAuthenticationDetail>
    CreateDataAccessorRequest& WithAuthenticationDetail(AuthenticationDetailT&& value) { SetAuthenticationDetail(std::forward<AuthenticationDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the data accessor.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDataAccessorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDataAccessorRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::Vector<ActionConfiguration> m_actionConfigurations;
    bool m_actionConfigurationsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    DataAccessorAuthenticationDetail m_authenticationDetail;
    bool m_authenticationDetailHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
