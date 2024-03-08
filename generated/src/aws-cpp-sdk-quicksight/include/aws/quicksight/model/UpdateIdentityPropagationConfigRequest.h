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
    AWS_QUICKSIGHT_API UpdateIdentityPropagationConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdentityPropagationConfig"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the identity
     * propagation configuration that you want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the identity
     * propagation configuration that you want to update.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the identity
     * propagation configuration that you want to update.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the identity
     * propagation configuration that you want to update.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the identity
     * propagation configuration that you want to update.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the identity
     * propagation configuration that you want to update.</p>
     */
    inline UpdateIdentityPropagationConfigRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the identity
     * propagation configuration that you want to update.</p>
     */
    inline UpdateIdentityPropagationConfigRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the identity
     * propagation configuration that you want to update.</p>
     */
    inline UpdateIdentityPropagationConfigRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The name of the Amazon Web Services service that contains the authorized
     * targets that you want to add or update.</p>
     */
    inline const ServiceType& GetService() const{ return m_service; }

    /**
     * <p>The name of the Amazon Web Services service that contains the authorized
     * targets that you want to add or update.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services service that contains the authorized
     * targets that you want to add or update.</p>
     */
    inline void SetService(const ServiceType& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The name of the Amazon Web Services service that contains the authorized
     * targets that you want to add or update.</p>
     */
    inline void SetService(ServiceType&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services service that contains the authorized
     * targets that you want to add or update.</p>
     */
    inline UpdateIdentityPropagationConfigRequest& WithService(const ServiceType& value) { SetService(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services service that contains the authorized
     * targets that you want to add or update.</p>
     */
    inline UpdateIdentityPropagationConfigRequest& WithService(ServiceType&& value) { SetService(std::move(value)); return *this;}


    /**
     * <p>Specifies a list of application ARNs that represent the authorized targets
     * for a service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedTargets() const{ return m_authorizedTargets; }

    /**
     * <p>Specifies a list of application ARNs that represent the authorized targets
     * for a service.</p>
     */
    inline bool AuthorizedTargetsHasBeenSet() const { return m_authorizedTargetsHasBeenSet; }

    /**
     * <p>Specifies a list of application ARNs that represent the authorized targets
     * for a service.</p>
     */
    inline void SetAuthorizedTargets(const Aws::Vector<Aws::String>& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = value; }

    /**
     * <p>Specifies a list of application ARNs that represent the authorized targets
     * for a service.</p>
     */
    inline void SetAuthorizedTargets(Aws::Vector<Aws::String>&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = std::move(value); }

    /**
     * <p>Specifies a list of application ARNs that represent the authorized targets
     * for a service.</p>
     */
    inline UpdateIdentityPropagationConfigRequest& WithAuthorizedTargets(const Aws::Vector<Aws::String>& value) { SetAuthorizedTargets(value); return *this;}

    /**
     * <p>Specifies a list of application ARNs that represent the authorized targets
     * for a service.</p>
     */
    inline UpdateIdentityPropagationConfigRequest& WithAuthorizedTargets(Aws::Vector<Aws::String>&& value) { SetAuthorizedTargets(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of application ARNs that represent the authorized targets
     * for a service.</p>
     */
    inline UpdateIdentityPropagationConfigRequest& AddAuthorizedTargets(const Aws::String& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(value); return *this; }

    /**
     * <p>Specifies a list of application ARNs that represent the authorized targets
     * for a service.</p>
     */
    inline UpdateIdentityPropagationConfigRequest& AddAuthorizedTargets(Aws::String&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of application ARNs that represent the authorized targets
     * for a service.</p>
     */
    inline UpdateIdentityPropagationConfigRequest& AddAuthorizedTargets(const char* value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(value); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    ServiceType m_service;
    bool m_serviceHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedTargets;
    bool m_authorizedTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
