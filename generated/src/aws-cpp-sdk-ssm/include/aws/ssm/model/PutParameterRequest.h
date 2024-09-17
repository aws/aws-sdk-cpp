/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ParameterTier.h>
#include <aws/ssm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class PutParameterRequest : public SSMRequest
  {
  public:
    AWS_SSM_API PutParameterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutParameter"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The fully qualified name of the parameter that you want to add to the
     * system.</p>  <p>You can't enter the Amazon Resource Name (ARN) for a
     * parameter, only the parameter name itself.</p>  <p>The fully qualified
     * name includes the complete hierarchy of the parameter path and name. For
     * parameters in a hierarchy, you must include a leading forward slash character
     * (/) when you create or reference a parameter. For example:
     * <code>/Dev/DBServer/MySQL/db-string13</code> </p> <p>Naming Constraints:</p>
     * <ul> <li> <p>Parameter names are case sensitive.</p> </li> <li> <p>A parameter
     * name must be unique within an Amazon Web Services Region</p> </li> <li> <p>A
     * parameter name can't be prefixed with "<code>aws</code>" or "<code>ssm</code>"
     * (case-insensitive).</p> </li> <li> <p>Parameter names can include only the
     * following symbols and letters: <code>a-zA-Z0-9_.-</code> </p> <p>In addition,
     * the slash character ( / ) is used to delineate hierarchies in parameter names.
     * For example: <code>/Dev/Production/East/Project-ABC/MyParameter</code> </p>
     * </li> <li> <p>A parameter name can't include spaces.</p> </li> <li> <p>Parameter
     * hierarchies are limited to a maximum depth of fifteen levels.</p> </li> </ul>
     * <p>For additional information about valid values for parameter names, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-create.html">Creating
     * Systems Manager parameters</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>  <p>The maximum length constraint of 2048 characters
     * listed below includes 1037 characters reserved for internal use by Systems
     * Manager. The maximum length for a parameter name that you create is 1011
     * characters. This includes the characters in the ARN that precede the name you
     * specify, such as <code>arn:aws:ssm:us-east-2:111122223333:parameter/</code>.</p>
     * 
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutParameterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutParameterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutParameterRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the parameter that you want to add to the system. Optional
     * but recommended.</p>  <p>Don't enter personally identifiable
     * information in this field.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PutParameterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PutParameterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PutParameterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter value that you want to add to the system. Standard parameters
     * have a value limit of 4 KB. Advanced parameters have a value limit of 8 KB.</p>
     *  <p>Parameters can't be referenced or nested in the values of other
     * parameters. You can't include <code>{{}}</code> or
     * <code>{{ssm:<i>parameter-name</i>}}</code> in a parameter value.</p> 
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline PutParameterRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline PutParameterRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline PutParameterRequest& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of parameter that you want to add to the system.</p>  <p>
     * <code>SecureString</code> isn't currently supported for CloudFormation
     * templates.</p>  <p>Items in a <code>StringList</code> must be separated
     * by a comma (,). You can't use other punctuation or special character to escape
     * items in the list. If you have a parameter value that requires a comma, then use
     * the <code>String</code> data type.</p>  <p>Specifying a parameter
     * type isn't required when updating a parameter. You must specify a parameter type
     * when creating a parameter.</p> 
     */
    inline const ParameterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PutParameterRequest& WithType(const ParameterType& value) { SetType(value); return *this;}
    inline PutParameterRequest& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) ID that you want to use to encrypt a
     * parameter. Use a custom key for better security. Required for parameters that
     * use the <code>SecureString</code> data type.</p> <p>If you don't specify a key
     * ID, the system uses the default key associated with your Amazon Web Services
     * account which is not as secure as using a custom key.</p> <ul> <li> <p>To use a
     * custom KMS key, choose the <code>SecureString</code> data type with the
     * <code>Key ID</code> parameter.</p> </li> </ul>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }
    inline PutParameterRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline PutParameterRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline PutParameterRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overwrite an existing parameter. The default value is <code>false</code>.</p>
     */
    inline bool GetOverwrite() const{ return m_overwrite; }
    inline bool OverwriteHasBeenSet() const { return m_overwriteHasBeenSet; }
    inline void SetOverwrite(bool value) { m_overwriteHasBeenSet = true; m_overwrite = value; }
    inline PutParameterRequest& WithOverwrite(bool value) { SetOverwrite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression used to validate the parameter value. For example, for
     * String types with values restricted to numbers, you can specify the following:
     * AllowedPattern=^\d+$ </p>
     */
    inline const Aws::String& GetAllowedPattern() const{ return m_allowedPattern; }
    inline bool AllowedPatternHasBeenSet() const { return m_allowedPatternHasBeenSet; }
    inline void SetAllowedPattern(const Aws::String& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = value; }
    inline void SetAllowedPattern(Aws::String&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::move(value); }
    inline void SetAllowedPattern(const char* value) { m_allowedPatternHasBeenSet = true; m_allowedPattern.assign(value); }
    inline PutParameterRequest& WithAllowedPattern(const Aws::String& value) { SetAllowedPattern(value); return *this;}
    inline PutParameterRequest& WithAllowedPattern(Aws::String&& value) { SetAllowedPattern(std::move(value)); return *this;}
    inline PutParameterRequest& WithAllowedPattern(const char* value) { SetAllowedPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a Systems Manager parameter to
     * identify the type of resource to which it applies, the environment, or the type
     * of configuration data referenced by the parameter. In this case, you could
     * specify the following key-value pairs:</p> <ul> <li> <p>
     * <code>Key=Resource,Value=S3bucket</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=ParameterType,Value=LicenseKey</code> </p> </li> </ul>  <p>To
     * add tags to an existing Systems Manager parameter, use the
     * <a>AddTagsToResource</a> operation.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutParameterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PutParameterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PutParameterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PutParameterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameter tier to assign to a parameter.</p> <p>Parameter Store offers a
     * standard tier and an advanced tier for parameters. Standard parameters have a
     * content size limit of 4 KB and can't be configured to use parameter policies.
     * You can create a maximum of 10,000 standard parameters for each Region in an
     * Amazon Web Services account. Standard parameters are offered at no additional
     * cost. </p> <p>Advanced parameters have a content size limit of 8 KB and can be
     * configured to use parameter policies. You can create a maximum of 100,000
     * advanced parameters for each Region in an Amazon Web Services account. Advanced
     * parameters incur a charge. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-advanced-parameters.html">Managing
     * parameter tiers</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p> <p>You can change a standard parameter to an advanced parameter
     * any time. But you can't revert an advanced parameter to a standard parameter.
     * Reverting an advanced parameter to a standard parameter would result in data
     * loss because the system would truncate the size of the parameter from 8 KB to 4
     * KB. Reverting would also remove any policies attached to the parameter. Lastly,
     * advanced parameters use a different form of encryption than standard parameters.
     * </p> <p>If you no longer need an advanced parameter, or if you no longer want to
     * incur charges for an advanced parameter, you must delete it and recreate it as a
     * new standard parameter. </p> <p> <b>Using the Default Tier Configuration</b>
     * </p> <p>In <code>PutParameter</code> requests, you can specify the tier to
     * create the parameter in. Whenever you specify a tier in the request, Parameter
     * Store creates or updates the parameter according to that request. However, if
     * you don't specify a tier in a request, Parameter Store assigns the tier based on
     * the current Parameter Store default tier configuration.</p> <p>The default tier
     * when you begin using Parameter Store is the standard-parameter tier. If you use
     * the advanced-parameter tier, you can specify one of the following as the
     * default:</p> <ul> <li> <p> <b>Advanced</b>: With this option, Parameter Store
     * evaluates all requests as advanced parameters. </p> </li> <li> <p>
     * <b>Intelligent-Tiering</b>: With this option, Parameter Store evaluates each
     * request to determine if the parameter is standard or advanced. </p> <p>If the
     * request doesn't include any options that require an advanced parameter, the
     * parameter is created in the standard-parameter tier. If one or more options
     * requiring an advanced parameter are included in the request, Parameter Store
     * create a parameter in the advanced-parameter tier.</p> <p>This approach helps
     * control your parameter-related costs by always creating standard parameters
     * unless an advanced parameter is necessary. </p> </li> </ul> <p>Options that
     * require an advanced parameter include the following:</p> <ul> <li> <p>The
     * content size of the parameter is more than 4 KB.</p> </li> <li> <p>The parameter
     * uses a parameter policy.</p> </li> <li> <p>More than 10,000 parameters already
     * exist in your Amazon Web Services account in the current Amazon Web Services
     * Region.</p> </li> </ul> <p>For more information about configuring the default
     * tier option, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-advanced-parameters.html#ps-default-tier">Specifying
     * a default parameter tier</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const ParameterTier& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const ParameterTier& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(ParameterTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline PutParameterRequest& WithTier(const ParameterTier& value) { SetTier(value); return *this;}
    inline PutParameterRequest& WithTier(ParameterTier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more policies to apply to a parameter. This operation takes a JSON
     * array. Parameter Store, a capability of Amazon Web Services Systems Manager
     * supports the following policy types:</p> <p>Expiration: This policy deletes the
     * parameter after it expires. When you create the policy, you specify the
     * expiration date. You can update the expiration date and time by updating the
     * policy. Updating the <i>parameter</i> doesn't affect the expiration date and
     * time. When the expiration time is reached, Parameter Store deletes the
     * parameter.</p> <p>ExpirationNotification: This policy initiates an event in
     * Amazon CloudWatch Events that notifies you about the expiration. By using this
     * policy, you can receive notification before or after the expiration time is
     * reached, in units of days or hours.</p> <p>NoChangeNotification: This policy
     * initiates a CloudWatch Events event if a parameter hasn't been modified for a
     * specified period of time. This policy type is useful when, for example, a secret
     * needs to be changed within a period of time, but it hasn't been changed.</p>
     * <p>All existing policies are preserved until you send new policies or an empty
     * policy. For more information about parameter policies, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-policies.html">Assigning
     * parameter policies</a>. </p>
     */
    inline const Aws::String& GetPolicies() const{ return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    inline void SetPolicies(const Aws::String& value) { m_policiesHasBeenSet = true; m_policies = value; }
    inline void SetPolicies(Aws::String&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }
    inline void SetPolicies(const char* value) { m_policiesHasBeenSet = true; m_policies.assign(value); }
    inline PutParameterRequest& WithPolicies(const Aws::String& value) { SetPolicies(value); return *this;}
    inline PutParameterRequest& WithPolicies(Aws::String&& value) { SetPolicies(std::move(value)); return *this;}
    inline PutParameterRequest& WithPolicies(const char* value) { SetPolicies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type for a <code>String</code> parameter. Supported data types
     * include plain text and Amazon Machine Image (AMI) IDs.</p> <p> <b>The following
     * data type values are supported.</b> </p> <ul> <li> <p> <code>text</code> </p>
     * </li> <li> <p> <code>aws:ec2:image</code> </p> </li> <li> <p>
     * <code>aws:ssm:integration</code> </p> </li> </ul> <p>When you create a
     * <code>String</code> parameter and specify <code>aws:ec2:image</code>, Amazon Web
     * Services Systems Manager validates the parameter value is in the required
     * format, such as <code>ami-12345abcdeEXAMPLE</code>, and that the specified AMI
     * is available in your Amazon Web Services account.</p>  <p>If the action is
     * successful, the service sends back an HTTP 200 response which indicates a
     * successful <code>PutParameter</code> call for all cases except for data type
     * <code>aws:ec2:image</code>. If you call <code>PutParameter</code> with
     * <code>aws:ec2:image</code> data type, a successful HTTP 200 response does not
     * guarantee that your parameter was successfully created or updated. The
     * <code>aws:ec2:image</code> value is validated asynchronously, and the
     * <code>PutParameter</code> call returns before the validation is complete. If you
     * submit an invalid AMI value, the PutParameter operation will return success, but
     * the asynchronous validation will fail and the parameter will not be created or
     * updated. To monitor whether your <code>aws:ec2:image</code> parameters are
     * created successfully, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-cwe.html">Setting
     * up notifications or trigger actions based on Parameter Store events</a>. For
     * more information about AMI format validation , see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-ec2-aliases.html">Native
     * parameter support for Amazon Machine Image IDs</a>. </p> 
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }
    inline PutParameterRequest& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}
    inline PutParameterRequest& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}
    inline PutParameterRequest& WithDataType(const char* value) { SetDataType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ParameterType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    bool m_overwrite;
    bool m_overwriteHasBeenSet = false;

    Aws::String m_allowedPattern;
    bool m_allowedPatternHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ParameterTier m_tier;
    bool m_tierHasBeenSet = false;

    Aws::String m_policies;
    bool m_policiesHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
