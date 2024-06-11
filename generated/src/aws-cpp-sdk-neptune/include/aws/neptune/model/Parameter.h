﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune/model/ApplyMethod.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Specifies a parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/Parameter">AWS
   * API Reference</a></p>
   */
  class Parameter
  {
  public:
    AWS_NEPTUNE_API Parameter();
    AWS_NEPTUNE_API Parameter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API Parameter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }
    inline Parameter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}
    inline Parameter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}
    inline Parameter& WithParameterName(const char* value) { SetParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the value of the parameter.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }
    inline Parameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}
    inline Parameter& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}
    inline Parameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Parameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Parameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Parameter& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the source of the parameter value.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline Parameter& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline Parameter& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline Parameter& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the engine specific parameters type.</p>
     */
    inline const Aws::String& GetApplyType() const{ return m_applyType; }
    inline bool ApplyTypeHasBeenSet() const { return m_applyTypeHasBeenSet; }
    inline void SetApplyType(const Aws::String& value) { m_applyTypeHasBeenSet = true; m_applyType = value; }
    inline void SetApplyType(Aws::String&& value) { m_applyTypeHasBeenSet = true; m_applyType = std::move(value); }
    inline void SetApplyType(const char* value) { m_applyTypeHasBeenSet = true; m_applyType.assign(value); }
    inline Parameter& WithApplyType(const Aws::String& value) { SetApplyType(value); return *this;}
    inline Parameter& WithApplyType(Aws::String&& value) { SetApplyType(std::move(value)); return *this;}
    inline Parameter& WithApplyType(const char* value) { SetApplyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the valid data type for the parameter.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }
    inline Parameter& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}
    inline Parameter& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}
    inline Parameter& WithDataType(const char* value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the valid range of values for the parameter.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }
    inline Parameter& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}
    inline Parameter& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline Parameter& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether (<code>true</code>) or not (<code>false</code>) the
     * parameter can be modified. Some parameters have security or operational
     * implications that prevent them from being changed.</p>
     */
    inline bool GetIsModifiable() const{ return m_isModifiable; }
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }
    inline Parameter& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = value; }
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::move(value); }
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion.assign(value); }
    inline Parameter& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}
    inline Parameter& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}
    inline Parameter& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when to apply parameter updates.</p>
     */
    inline const ApplyMethod& GetApplyMethod() const{ return m_applyMethod; }
    inline bool ApplyMethodHasBeenSet() const { return m_applyMethodHasBeenSet; }
    inline void SetApplyMethod(const ApplyMethod& value) { m_applyMethodHasBeenSet = true; m_applyMethod = value; }
    inline void SetApplyMethod(ApplyMethod&& value) { m_applyMethodHasBeenSet = true; m_applyMethod = std::move(value); }
    inline Parameter& WithApplyMethod(const ApplyMethod& value) { SetApplyMethod(value); return *this;}
    inline Parameter& WithApplyMethod(ApplyMethod&& value) { SetApplyMethod(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_applyType;
    bool m_applyTypeHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    bool m_isModifiable;
    bool m_isModifiableHasBeenSet = false;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet = false;

    ApplyMethod m_applyMethod;
    bool m_applyMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
