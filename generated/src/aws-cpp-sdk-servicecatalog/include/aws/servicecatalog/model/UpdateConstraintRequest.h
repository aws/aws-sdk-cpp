/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class UpdateConstraintRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API UpdateConstraintRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConstraint"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    UpdateConstraintRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the constraint.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateConstraintRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the constraint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConstraintRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constraint parameters, in JSON format. The syntax depends on the
     * constraint type as follows:</p> <dl> <dt>LAUNCH</dt> <dd> <p>You are required to
     * specify either the <code>RoleArn</code> or the <code>LocalRoleName</code> but
     * can't use both.</p> <p>Specify the <code>RoleArn</code> property as follows:</p>
     * <p> <code>{"RoleArn" : "arn:aws:iam::123456789012:role/LaunchRole"}</code> </p>
     * <p>Specify the <code>LocalRoleName</code> property as follows:</p> <p>
     * <code>{"LocalRoleName": "SCBasicLaunchRole"}</code> </p> <p>If you specify the
     * <code>LocalRoleName</code> property, when an account uses the launch constraint,
     * the IAM role with that name in the account will be used. This allows launch-role
     * constraints to be account-agnostic so the administrator can create fewer
     * resources per shared account.</p>  <p>The given role name must exist in
     * the account used to create the launch constraint and the account of the user who
     * launches a product with this launch constraint.</p>  <p>You cannot have
     * both a <code>LAUNCH</code> and a <code>STACKSET</code> constraint.</p> <p>You
     * also cannot have more than one <code>LAUNCH</code> constraint on a product and
     * portfolio.</p> </dd> <dt>NOTIFICATION</dt> <dd> <p>Specify the
     * <code>NotificationArns</code> property as follows:</p> <p>
     * <code>{"NotificationArns" : ["arn:aws:sns:us-east-1:123456789012:Topic"]}</code>
     * </p> </dd> <dt>RESOURCE_UPDATE</dt> <dd> <p>Specify the
     * <code>TagUpdatesOnProvisionedProduct</code> property as follows:</p> <p>
     * <code>{"Version":"2.0","Properties":{"TagUpdateOnProvisionedProduct":"String"}}</code>
     * </p> <p>The <code>TagUpdatesOnProvisionedProduct</code> property accepts a
     * string value of <code>ALLOWED</code> or <code>NOT_ALLOWED</code>.</p> </dd>
     * <dt>STACKSET</dt> <dd> <p>Specify the <code>Parameters</code> property as
     * follows:</p> <p> <code>{"Version": "String", "Properties": {"AccountList": [
     * "String" ], "RegionList": [ "String" ], "AdminRole": "String", "ExecutionRole":
     * "String"}}</code> </p> <p>You cannot have both a <code>LAUNCH</code> and a
     * <code>STACKSET</code> constraint.</p> <p>You also cannot have more than one
     * <code>STACKSET</code> constraint on a product and portfolio.</p> <p>Products
     * with a <code>STACKSET</code> constraint will launch an CloudFormation stack
     * set.</p> </dd> <dt>TEMPLATE</dt> <dd> <p>Specify the <code>Rules</code>
     * property. For more information, see <a
     * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/reference-template_constraint_rules.html">Template
     * Constraint Rules</a>.</p> </dd> </dl>
     */
    inline const Aws::String& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::String>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::String>
    UpdateConstraintRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
