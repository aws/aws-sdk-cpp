/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class CreatePermissionVersionRequest : public RAMRequest
  {
  public:
    AWS_RAM_API CreatePermissionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePermissionVersion"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the customer managed permission you're creating a new
     * version for.</p>
     */
    inline const Aws::String& GetPermissionArn() const{ return m_permissionArn; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the customer managed permission you're creating a new
     * version for.</p>
     */
    inline bool PermissionArnHasBeenSet() const { return m_permissionArnHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the customer managed permission you're creating a new
     * version for.</p>
     */
    inline void SetPermissionArn(const Aws::String& value) { m_permissionArnHasBeenSet = true; m_permissionArn = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the customer managed permission you're creating a new
     * version for.</p>
     */
    inline void SetPermissionArn(Aws::String&& value) { m_permissionArnHasBeenSet = true; m_permissionArn = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the customer managed permission you're creating a new
     * version for.</p>
     */
    inline void SetPermissionArn(const char* value) { m_permissionArnHasBeenSet = true; m_permissionArn.assign(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the customer managed permission you're creating a new
     * version for.</p>
     */
    inline CreatePermissionVersionRequest& WithPermissionArn(const Aws::String& value) { SetPermissionArn(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the customer managed permission you're creating a new
     * version for.</p>
     */
    inline CreatePermissionVersionRequest& WithPermissionArn(Aws::String&& value) { SetPermissionArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the customer managed permission you're creating a new
     * version for.</p>
     */
    inline CreatePermissionVersionRequest& WithPermissionArn(const char* value) { SetPermissionArn(value); return *this;}


    /**
     * <p>A string in JSON format string that contains the following elements of a
     * resource-based policy:</p> <ul> <li> <p> <b>Effect</b>: must be set to
     * <code>ALLOW</code>.</p> </li> <li> <p> <b>Action</b>: specifies the actions that
     * are allowed by this customer managed permission. The list must contain only
     * actions that are supported by the specified resource type. For a list of all
     * actions supported by each resource type, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Actions,
     * resources, and condition keys for Amazon Web Services services</a> in the
     * <i>Identity and Access Management User Guide</i>.</p> </li> <li> <p>
     * <b>Condition</b>: (optional) specifies conditional parameters that must evaluate
     * to true when a user attempts an action for that action to be allowed. For more
     * information about the Condition element, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * policies: Condition element</a> in the <i>Identity and Access Management User
     * Guide</i>.</p> </li> </ul> <p>This template can't include either the
     * <code>Resource</code> or <code>Principal</code> elements. Those are both filled
     * in by RAM when it instantiates the resource-based policy on each resource shared
     * using this managed permission. The <code>Resource</code> comes from the ARN of
     * the specific resource that you are sharing. The <code>Principal</code> comes
     * from the list of identities added to the resource share.</p>
     */
    inline const Aws::String& GetPolicyTemplate() const{ return m_policyTemplate; }

    /**
     * <p>A string in JSON format string that contains the following elements of a
     * resource-based policy:</p> <ul> <li> <p> <b>Effect</b>: must be set to
     * <code>ALLOW</code>.</p> </li> <li> <p> <b>Action</b>: specifies the actions that
     * are allowed by this customer managed permission. The list must contain only
     * actions that are supported by the specified resource type. For a list of all
     * actions supported by each resource type, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Actions,
     * resources, and condition keys for Amazon Web Services services</a> in the
     * <i>Identity and Access Management User Guide</i>.</p> </li> <li> <p>
     * <b>Condition</b>: (optional) specifies conditional parameters that must evaluate
     * to true when a user attempts an action for that action to be allowed. For more
     * information about the Condition element, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * policies: Condition element</a> in the <i>Identity and Access Management User
     * Guide</i>.</p> </li> </ul> <p>This template can't include either the
     * <code>Resource</code> or <code>Principal</code> elements. Those are both filled
     * in by RAM when it instantiates the resource-based policy on each resource shared
     * using this managed permission. The <code>Resource</code> comes from the ARN of
     * the specific resource that you are sharing. The <code>Principal</code> comes
     * from the list of identities added to the resource share.</p>
     */
    inline bool PolicyTemplateHasBeenSet() const { return m_policyTemplateHasBeenSet; }

    /**
     * <p>A string in JSON format string that contains the following elements of a
     * resource-based policy:</p> <ul> <li> <p> <b>Effect</b>: must be set to
     * <code>ALLOW</code>.</p> </li> <li> <p> <b>Action</b>: specifies the actions that
     * are allowed by this customer managed permission. The list must contain only
     * actions that are supported by the specified resource type. For a list of all
     * actions supported by each resource type, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Actions,
     * resources, and condition keys for Amazon Web Services services</a> in the
     * <i>Identity and Access Management User Guide</i>.</p> </li> <li> <p>
     * <b>Condition</b>: (optional) specifies conditional parameters that must evaluate
     * to true when a user attempts an action for that action to be allowed. For more
     * information about the Condition element, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * policies: Condition element</a> in the <i>Identity and Access Management User
     * Guide</i>.</p> </li> </ul> <p>This template can't include either the
     * <code>Resource</code> or <code>Principal</code> elements. Those are both filled
     * in by RAM when it instantiates the resource-based policy on each resource shared
     * using this managed permission. The <code>Resource</code> comes from the ARN of
     * the specific resource that you are sharing. The <code>Principal</code> comes
     * from the list of identities added to the resource share.</p>
     */
    inline void SetPolicyTemplate(const Aws::String& value) { m_policyTemplateHasBeenSet = true; m_policyTemplate = value; }

    /**
     * <p>A string in JSON format string that contains the following elements of a
     * resource-based policy:</p> <ul> <li> <p> <b>Effect</b>: must be set to
     * <code>ALLOW</code>.</p> </li> <li> <p> <b>Action</b>: specifies the actions that
     * are allowed by this customer managed permission. The list must contain only
     * actions that are supported by the specified resource type. For a list of all
     * actions supported by each resource type, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Actions,
     * resources, and condition keys for Amazon Web Services services</a> in the
     * <i>Identity and Access Management User Guide</i>.</p> </li> <li> <p>
     * <b>Condition</b>: (optional) specifies conditional parameters that must evaluate
     * to true when a user attempts an action for that action to be allowed. For more
     * information about the Condition element, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * policies: Condition element</a> in the <i>Identity and Access Management User
     * Guide</i>.</p> </li> </ul> <p>This template can't include either the
     * <code>Resource</code> or <code>Principal</code> elements. Those are both filled
     * in by RAM when it instantiates the resource-based policy on each resource shared
     * using this managed permission. The <code>Resource</code> comes from the ARN of
     * the specific resource that you are sharing. The <code>Principal</code> comes
     * from the list of identities added to the resource share.</p>
     */
    inline void SetPolicyTemplate(Aws::String&& value) { m_policyTemplateHasBeenSet = true; m_policyTemplate = std::move(value); }

    /**
     * <p>A string in JSON format string that contains the following elements of a
     * resource-based policy:</p> <ul> <li> <p> <b>Effect</b>: must be set to
     * <code>ALLOW</code>.</p> </li> <li> <p> <b>Action</b>: specifies the actions that
     * are allowed by this customer managed permission. The list must contain only
     * actions that are supported by the specified resource type. For a list of all
     * actions supported by each resource type, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Actions,
     * resources, and condition keys for Amazon Web Services services</a> in the
     * <i>Identity and Access Management User Guide</i>.</p> </li> <li> <p>
     * <b>Condition</b>: (optional) specifies conditional parameters that must evaluate
     * to true when a user attempts an action for that action to be allowed. For more
     * information about the Condition element, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * policies: Condition element</a> in the <i>Identity and Access Management User
     * Guide</i>.</p> </li> </ul> <p>This template can't include either the
     * <code>Resource</code> or <code>Principal</code> elements. Those are both filled
     * in by RAM when it instantiates the resource-based policy on each resource shared
     * using this managed permission. The <code>Resource</code> comes from the ARN of
     * the specific resource that you are sharing. The <code>Principal</code> comes
     * from the list of identities added to the resource share.</p>
     */
    inline void SetPolicyTemplate(const char* value) { m_policyTemplateHasBeenSet = true; m_policyTemplate.assign(value); }

    /**
     * <p>A string in JSON format string that contains the following elements of a
     * resource-based policy:</p> <ul> <li> <p> <b>Effect</b>: must be set to
     * <code>ALLOW</code>.</p> </li> <li> <p> <b>Action</b>: specifies the actions that
     * are allowed by this customer managed permission. The list must contain only
     * actions that are supported by the specified resource type. For a list of all
     * actions supported by each resource type, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Actions,
     * resources, and condition keys for Amazon Web Services services</a> in the
     * <i>Identity and Access Management User Guide</i>.</p> </li> <li> <p>
     * <b>Condition</b>: (optional) specifies conditional parameters that must evaluate
     * to true when a user attempts an action for that action to be allowed. For more
     * information about the Condition element, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * policies: Condition element</a> in the <i>Identity and Access Management User
     * Guide</i>.</p> </li> </ul> <p>This template can't include either the
     * <code>Resource</code> or <code>Principal</code> elements. Those are both filled
     * in by RAM when it instantiates the resource-based policy on each resource shared
     * using this managed permission. The <code>Resource</code> comes from the ARN of
     * the specific resource that you are sharing. The <code>Principal</code> comes
     * from the list of identities added to the resource share.</p>
     */
    inline CreatePermissionVersionRequest& WithPolicyTemplate(const Aws::String& value) { SetPolicyTemplate(value); return *this;}

    /**
     * <p>A string in JSON format string that contains the following elements of a
     * resource-based policy:</p> <ul> <li> <p> <b>Effect</b>: must be set to
     * <code>ALLOW</code>.</p> </li> <li> <p> <b>Action</b>: specifies the actions that
     * are allowed by this customer managed permission. The list must contain only
     * actions that are supported by the specified resource type. For a list of all
     * actions supported by each resource type, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Actions,
     * resources, and condition keys for Amazon Web Services services</a> in the
     * <i>Identity and Access Management User Guide</i>.</p> </li> <li> <p>
     * <b>Condition</b>: (optional) specifies conditional parameters that must evaluate
     * to true when a user attempts an action for that action to be allowed. For more
     * information about the Condition element, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * policies: Condition element</a> in the <i>Identity and Access Management User
     * Guide</i>.</p> </li> </ul> <p>This template can't include either the
     * <code>Resource</code> or <code>Principal</code> elements. Those are both filled
     * in by RAM when it instantiates the resource-based policy on each resource shared
     * using this managed permission. The <code>Resource</code> comes from the ARN of
     * the specific resource that you are sharing. The <code>Principal</code> comes
     * from the list of identities added to the resource share.</p>
     */
    inline CreatePermissionVersionRequest& WithPolicyTemplate(Aws::String&& value) { SetPolicyTemplate(std::move(value)); return *this;}

    /**
     * <p>A string in JSON format string that contains the following elements of a
     * resource-based policy:</p> <ul> <li> <p> <b>Effect</b>: must be set to
     * <code>ALLOW</code>.</p> </li> <li> <p> <b>Action</b>: specifies the actions that
     * are allowed by this customer managed permission. The list must contain only
     * actions that are supported by the specified resource type. For a list of all
     * actions supported by each resource type, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Actions,
     * resources, and condition keys for Amazon Web Services services</a> in the
     * <i>Identity and Access Management User Guide</i>.</p> </li> <li> <p>
     * <b>Condition</b>: (optional) specifies conditional parameters that must evaluate
     * to true when a user attempts an action for that action to be allowed. For more
     * information about the Condition element, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * policies: Condition element</a> in the <i>Identity and Access Management User
     * Guide</i>.</p> </li> </ul> <p>This template can't include either the
     * <code>Resource</code> or <code>Principal</code> elements. Those are both filled
     * in by RAM when it instantiates the resource-based policy on each resource shared
     * using this managed permission. The <code>Resource</code> comes from the ARN of
     * the specific resource that you are sharing. The <code>Principal</code> comes
     * from the list of identities added to the resource share.</p>
     */
    inline CreatePermissionVersionRequest& WithPolicyTemplate(const char* value) { SetPolicyTemplate(value); return *this;}


    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreatePermissionVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreatePermissionVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreatePermissionVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_permissionArn;
    bool m_permissionArnHasBeenSet = false;

    Aws::String m_policyTemplate;
    bool m_policyTemplateHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
