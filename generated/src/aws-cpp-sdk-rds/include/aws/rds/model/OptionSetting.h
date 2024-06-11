/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Option settings are the actual settings being applied or configured for that
   * option. It is used when you modify an option group or describe option groups.
   * For example, the NATIVE_NETWORK_ENCRYPTION option has a setting called
   * SQLNET.ENCRYPTION_SERVER that can have several different values.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionSetting">AWS
   * API Reference</a></p>
   */
  class OptionSetting
  {
  public:
    AWS_RDS_API OptionSetting();
    AWS_RDS_API OptionSetting(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionSetting& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the option that has settings that you can set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline OptionSetting& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline OptionSetting& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline OptionSetting& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value of the option setting.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline OptionSetting& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline OptionSetting& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline OptionSetting& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value of the option setting.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline OptionSetting& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline OptionSetting& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline OptionSetting& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the option setting.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline OptionSetting& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline OptionSetting& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline OptionSetting& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB engine specific parameter type.</p>
     */
    inline const Aws::String& GetApplyType() const{ return m_applyType; }
    inline bool ApplyTypeHasBeenSet() const { return m_applyTypeHasBeenSet; }
    inline void SetApplyType(const Aws::String& value) { m_applyTypeHasBeenSet = true; m_applyType = value; }
    inline void SetApplyType(Aws::String&& value) { m_applyTypeHasBeenSet = true; m_applyType = std::move(value); }
    inline void SetApplyType(const char* value) { m_applyTypeHasBeenSet = true; m_applyType.assign(value); }
    inline OptionSetting& WithApplyType(const Aws::String& value) { SetApplyType(value); return *this;}
    inline OptionSetting& WithApplyType(Aws::String&& value) { SetApplyType(std::move(value)); return *this;}
    inline OptionSetting& WithApplyType(const char* value) { SetApplyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the option setting.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }
    inline OptionSetting& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}
    inline OptionSetting& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}
    inline OptionSetting& WithDataType(const char* value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowed values of the option setting.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }
    inline OptionSetting& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}
    inline OptionSetting& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline OptionSetting& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the option setting can be modified from the default.</p>
     */
    inline bool GetIsModifiable() const{ return m_isModifiable; }
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }
    inline OptionSetting& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the option setting is part of a collection.</p>
     */
    inline bool GetIsCollection() const{ return m_isCollection; }
    inline bool IsCollectionHasBeenSet() const { return m_isCollectionHasBeenSet; }
    inline void SetIsCollection(bool value) { m_isCollectionHasBeenSet = true; m_isCollection = value; }
    inline OptionSetting& WithIsCollection(bool value) { SetIsCollection(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_applyType;
    bool m_applyTypeHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    bool m_isModifiable;
    bool m_isModifiableHasBeenSet = false;

    bool m_isCollection;
    bool m_isCollectionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
