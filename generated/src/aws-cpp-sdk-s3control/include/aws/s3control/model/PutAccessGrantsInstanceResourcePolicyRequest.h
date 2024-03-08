/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class PutAccessGrantsInstanceResourcePolicyRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API PutAccessGrantsInstanceResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccessGrantsInstanceResourcePolicy"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline PutAccessGrantsInstanceResourcePolicyRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline PutAccessGrantsInstanceResourcePolicyRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline PutAccessGrantsInstanceResourcePolicyRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The resource policy of the S3 Access Grants instance that you are
     * updating.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The resource policy of the S3 Access Grants instance that you are
     * updating.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The resource policy of the S3 Access Grants instance that you are
     * updating.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The resource policy of the S3 Access Grants instance that you are
     * updating.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The resource policy of the S3 Access Grants instance that you are
     * updating.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The resource policy of the S3 Access Grants instance that you are
     * updating.</p>
     */
    inline PutAccessGrantsInstanceResourcePolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The resource policy of the S3 Access Grants instance that you are
     * updating.</p>
     */
    inline PutAccessGrantsInstanceResourcePolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The resource policy of the S3 Access Grants instance that you are
     * updating.</p>
     */
    inline PutAccessGrantsInstanceResourcePolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline const Aws::String& GetOrganization() const{ return m_organization; }

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline void SetOrganization(const Aws::String& value) { m_organizationHasBeenSet = true; m_organization = value; }

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline void SetOrganization(Aws::String&& value) { m_organizationHasBeenSet = true; m_organization = std::move(value); }

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline void SetOrganization(const char* value) { m_organizationHasBeenSet = true; m_organization.assign(value); }

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline PutAccessGrantsInstanceResourcePolicyRequest& WithOrganization(const Aws::String& value) { SetOrganization(value); return *this;}

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline PutAccessGrantsInstanceResourcePolicyRequest& WithOrganization(Aws::String&& value) { SetOrganization(std::move(value)); return *this;}

    /**
     * <p>The Organization of the resource policy of the S3 Access Grants instance.</p>
     */
    inline PutAccessGrantsInstanceResourcePolicyRequest& WithOrganization(const char* value) { SetOrganization(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_organization;
    bool m_organizationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
