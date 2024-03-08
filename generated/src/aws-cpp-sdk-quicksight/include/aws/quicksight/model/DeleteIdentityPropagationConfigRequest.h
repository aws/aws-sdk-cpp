/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ServiceType.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DeleteIdentityPropagationConfigRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DeleteIdentityPropagationConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIdentityPropagationConfig"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that you want to delete an identity
     * propagation configuration from.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that you want to delete an identity
     * propagation configuration from.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that you want to delete an identity
     * propagation configuration from.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that you want to delete an identity
     * propagation configuration from.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that you want to delete an identity
     * propagation configuration from.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that you want to delete an identity
     * propagation configuration from.</p>
     */
    inline DeleteIdentityPropagationConfigRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that you want to delete an identity
     * propagation configuration from.</p>
     */
    inline DeleteIdentityPropagationConfigRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that you want to delete an identity
     * propagation configuration from.</p>
     */
    inline DeleteIdentityPropagationConfigRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The name of the Amazon Web Services service that you want to delete the
     * associated access scopes and authorized targets from.</p>
     */
    inline const ServiceType& GetService() const{ return m_service; }

    /**
     * <p>The name of the Amazon Web Services service that you want to delete the
     * associated access scopes and authorized targets from.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services service that you want to delete the
     * associated access scopes and authorized targets from.</p>
     */
    inline void SetService(const ServiceType& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The name of the Amazon Web Services service that you want to delete the
     * associated access scopes and authorized targets from.</p>
     */
    inline void SetService(ServiceType&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services service that you want to delete the
     * associated access scopes and authorized targets from.</p>
     */
    inline DeleteIdentityPropagationConfigRequest& WithService(const ServiceType& value) { SetService(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services service that you want to delete the
     * associated access scopes and authorized targets from.</p>
     */
    inline DeleteIdentityPropagationConfigRequest& WithService(ServiceType&& value) { SetService(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    ServiceType m_service;
    bool m_serviceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
