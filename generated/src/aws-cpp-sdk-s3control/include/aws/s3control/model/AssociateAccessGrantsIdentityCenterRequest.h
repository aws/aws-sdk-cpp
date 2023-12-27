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
  class AssociateAccessGrantsIdentityCenterRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API AssociateAccessGrantsIdentityCenterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAccessGrantsIdentityCenter"; }

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
    inline AssociateAccessGrantsIdentityCenterRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline AssociateAccessGrantsIdentityCenterRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline AssociateAccessGrantsIdentityCenterRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services IAM Identity Center
     * instance that you are associating with your S3 Access Grants instance. An IAM
     * Identity Center instance is your corporate identity directory that you added to
     * the IAM Identity Center. You can use the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_ListInstances.html">ListInstances</a>
     * API operation to retrieve a list of your Identity Center instances and their
     * ARNs.</p>
     */
    inline const Aws::String& GetIdentityCenterArn() const{ return m_identityCenterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services IAM Identity Center
     * instance that you are associating with your S3 Access Grants instance. An IAM
     * Identity Center instance is your corporate identity directory that you added to
     * the IAM Identity Center. You can use the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_ListInstances.html">ListInstances</a>
     * API operation to retrieve a list of your Identity Center instances and their
     * ARNs.</p>
     */
    inline bool IdentityCenterArnHasBeenSet() const { return m_identityCenterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services IAM Identity Center
     * instance that you are associating with your S3 Access Grants instance. An IAM
     * Identity Center instance is your corporate identity directory that you added to
     * the IAM Identity Center. You can use the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_ListInstances.html">ListInstances</a>
     * API operation to retrieve a list of your Identity Center instances and their
     * ARNs.</p>
     */
    inline void SetIdentityCenterArn(const Aws::String& value) { m_identityCenterArnHasBeenSet = true; m_identityCenterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services IAM Identity Center
     * instance that you are associating with your S3 Access Grants instance. An IAM
     * Identity Center instance is your corporate identity directory that you added to
     * the IAM Identity Center. You can use the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_ListInstances.html">ListInstances</a>
     * API operation to retrieve a list of your Identity Center instances and their
     * ARNs.</p>
     */
    inline void SetIdentityCenterArn(Aws::String&& value) { m_identityCenterArnHasBeenSet = true; m_identityCenterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services IAM Identity Center
     * instance that you are associating with your S3 Access Grants instance. An IAM
     * Identity Center instance is your corporate identity directory that you added to
     * the IAM Identity Center. You can use the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_ListInstances.html">ListInstances</a>
     * API operation to retrieve a list of your Identity Center instances and their
     * ARNs.</p>
     */
    inline void SetIdentityCenterArn(const char* value) { m_identityCenterArnHasBeenSet = true; m_identityCenterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services IAM Identity Center
     * instance that you are associating with your S3 Access Grants instance. An IAM
     * Identity Center instance is your corporate identity directory that you added to
     * the IAM Identity Center. You can use the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_ListInstances.html">ListInstances</a>
     * API operation to retrieve a list of your Identity Center instances and their
     * ARNs.</p>
     */
    inline AssociateAccessGrantsIdentityCenterRequest& WithIdentityCenterArn(const Aws::String& value) { SetIdentityCenterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services IAM Identity Center
     * instance that you are associating with your S3 Access Grants instance. An IAM
     * Identity Center instance is your corporate identity directory that you added to
     * the IAM Identity Center. You can use the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_ListInstances.html">ListInstances</a>
     * API operation to retrieve a list of your Identity Center instances and their
     * ARNs.</p>
     */
    inline AssociateAccessGrantsIdentityCenterRequest& WithIdentityCenterArn(Aws::String&& value) { SetIdentityCenterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services IAM Identity Center
     * instance that you are associating with your S3 Access Grants instance. An IAM
     * Identity Center instance is your corporate identity directory that you added to
     * the IAM Identity Center. You can use the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_ListInstances.html">ListInstances</a>
     * API operation to retrieve a list of your Identity Center instances and their
     * ARNs.</p>
     */
    inline AssociateAccessGrantsIdentityCenterRequest& WithIdentityCenterArn(const char* value) { SetIdentityCenterArn(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_identityCenterArn;
    bool m_identityCenterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
