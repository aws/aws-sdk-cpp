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
    AWS_RDS_API OptionGroupOptionSetting() = default;
    AWS_RDS_API OptionGroupOptionSetting(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionGroupOptionSetting& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the option group option.</p>
     */
    inline const Aws::String& GetSettingName() const { return m_settingName; }
    inline bool SettingNameHasBeenSet() const { return m_settingNameHasBeenSet; }
    template<typename SettingNameT = Aws::String>
    void SetSettingName(SettingNameT&& value) { m_settingNameHasBeenSet = true; m_settingName = std::forward<SettingNameT>(value); }
    template<typename SettingNameT = Aws::String>
    OptionGroupOptionSetting& WithSettingName(SettingNameT&& value) { SetSettingName(std::forward<SettingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the option group option.</p>
     */
    inline const Aws::String& GetSettingDescription() const { return m_settingDescription; }
    inline bool SettingDescriptionHasBeenSet() const { return m_settingDescriptionHasBeenSet; }
    template<typename SettingDescriptionT = Aws::String>
    void SetSettingDescription(SettingDescriptionT&& value) { m_settingDescriptionHasBeenSet = true; m_settingDescription = std::forward<SettingDescriptionT>(value); }
    template<typename SettingDescriptionT = Aws::String>
    OptionGroupOptionSetting& WithSettingDescription(SettingDescriptionT&& value) { SetSettingDescription(std::forward<SettingDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value for the option group option.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    OptionGroupOptionSetting& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB engine specific parameter type for the option group option.</p>
     */
    inline const Aws::String& GetApplyType() const { return m_applyType; }
    inline bool ApplyTypeHasBeenSet() const { return m_applyTypeHasBeenSet; }
    template<typename ApplyTypeT = Aws::String>
    void SetApplyType(ApplyTypeT&& value) { m_applyTypeHasBeenSet = true; m_applyType = std::forward<ApplyTypeT>(value); }
    template<typename ApplyTypeT = Aws::String>
    OptionGroupOptionSetting& WithApplyType(ApplyTypeT&& value) { SetApplyType(std::forward<ApplyTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the acceptable values for the option group option.</p>
     */
    inline const Aws::String& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::String>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::String>
    OptionGroupOptionSetting& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this option group option can be changed from the default
     * value.</p>
     */
    inline bool GetIsModifiable() const { return m_isModifiable; }
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }
    inline OptionGroupOptionSetting& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a value must be specified for this option setting of the
     * option group option.</p>
     */
    inline bool GetIsRequired() const { return m_isRequired; }
    inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }
    inline void SetIsRequired(bool value) { m_isRequiredHasBeenSet = true; m_isRequired = value; }
    inline OptionGroupOptionSetting& WithIsRequired(bool value) { SetIsRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum DB engine version required for the corresponding allowed value
     * for this option setting.</p>
     */
    inline const Aws::Vector<MinimumEngineVersionPerAllowedValue>& GetMinimumEngineVersionPerAllowedValue() const { return m_minimumEngineVersionPerAllowedValue; }
    inline bool MinimumEngineVersionPerAllowedValueHasBeenSet() const { return m_minimumEngineVersionPerAllowedValueHasBeenSet; }
    template<typename MinimumEngineVersionPerAllowedValueT = Aws::Vector<MinimumEngineVersionPerAllowedValue>>
    void SetMinimumEngineVersionPerAllowedValue(MinimumEngineVersionPerAllowedValueT&& value) { m_minimumEngineVersionPerAllowedValueHasBeenSet = true; m_minimumEngineVersionPerAllowedValue = std::forward<MinimumEngineVersionPerAllowedValueT>(value); }
    template<typename MinimumEngineVersionPerAllowedValueT = Aws::Vector<MinimumEngineVersionPerAllowedValue>>
    OptionGroupOptionSetting& WithMinimumEngineVersionPerAllowedValue(MinimumEngineVersionPerAllowedValueT&& value) { SetMinimumEngineVersionPerAllowedValue(std::forward<MinimumEngineVersionPerAllowedValueT>(value)); return *this;}
    template<typename MinimumEngineVersionPerAllowedValueT = MinimumEngineVersionPerAllowedValue>
    OptionGroupOptionSetting& AddMinimumEngineVersionPerAllowedValue(MinimumEngineVersionPerAllowedValueT&& value) { m_minimumEngineVersionPerAllowedValueHasBeenSet = true; m_minimumEngineVersionPerAllowedValue.emplace_back(std::forward<MinimumEngineVersionPerAllowedValueT>(value)); return *this; }
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

    bool m_isModifiable{false};
    bool m_isModifiableHasBeenSet = false;

    bool m_isRequired{false};
    bool m_isRequiredHasBeenSet = false;

    Aws::Vector<MinimumEngineVersionPerAllowedValue> m_minimumEngineVersionPerAllowedValue;
    bool m_minimumEngineVersionPerAllowedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
