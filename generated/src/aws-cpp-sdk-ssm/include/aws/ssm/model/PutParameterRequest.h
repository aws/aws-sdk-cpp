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
    AWS_SSM_API PutParameterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutParameter"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The fully qualified name of the parameter that you want to create or
     * update.</p>  <p>You can't enter the Amazon Resource Name (ARN) for a
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
     * </li> <li> <p>Parameter names can't contain spaces. The service removes any
     * spaces specified for the beginning or end of a parameter name. If the specified
     * name for a parameter contains spaces between characters, the request fails with
     * a <code>ValidationException</code> error.</p> </li> <li> <p>Parameter
     * hierarchies are limited to a maximum depth of fifteen levels.</p> </li> </ul>
     * <p>For additional information about valid values for parameter names, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-su-create.html">Creating
     * Systems Manager parameters</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>  <p>The reported maximum length of 2048 characters for
     * a parameter name includes 1037 characters that are reserved for internal use by
     * Systems Manager. The maximum length for a parameter name that you specify is
     * 1011 characters.</p> <p>This count of 1011 characters includes the characters in
     * the ARN that precede the name you specify. This ARN length will vary depending
     * on your partition and Region. For example, the following 45 characters count
     * toward the 1011 character maximum for a parameter created in the US East (Ohio)
     * Region: <code>arn:aws:ssm:us-east-2:111122223333:parameter/</code>.</p> 
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutParameterRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the parameter that you want to add to the system. Optional
     * but recommended.</p>  <p>Don't enter personally identifiable
     * information in this field.</p> 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PutParameterRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter value that you want to add to the system. Standard parameters
     * have a value limit of 4 KB. Advanced parameters have a value limit of 8 KB.</p>
     *  <p>Parameters can't be referenced or nested in the values of other
     * parameters. You can't include values wrapped in double brackets
     * <code>{{}}</code> or <code>{{ssm:<i>parameter-name</i>}}</code> in a parameter
     * value.</p> 
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    PutParameterRequest& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of parameter that you want to create.</p>  <p>
     * <code>SecureString</code> isn't currently supported for CloudFormation
     * templates.</p>  <p>Items in a <code>StringList</code> must be separated
     * by a comma (,). You can't use other punctuation or special character to escape
     * items in the list. If you have a parameter value that requires a comma, then use
     * the <code>String</code> data type.</p>  <p>Specifying a parameter
     * type isn't required when updating a parameter. You must specify a parameter type
     * when creating a parameter.</p> 
     */
    inline ParameterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ParameterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PutParameterRequest& WithType(ParameterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) ID that you want to use to encrypt a
     * parameter. Use a custom key for better security. Required for parameters that
     * use the <code>SecureString</code> data type.</p> <p>If you don't specify a key
     * ID, the system uses the default key associated with your Amazon Web Services
     * account, which is not as secure as using a custom key.</p> <ul> <li> <p>To use a
     * custom KMS key, choose the <code>SecureString</code> data type with the
     * <code>Key ID</code> parameter.</p> </li> </ul>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    PutParameterRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overwrite an existing parameter. The default value is <code>false</code>.</p>
     */
    inline bool GetOverwrite() const { return m_overwrite; }
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
    inline const Aws::String& GetAllowedPattern() const { return m_allowedPattern; }
    inline bool AllowedPatternHasBeenSet() const { return m_allowedPatternHasBeenSet; }
    template<typename AllowedPatternT = Aws::String>
    void SetAllowedPattern(AllowedPatternT&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::forward<AllowedPatternT>(value); }
    template<typename AllowedPatternT = Aws::String>
    PutParameterRequest& WithAllowedPattern(AllowedPatternT&& value) { SetAllowedPattern(std::forward<AllowedPatternT>(value)); return *this;}
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
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutParameterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutParameterRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    inline ParameterTier GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(ParameterTier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline PutParameterRequest& WithTier(ParameterTier value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more policies to apply to a parameter. This operation takes a JSON
     * array. Parameter Store, a tool in Amazon Web Services Systems Manager supports
     * the following policy types:</p> <p>Expiration: This policy deletes the parameter
     * after it expires. When you create the policy, you specify the expiration date.
     * You can update the expiration date and time by updating the policy. Updating the
     * <i>parameter</i> doesn't affect the expiration date and time. When the
     * expiration time is reached, Parameter Store deletes the parameter.</p>
     * <p>ExpirationNotification: This policy initiates an event in Amazon CloudWatch
     * Events that notifies you about the expiration. By using this policy, you can
     * receive notification before or after the expiration time is reached, in units of
     * days or hours.</p> <p>NoChangeNotification: This policy initiates a CloudWatch
     * Events event if a parameter hasn't been modified for a specified period of time.
     * This policy type is useful when, for example, a secret needs to be changed
     * within a period of time, but it hasn't been changed.</p> <p>All existing
     * policies are preserved until you send new policies or an empty policy. For more
     * information about parameter policies, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-policies.html">Assigning
     * parameter policies</a>. </p>
     */
    inline const Aws::String& GetPolicies() const { return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    template<typename PoliciesT = Aws::String>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = Aws::String>
    PutParameterRequest& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
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
    inline const Aws::String& GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = Aws::String>
    void SetDataType(DataTypeT&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::forward<DataTypeT>(value); }
    template<typename DataTypeT = Aws::String>
    PutParameterRequest& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ParameterType m_type{ParameterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    bool m_overwrite{false};
    bool m_overwriteHasBeenSet = false;

    Aws::String m_allowedPattern;
    bool m_allowedPatternHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ParameterTier m_tier{ParameterTier::NOT_SET};
    bool m_tierHasBeenSet = false;

    Aws::String m_policies;
    bool m_policiesHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
