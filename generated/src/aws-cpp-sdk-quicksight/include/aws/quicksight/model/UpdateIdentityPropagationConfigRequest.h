/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateIdentityPropagationConfigRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateIdentityPropagationConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdentityPropagationConfig"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the identity
     * propagation configuration that you want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateIdentityPropagationConfigRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services service that contains the authorized
     * targets that you want to add or update.</p>
     */
    inline ServiceType GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(ServiceType value) { m_serviceHasBeenSet = true; m_service = value; }
    inline UpdateIdentityPropagationConfigRequest& WithService(ServiceType value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a list of application ARNs that represent the authorized targets
     * for a service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedTargets() const { return m_authorizedTargets; }
    inline bool AuthorizedTargetsHasBeenSet() const { return m_authorizedTargetsHasBeenSet; }
    template<typename AuthorizedTargetsT = Aws::Vector<Aws::String>>
    void SetAuthorizedTargets(AuthorizedTargetsT&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = std::forward<AuthorizedTargetsT>(value); }
    template<typename AuthorizedTargetsT = Aws::Vector<Aws::String>>
    UpdateIdentityPropagationConfigRequest& WithAuthorizedTargets(AuthorizedTargetsT&& value) { SetAuthorizedTargets(std::forward<AuthorizedTargetsT>(value)); return *this;}
    template<typename AuthorizedTargetsT = Aws::String>
    UpdateIdentityPropagationConfigRequest& AddAuthorizedTargets(AuthorizedTargetsT&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.emplace_back(std::forward<AuthorizedTargetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    ServiceType m_service{ServiceType::NOT_SET};
    bool m_serviceHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedTargets;
    bool m_authorizedTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
