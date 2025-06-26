/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DataAccessorAuthenticationDetail.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/ActionConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{
  class GetDataAccessorResult
  {
  public:
    AWS_QBUSINESS_API GetDataAccessorResult() = default;
    AWS_QBUSINESS_API GetDataAccessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetDataAccessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The friendly name of the data accessor.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetDataAccessorResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorId() const { return m_dataAccessorId; }
    template<typename DataAccessorIdT = Aws::String>
    void SetDataAccessorId(DataAccessorIdT&& value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId = std::forward<DataAccessorIdT>(value); }
    template<typename DataAccessorIdT = Aws::String>
    GetDataAccessorResult& WithDataAccessorId(DataAccessorIdT&& value) { SetDataAccessorId(std::forward<DataAccessorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorArn() const { return m_dataAccessorArn; }
    template<typename DataAccessorArnT = Aws::String>
    void SetDataAccessorArn(DataAccessorArnT&& value) { m_dataAccessorArnHasBeenSet = true; m_dataAccessorArn = std::forward<DataAccessorArnT>(value); }
    template<typename DataAccessorArnT = Aws::String>
    GetDataAccessorResult& WithDataAccessorArn(DataAccessorArnT&& value) { SetDataAccessorArn(std::forward<DataAccessorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application associated with
     * this data accessor.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetDataAccessorResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center application
     * associated with this data accessor.</p>
     */
    inline const Aws::String& GetIdcApplicationArn() const { return m_idcApplicationArn; }
    template<typename IdcApplicationArnT = Aws::String>
    void SetIdcApplicationArn(IdcApplicationArnT&& value) { m_idcApplicationArnHasBeenSet = true; m_idcApplicationArn = std::forward<IdcApplicationArnT>(value); }
    template<typename IdcApplicationArnT = Aws::String>
    GetDataAccessorResult& WithIdcApplicationArn(IdcApplicationArnT&& value) { SetIdcApplicationArn(std::forward<IdcApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the ISV associated with
     * this data accessor.</p>
     */
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    GetDataAccessorResult& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of action configurations specifying the allowed actions and any
     * associated filters.</p>
     */
    inline const Aws::Vector<ActionConfiguration>& GetActionConfigurations() const { return m_actionConfigurations; }
    template<typename ActionConfigurationsT = Aws::Vector<ActionConfiguration>>
    void SetActionConfigurations(ActionConfigurationsT&& value) { m_actionConfigurationsHasBeenSet = true; m_actionConfigurations = std::forward<ActionConfigurationsT>(value); }
    template<typename ActionConfigurationsT = Aws::Vector<ActionConfiguration>>
    GetDataAccessorResult& WithActionConfigurations(ActionConfigurationsT&& value) { SetActionConfigurations(std::forward<ActionConfigurationsT>(value)); return *this;}
    template<typename ActionConfigurationsT = ActionConfiguration>
    GetDataAccessorResult& AddActionConfigurations(ActionConfigurationsT&& value) { m_actionConfigurationsHasBeenSet = true; m_actionConfigurations.emplace_back(std::forward<ActionConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authentication configuration details for the data accessor. This
     * specifies how the ISV authenticates when accessing data through this data
     * accessor.</p>
     */
    inline const DataAccessorAuthenticationDetail& GetAuthenticationDetail() const { return m_authenticationDetail; }
    template<typename AuthenticationDetailT = DataAccessorAuthenticationDetail>
    void SetAuthenticationDetail(AuthenticationDetailT&& value) { m_authenticationDetailHasBeenSet = true; m_authenticationDetail = std::forward<AuthenticationDetailT>(value); }
    template<typename AuthenticationDetailT = DataAccessorAuthenticationDetail>
    GetDataAccessorResult& WithAuthenticationDetail(AuthenticationDetailT&& value) { SetAuthenticationDetail(std::forward<AuthenticationDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data accessor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetDataAccessorResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data accessor was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetDataAccessorResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataAccessorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_dataAccessorId;
    bool m_dataAccessorIdHasBeenSet = false;

    Aws::String m_dataAccessorArn;
    bool m_dataAccessorArnHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_idcApplicationArn;
    bool m_idcApplicationArnHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::Vector<ActionConfiguration> m_actionConfigurations;
    bool m_actionConfigurationsHasBeenSet = false;

    DataAccessorAuthenticationDetail m_authenticationDetail;
    bool m_authenticationDetailHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
