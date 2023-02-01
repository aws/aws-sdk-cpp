/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public MigrationHubRefactorSpacesRequest
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String SerializePayload() const override;


    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline PutResourcePolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline PutResourcePolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p>
     */
    inline PutResourcePolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which the policy is being
     * attached. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which the policy is being
     * attached. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which the policy is being
     * attached. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which the policy is being
     * attached. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which the policy is being
     * attached. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which the policy is being
     * attached. </p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which the policy is being
     * attached. </p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to which the policy is being
     * attached. </p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
