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
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdateDataAccessorRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateDataAccessorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataAccessor"; }

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
    UpdateDataAccessorRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data accessor to update.</p>
     */
    inline const Aws::String& GetDataAccessorId() const { return m_dataAccessorId; }
    inline bool DataAccessorIdHasBeenSet() const { return m_dataAccessorIdHasBeenSet; }
    template<typename DataAccessorIdT = Aws::String>
    void SetDataAccessorId(DataAccessorIdT&& value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId = std::forward<DataAccessorIdT>(value); }
    template<typename DataAccessorIdT = Aws::String>
    UpdateDataAccessorRequest& WithDataAccessorId(DataAccessorIdT&& value) { SetDataAccessorId(std::forward<DataAccessorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated list of action configurations specifying the allowed actions and
     * any associated filters.</p>
     */
    inline const Aws::Vector<ActionConfiguration>& GetActionConfigurations() const { return m_actionConfigurations; }
    inline bool ActionConfigurationsHasBeenSet() const { return m_actionConfigurationsHasBeenSet; }
    template<typename ActionConfigurationsT = Aws::Vector<ActionConfiguration>>
    void SetActionConfigurations(ActionConfigurationsT&& value) { m_actionConfigurationsHasBeenSet = true; m_actionConfigurations = std::forward<ActionConfigurationsT>(value); }
    template<typename ActionConfigurationsT = Aws::Vector<ActionConfiguration>>
    UpdateDataAccessorRequest& WithActionConfigurations(ActionConfigurationsT&& value) { SetActionConfigurations(std::forward<ActionConfigurationsT>(value)); return *this;}
    template<typename ActionConfigurationsT = ActionConfiguration>
    UpdateDataAccessorRequest& AddActionConfigurations(ActionConfigurationsT&& value) { m_actionConfigurationsHasBeenSet = true; m_actionConfigurations.emplace_back(std::forward<ActionConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated authentication configuration details for the data accessor. This
     * specifies how the ISV will authenticate when accessing data through this data
     * accessor.</p>
     */
    inline const DataAccessorAuthenticationDetail& GetAuthenticationDetail() const { return m_authenticationDetail; }
    inline bool AuthenticationDetailHasBeenSet() const { return m_authenticationDetailHasBeenSet; }
    template<typename AuthenticationDetailT = DataAccessorAuthenticationDetail>
    void SetAuthenticationDetail(AuthenticationDetailT&& value) { m_authenticationDetailHasBeenSet = true; m_authenticationDetail = std::forward<AuthenticationDetailT>(value); }
    template<typename AuthenticationDetailT = DataAccessorAuthenticationDetail>
    UpdateDataAccessorRequest& WithAuthenticationDetail(AuthenticationDetailT&& value) { SetAuthenticationDetail(std::forward<AuthenticationDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated friendly name for the data accessor.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateDataAccessorRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_dataAccessorId;
    bool m_dataAccessorIdHasBeenSet = false;

    Aws::Vector<ActionConfiguration> m_actionConfigurations;
    bool m_actionConfigurationsHasBeenSet = false;

    DataAccessorAuthenticationDetail m_authenticationDetail;
    bool m_authenticationDetailHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
