/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/ParameterTier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ParameterInlinePolicy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Metadata includes information like the ARN of the last user and the date/time
   * the parameter was last used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ParameterMetadata">AWS
   * API Reference</a></p>
   */
  class ParameterMetadata
  {
  public:
    AWS_SSM_API ParameterMetadata();
    AWS_SSM_API ParameterMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ParameterMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameter name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The parameter name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The parameter name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The parameter name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The parameter name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The parameter name.</p>
     */
    inline ParameterMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The parameter name.</p>
     */
    inline ParameterMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The parameter name.</p>
     */
    inline ParameterMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of parameter. Valid parameter types include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     */
    inline const ParameterType& GetType() const{ return m_type; }

    /**
     * <p>The type of parameter. Valid parameter types include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of parameter. Valid parameter types include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     */
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of parameter. Valid parameter types include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     */
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of parameter. Valid parameter types include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     */
    inline ParameterMetadata& WithType(const ParameterType& value) { SetType(value); return *this;}

    /**
     * <p>The type of parameter. Valid parameter types include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     */
    inline ParameterMetadata& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline ParameterMetadata& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline ParameterMetadata& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the query key used for this parameter.</p>
     */
    inline ParameterMetadata& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline ParameterMetadata& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline ParameterMetadata& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services user who last changed
     * the parameter.</p>
     */
    inline const Aws::String& GetLastModifiedUser() const{ return m_lastModifiedUser; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services user who last changed
     * the parameter.</p>
     */
    inline bool LastModifiedUserHasBeenSet() const { return m_lastModifiedUserHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services user who last changed
     * the parameter.</p>
     */
    inline void SetLastModifiedUser(const Aws::String& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services user who last changed
     * the parameter.</p>
     */
    inline void SetLastModifiedUser(Aws::String&& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services user who last changed
     * the parameter.</p>
     */
    inline void SetLastModifiedUser(const char* value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services user who last changed
     * the parameter.</p>
     */
    inline ParameterMetadata& WithLastModifiedUser(const Aws::String& value) { SetLastModifiedUser(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services user who last changed
     * the parameter.</p>
     */
    inline ParameterMetadata& WithLastModifiedUser(Aws::String&& value) { SetLastModifiedUser(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services user who last changed
     * the parameter.</p>
     */
    inline ParameterMetadata& WithLastModifiedUser(const char* value) { SetLastModifiedUser(value); return *this;}


    /**
     * <p>Description of the parameter actions.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline ParameterMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline ParameterMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the parameter actions.</p>
     */
    inline ParameterMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A parameter name can include only the following letters and symbols.</p>
     * <p>a-zA-Z0-9_.-</p>
     */
    inline const Aws::String& GetAllowedPattern() const{ return m_allowedPattern; }

    /**
     * <p>A parameter name can include only the following letters and symbols.</p>
     * <p>a-zA-Z0-9_.-</p>
     */
    inline bool AllowedPatternHasBeenSet() const { return m_allowedPatternHasBeenSet; }

    /**
     * <p>A parameter name can include only the following letters and symbols.</p>
     * <p>a-zA-Z0-9_.-</p>
     */
    inline void SetAllowedPattern(const Aws::String& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = value; }

    /**
     * <p>A parameter name can include only the following letters and symbols.</p>
     * <p>a-zA-Z0-9_.-</p>
     */
    inline void SetAllowedPattern(Aws::String&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::move(value); }

    /**
     * <p>A parameter name can include only the following letters and symbols.</p>
     * <p>a-zA-Z0-9_.-</p>
     */
    inline void SetAllowedPattern(const char* value) { m_allowedPatternHasBeenSet = true; m_allowedPattern.assign(value); }

    /**
     * <p>A parameter name can include only the following letters and symbols.</p>
     * <p>a-zA-Z0-9_.-</p>
     */
    inline ParameterMetadata& WithAllowedPattern(const Aws::String& value) { SetAllowedPattern(value); return *this;}

    /**
     * <p>A parameter name can include only the following letters and symbols.</p>
     * <p>a-zA-Z0-9_.-</p>
     */
    inline ParameterMetadata& WithAllowedPattern(Aws::String&& value) { SetAllowedPattern(std::move(value)); return *this;}

    /**
     * <p>A parameter name can include only the following letters and symbols.</p>
     * <p>a-zA-Z0-9_.-</p>
     */
    inline ParameterMetadata& WithAllowedPattern(const char* value) { SetAllowedPattern(value); return *this;}


    /**
     * <p>The parameter version.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The parameter version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The parameter version.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The parameter version.</p>
     */
    inline ParameterMetadata& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The parameter tier.</p>
     */
    inline const ParameterTier& GetTier() const{ return m_tier; }

    /**
     * <p>The parameter tier.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The parameter tier.</p>
     */
    inline void SetTier(const ParameterTier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The parameter tier.</p>
     */
    inline void SetTier(ParameterTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The parameter tier.</p>
     */
    inline ParameterMetadata& WithTier(const ParameterTier& value) { SetTier(value); return *this;}

    /**
     * <p>The parameter tier.</p>
     */
    inline ParameterMetadata& WithTier(ParameterTier&& value) { SetTier(std::move(value)); return *this;}


    /**
     * <p>A list of policies associated with a parameter.</p>
     */
    inline const Aws::Vector<ParameterInlinePolicy>& GetPolicies() const{ return m_policies; }

    /**
     * <p>A list of policies associated with a parameter.</p>
     */
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }

    /**
     * <p>A list of policies associated with a parameter.</p>
     */
    inline void SetPolicies(const Aws::Vector<ParameterInlinePolicy>& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>A list of policies associated with a parameter.</p>
     */
    inline void SetPolicies(Aws::Vector<ParameterInlinePolicy>&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }

    /**
     * <p>A list of policies associated with a parameter.</p>
     */
    inline ParameterMetadata& WithPolicies(const Aws::Vector<ParameterInlinePolicy>& value) { SetPolicies(value); return *this;}

    /**
     * <p>A list of policies associated with a parameter.</p>
     */
    inline ParameterMetadata& WithPolicies(Aws::Vector<ParameterInlinePolicy>&& value) { SetPolicies(std::move(value)); return *this;}

    /**
     * <p>A list of policies associated with a parameter.</p>
     */
    inline ParameterMetadata& AddPolicies(const ParameterInlinePolicy& value) { m_policiesHasBeenSet = true; m_policies.push_back(value); return *this; }

    /**
     * <p>A list of policies associated with a parameter.</p>
     */
    inline ParameterMetadata& AddPolicies(ParameterInlinePolicy&& value) { m_policiesHasBeenSet = true; m_policies.push_back(std::move(value)); return *this; }


    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline ParameterMetadata& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline ParameterMetadata& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}

    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline ParameterMetadata& WithDataType(const char* value) { SetDataType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ParameterType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_lastModifiedUser;
    bool m_lastModifiedUserHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_allowedPattern;
    bool m_allowedPatternHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;

    ParameterTier m_tier;
    bool m_tierHasBeenSet = false;

    Aws::Vector<ParameterInlinePolicy> m_policies;
    bool m_policiesHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
