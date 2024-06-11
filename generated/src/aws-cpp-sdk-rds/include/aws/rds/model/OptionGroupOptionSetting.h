/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/MinimumEngineVersionPerAllowedValue.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Option group option settings are used to display settings available for each
   * option with their default values and other information. These values are used
   * with the DescribeOptionGroupOptions action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionGroupOptionSetting">AWS
   * API Reference</a></p>
   */
  class OptionGroupOptionSetting
  {
  public:
    AWS_RDS_API OptionGroupOptionSetting();
    AWS_RDS_API OptionGroupOptionSetting(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionGroupOptionSetting& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the option group option.</p>
     */
    inline const Aws::String& GetSettingName() const{ return m_settingName; }
    inline bool SettingNameHasBeenSet() const { return m_settingNameHasBeenSet; }
    inline void SetSettingName(const Aws::String& value) { m_settingNameHasBeenSet = true; m_settingName = value; }
    inline void SetSettingName(Aws::String&& value) { m_settingNameHasBeenSet = true; m_settingName = std::move(value); }
    inline void SetSettingName(const char* value) { m_settingNameHasBeenSet = true; m_settingName.assign(value); }
    inline OptionGroupOptionSetting& WithSettingName(const Aws::String& value) { SetSettingName(value); return *this;}
    inline OptionGroupOptionSetting& WithSettingName(Aws::String&& value) { SetSettingName(std::move(value)); return *this;}
    inline OptionGroupOptionSetting& WithSettingName(const char* value) { SetSettingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the option group option.</p>
     */
    inline const Aws::String& GetSettingDescription() const{ return m_settingDescription; }
    inline bool SettingDescriptionHasBeenSet() const { return m_settingDescriptionHasBeenSet; }
    inline void SetSettingDescription(const Aws::String& value) { m_settingDescriptionHasBeenSet = true; m_settingDescription = value; }
    inline void SetSettingDescription(Aws::String&& value) { m_settingDescriptionHasBeenSet = true; m_settingDescription = std::move(value); }
    inline void SetSettingDescription(const char* value) { m_settingDescriptionHasBeenSet = true; m_settingDescription.assign(value); }
    inline OptionGroupOptionSetting& WithSettingDescription(const Aws::String& value) { SetSettingDescription(value); return *this;}
    inline OptionGroupOptionSetting& WithSettingDescription(Aws::String&& value) { SetSettingDescription(std::move(value)); return *this;}
    inline OptionGroupOptionSetting& WithSettingDescription(const char* value) { SetSettingDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value for the option group option.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline OptionGroupOptionSetting& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline OptionGroupOptionSetting& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline OptionGroupOptionSetting& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB engine specific parameter type for the option group option.</p>
     */
    inline const Aws::String& GetApplyType() const{ return m_applyType; }
    inline bool ApplyTypeHasBeenSet() const { return m_applyTypeHasBeenSet; }
    inline void SetApplyType(const Aws::String& value) { m_applyTypeHasBeenSet = true; m_applyType = value; }
    inline void SetApplyType(Aws::String&& value) { m_applyTypeHasBeenSet = true; m_applyType = std::move(value); }
    inline void SetApplyType(const char* value) { m_applyTypeHasBeenSet = true; m_applyType.assign(value); }
    inline OptionGroupOptionSetting& WithApplyType(const Aws::String& value) { SetApplyType(value); return *this;}
    inline OptionGroupOptionSetting& WithApplyType(Aws::String&& value) { SetApplyType(std::move(value)); return *this;}
    inline OptionGroupOptionSetting& WithApplyType(const char* value) { SetApplyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the acceptable values for the option group option.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }
    inline OptionGroupOptionSetting& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}
    inline OptionGroupOptionSetting& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline OptionGroupOptionSetting& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this option group option can be changed from the default
     * value.</p>
     */
    inline bool GetIsModifiable() const{ return m_isModifiable; }
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }
    inline OptionGroupOptionSetting& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a value must be specified for this option setting of the
     * option group option.</p>
     */
    inline bool GetIsRequired() const{ return m_isRequired; }
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }
    inline OptionGroupOptionSetting& WithIsRequired(bool value) { SetIsRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum DB engine version required for the corresponding allowed value
     * for this option setting.</p>
     */
    inline const Aws::Vector<MinimumEngineVersionPerAllowedValue>& GetMinimumEngineVersionPerAllowedValue() const{ return m_minimumEngineVersionPerAllowedValue; }
    inline bool MinimumEngineVersionPerAllowedValueHasBeenSet() const { return m_minimumEngineVersionPerAllowedValueHasBeenSet; }
    inline void SetMinimumEngineVersionPerAllowedValue(const Aws::Vector<MinimumEngineVersionPerAllowedValue>& value) { m_minimumEngineVersionPerAllowedValueHasBeenSet = true; m_minimumEngineVersionPerAllowedValue = value; }
    inline void SetMinimumEngineVersionPerAllowedValue(Aws::Vector<MinimumEngineVersionPerAllowedValue>&& value) { m_minimumEngineVersionPerAllowedValueHasBeenSet = true; m_minimumEngineVersionPerAllowedValue = std::move(value); }
    inline OptionGroupOptionSetting& WithMinimumEngineVersionPerAllowedValue(const Aws::Vector<MinimumEngineVersionPerAllowedValue>& value) { SetMinimumEngineVersionPerAllowedValue(value); return *this;}
    inline OptionGroupOptionSetting& WithMinimumEngineVersionPerAllowedValue(Aws::Vector<MinimumEngineVersionPerAllowedValue>&& value) { SetMinimumEngineVersionPerAllowedValue(std::move(value)); return *this;}
    inline OptionGroupOptionSetting& AddMinimumEngineVersionPerAllowedValue(const MinimumEngineVersionPerAllowedValue& value) { m_minimumEngineVersionPerAllowedValueHasBeenSet = true; m_minimumEngineVersionPerAllowedValue.push_back(value); return *this; }
    inline OptionGroupOptionSetting& AddMinimumEngineVersionPerAllowedValue(MinimumEngineVersionPerAllowedValue&& value) { m_minimumEngineVersionPerAllowedValueHasBeenSet = true; m_minimumEngineVersionPerAllowedValue.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_settingName;
    bool m_settingNameHasBeenSet = false;

    Aws::String m_settingDescription;
    bool m_settingDescriptionHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_applyType;
    bool m_applyTypeHasBeenSet = false;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    bool m_isModifiable;
    bool m_isModifiableHasBeenSet = false;

    bool m_isRequired;
    bool m_isRequiredHasBeenSet = false;

    Aws::Vector<MinimumEngineVersionPerAllowedValue> m_minimumEngineVersionPerAllowedValue;
    bool m_minimumEngineVersionPerAllowedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
