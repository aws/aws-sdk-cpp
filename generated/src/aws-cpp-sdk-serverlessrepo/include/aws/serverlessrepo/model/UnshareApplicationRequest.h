/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   */
  class UnshareApplicationRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API UnshareApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnshareApplication"; }

    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline UnshareApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline UnshareApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline UnshareApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The AWS Organization ID to unshare the application from.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The AWS Organization ID to unshare the application from.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The AWS Organization ID to unshare the application from.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The AWS Organization ID to unshare the application from.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The AWS Organization ID to unshare the application from.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The AWS Organization ID to unshare the application from.</p>
     */
    inline UnshareApplicationRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The AWS Organization ID to unshare the application from.</p>
     */
    inline UnshareApplicationRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The AWS Organization ID to unshare the application from.</p>
     */
    inline UnshareApplicationRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
