/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ParameterTier.h>
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
   * <p>Information about parameter usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ParameterHistory">AWS
   * API Reference</a></p>
   */
  class ParameterHistory
  {
  public:
    AWS_SSM_API ParameterHistory();
    AWS_SSM_API ParameterHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ParameterHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ParameterHistory& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ParameterHistory& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ParameterHistory& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of parameter used.</p>
     */
    inline const ParameterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ParameterHistory& WithType(const ParameterType& value) { SetType(value); return *this;}
    inline ParameterHistory& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the Key Management Service (KMS) key used to encrypt the
     * parameter. Applies to <code>SecureString</code> parameters only</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }
    inline ParameterHistory& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline ParameterHistory& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline ParameterHistory& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date the parameter was last changed or updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline ParameterHistory& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline ParameterHistory& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Web Services user who last changed
     * the parameter.</p>
     */
    inline const Aws::String& GetLastModifiedUser() const{ return m_lastModifiedUser; }
    inline bool LastModifiedUserHasBeenSet() const { return m_lastModifiedUserHasBeenSet; }
    inline void SetLastModifiedUser(const Aws::String& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = value; }
    inline void SetLastModifiedUser(Aws::String&& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = std::move(value); }
    inline void SetLastModifiedUser(const char* value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser.assign(value); }
    inline ParameterHistory& WithLastModifiedUser(const Aws::String& value) { SetLastModifiedUser(value); return *this;}
    inline ParameterHistory& WithLastModifiedUser(Aws::String&& value) { SetLastModifiedUser(std::move(value)); return *this;}
    inline ParameterHistory& WithLastModifiedUser(const char* value) { SetLastModifiedUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ParameterHistory& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ParameterHistory& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ParameterHistory& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ParameterHistory& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ParameterHistory& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ParameterHistory& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter names can include the following letters and symbols.</p>
     * <p>a-zA-Z0-9_.-</p>
     */
    inline const Aws::String& GetAllowedPattern() const{ return m_allowedPattern; }
    inline bool AllowedPatternHasBeenSet() const { return m_allowedPatternHasBeenSet; }
    inline void SetAllowedPattern(const Aws::String& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = value; }
    inline void SetAllowedPattern(Aws::String&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::move(value); }
    inline void SetAllowedPattern(const char* value) { m_allowedPatternHasBeenSet = true; m_allowedPattern.assign(value); }
    inline ParameterHistory& WithAllowedPattern(const Aws::String& value) { SetAllowedPattern(value); return *this;}
    inline ParameterHistory& WithAllowedPattern(Aws::String&& value) { SetAllowedPattern(std::move(value)); return *this;}
    inline ParameterHistory& WithAllowedPattern(const char* value) { SetAllowedPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter version.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline ParameterHistory& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Labels assigned to the parameter version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }
    inline ParameterHistory& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}
    inline ParameterHistory& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}
    inline ParameterHistory& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }
    inline ParameterHistory& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }
    inline ParameterHistory& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameter tier.</p>
     */
    inline const ParameterTier& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const ParameterTier& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(ParameterTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline ParameterHistory& WithTier(const ParameterTier& value) { SetTier(value); return *this;}
    inline ParameterHistory& WithTier(ParameterTier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the policies assigned to a parameter.</p> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-store-policies.html">Assigning
     * parameter policies</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<ParameterInlinePolicy>& GetPolicies() const{ return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    inline void SetPolicies(const Aws::Vector<ParameterInlinePolicy>& value) { m_policiesHasBeenSet = true; m_policies = value; }
    inline void SetPolicies(Aws::Vector<ParameterInlinePolicy>&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }
    inline ParameterHistory& WithPolicies(const Aws::Vector<ParameterInlinePolicy>& value) { SetPolicies(value); return *this;}
    inline ParameterHistory& WithPolicies(Aws::Vector<ParameterInlinePolicy>&& value) { SetPolicies(std::move(value)); return *this;}
    inline ParameterHistory& AddPolicies(const ParameterInlinePolicy& value) { m_policiesHasBeenSet = true; m_policies.push_back(value); return *this; }
    inline ParameterHistory& AddPolicies(ParameterInlinePolicy&& value) { m_policiesHasBeenSet = true; m_policies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }
    inline ParameterHistory& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}
    inline ParameterHistory& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}
    inline ParameterHistory& WithDataType(const char* value) { SetDataType(value); return *this;}
    ///@}
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

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_allowedPattern;
    bool m_allowedPatternHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

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
