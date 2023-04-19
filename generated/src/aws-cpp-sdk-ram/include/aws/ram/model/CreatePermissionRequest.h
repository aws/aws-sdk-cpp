/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ram/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class CreatePermissionRequest : public RAMRequest
  {
  public:
    AWS_RAM_API CreatePermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePermission"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the name of the customer managed permission. The name must be
     * unique within the Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the name of the customer managed permission. The name must be
     * unique within the Amazon Web Services Region.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the name of the customer managed permission. The name must be
     * unique within the Amazon Web Services Region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name of the customer managed permission. The name must be
     * unique within the Amazon Web Services Region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the name of the customer managed permission. The name must be
     * unique within the Amazon Web Services Region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the name of the customer managed permission. The name must be
     * unique within the Amazon Web Services Region.</p>
     */
    inline CreatePermissionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name of the customer managed permission. The name must be
     * unique within the Amazon Web Services Region.</p>
     */
    inline CreatePermissionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the customer managed permission. The name must be
     * unique within the Amazon Web Services Region.</p>
     */
    inline CreatePermissionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the name of the resource type that this customer managed permission
     * applies to.</p> <p>The format is <code>
     * <i>&lt;service-code&gt;</i>:<i>&lt;resource-type&gt;</i> </code> and is not case
     * sensitive. For example, to specify an Amazon EC2 Subnet, you can use the string
     * <code>ec2:subnet</code>. To see the list of valid values for this parameter,
     * query the <a>ListResourceTypes</a> operation.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Specifies the name of the resource type that this customer managed permission
     * applies to.</p> <p>The format is <code>
     * <i>&lt;service-code&gt;</i>:<i>&lt;resource-type&gt;</i> </code> and is not case
     * sensitive. For example, to specify an Amazon EC2 Subnet, you can use the string
     * <code>ec2:subnet</code>. To see the list of valid values for this parameter,
     * query the <a>ListResourceTypes</a> operation.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Specifies the name of the resource type that this customer managed permission
     * applies to.</p> <p>The format is <code>
     * <i>&lt;service-code&gt;</i>:<i>&lt;resource-type&gt;</i> </code> and is not case
     * sensitive. For example, to specify an Amazon EC2 Subnet, you can use the string
     * <code>ec2:subnet</code>. To see the list of valid values for this parameter,
     * query the <a>ListResourceTypes</a> operation.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Specifies the name of the resource type that this customer managed permission
     * applies to.</p> <p>The format is <code>
     * <i>&lt;service-code&gt;</i>:<i>&lt;resource-type&gt;</i> </code> and is not case
     * sensitive. For example, to specify an Amazon EC2 Subnet, you can use the string
     * <code>ec2:subnet</code>. To see the list of valid values for this parameter,
     * query the <a>ListResourceTypes</a> operation.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Specifies the name of the resource type that this customer managed permission
     * applies to.</p> <p>The format is <code>
     * <i>&lt;service-code&gt;</i>:<i>&lt;resource-type&gt;</i> </code> and is not case
     * sensitive. For example, to specify an Amazon EC2 Subnet, you can use the string
     * <code>ec2:subnet</code>. To see the list of valid values for this parameter,
     * query the <a>ListResourceTypes</a> operation.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Specifies the name of the resource type that this customer managed permission
     * applies to.</p> <p>The format is <code>
     * <i>&lt;service-code&gt;</i>:<i>&lt;resource-type&gt;</i> </code> and is not case
     * sensitive. For example, to specify an Amazon EC2 Subnet, you can use the string
     * <code>ec2:subnet</code>. To see the list of valid values for this parameter,
     * query the <a>ListResourceTypes</a> operation.</p>
     */
    inline CreatePermissionRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Specifies the name of the resource type that this customer managed permission
     * applies to.</p> <p>The format is <code>
     * <i>&lt;service-code&gt;</i>:<i>&lt;resource-type&gt;</i> </code> and is not case
     * sensitive. For example, to specify an Amazon EC2 Subnet, you can use the string
     * <code>ec2:subnet</code>. To see the list of valid values for this parameter,
     * query the <a>ListResourceTypes</a> operation.</p>
     */
    inline CreatePermissionRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the resource type that this customer managed permission
     * applies to.</p> <p>The format is <code>
     * <i>&lt;service-code&gt;</i>:<i>&lt;resource-type&gt;</i> </code> and is not case
     * sensitive. For example, to specify an Amazon EC2 Subnet, you can use the string
     * <code>ec2:subnet</code>. To see the list of valid values for this parameter,
     * query the <a>ListResourceTypes</a> operation.</p>
     */
    inline CreatePermissionRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


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
    inline CreatePermissionRequest& WithPolicyTemplate(const Aws::String& value) { SetPolicyTemplate(value); return *this;}

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
    inline CreatePermissionRequest& WithPolicyTemplate(Aws::String&& value) { SetPolicyTemplate(std::move(value)); return *this;}

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
    inline CreatePermissionRequest& WithPolicyTemplate(const char* value) { SetPolicyTemplate(value); return *this;}


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
    inline CreatePermissionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

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
    inline CreatePermissionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

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
    inline CreatePermissionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Specifies a list of one or more tag key and value pairs to attach to the
     * permission.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies a list of one or more tag key and value pairs to attach to the
     * permission.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies a list of one or more tag key and value pairs to attach to the
     * permission.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies a list of one or more tag key and value pairs to attach to the
     * permission.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies a list of one or more tag key and value pairs to attach to the
     * permission.</p>
     */
    inline CreatePermissionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies a list of one or more tag key and value pairs to attach to the
     * permission.</p>
     */
    inline CreatePermissionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of one or more tag key and value pairs to attach to the
     * permission.</p>
     */
    inline CreatePermissionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies a list of one or more tag key and value pairs to attach to the
     * permission.</p>
     */
    inline CreatePermissionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_policyTemplate;
    bool m_policyTemplateHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
