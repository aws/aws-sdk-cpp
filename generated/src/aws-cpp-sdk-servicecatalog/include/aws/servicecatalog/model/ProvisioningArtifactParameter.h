/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ParameterConstraints.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a parameter used to provision a product.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactParameter">AWS
   * API Reference</a></p>
   */
  class ProvisioningArtifactParameter
  {
  public:
    AWS_SERVICECATALOG_API ProvisioningArtifactParameter();
    AWS_SERVICECATALOG_API ProvisioningArtifactParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifactParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameter key.</p>
     */
    inline const Aws::String& GetParameterKey() const{ return m_parameterKey; }
    inline bool ParameterKeyHasBeenSet() const { return m_parameterKeyHasBeenSet; }
    inline void SetParameterKey(const Aws::String& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = value; }
    inline void SetParameterKey(Aws::String&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = std::move(value); }
    inline void SetParameterKey(const char* value) { m_parameterKeyHasBeenSet = true; m_parameterKey.assign(value); }
    inline ProvisioningArtifactParameter& WithParameterKey(const Aws::String& value) { SetParameterKey(value); return *this;}
    inline ProvisioningArtifactParameter& WithParameterKey(Aws::String&& value) { SetParameterKey(std::move(value)); return *this;}
    inline ProvisioningArtifactParameter& WithParameterKey(const char* value) { SetParameterKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline ProvisioningArtifactParameter& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline ProvisioningArtifactParameter& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline ProvisioningArtifactParameter& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter type.</p>
     */
    inline const Aws::String& GetParameterType() const{ return m_parameterType; }
    inline bool ParameterTypeHasBeenSet() const { return m_parameterTypeHasBeenSet; }
    inline void SetParameterType(const Aws::String& value) { m_parameterTypeHasBeenSet = true; m_parameterType = value; }
    inline void SetParameterType(Aws::String&& value) { m_parameterTypeHasBeenSet = true; m_parameterType = std::move(value); }
    inline void SetParameterType(const char* value) { m_parameterTypeHasBeenSet = true; m_parameterType.assign(value); }
    inline ProvisioningArtifactParameter& WithParameterType(const Aws::String& value) { SetParameterType(value); return *this;}
    inline ProvisioningArtifactParameter& WithParameterType(Aws::String&& value) { SetParameterType(std::move(value)); return *this;}
    inline ProvisioningArtifactParameter& WithParameterType(const char* value) { SetParameterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this value is true, the value for this parameter is obfuscated from view
     * when the parameter is retrieved. This parameter is used to hide sensitive
     * information.</p>
     */
    inline bool GetIsNoEcho() const{ return m_isNoEcho; }
    inline bool IsNoEchoHasBeenSet() const { return m_isNoEchoHasBeenSet; }
    inline void SetIsNoEcho(bool value) { m_isNoEchoHasBeenSet = true; m_isNoEcho = value; }
    inline ProvisioningArtifactParameter& WithIsNoEcho(bool value) { SetIsNoEcho(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ProvisioningArtifactParameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ProvisioningArtifactParameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ProvisioningArtifactParameter& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Constraints that the administrator has put on a parameter.</p>
     */
    inline const ParameterConstraints& GetParameterConstraints() const{ return m_parameterConstraints; }
    inline bool ParameterConstraintsHasBeenSet() const { return m_parameterConstraintsHasBeenSet; }
    inline void SetParameterConstraints(const ParameterConstraints& value) { m_parameterConstraintsHasBeenSet = true; m_parameterConstraints = value; }
    inline void SetParameterConstraints(ParameterConstraints&& value) { m_parameterConstraintsHasBeenSet = true; m_parameterConstraints = std::move(value); }
    inline ProvisioningArtifactParameter& WithParameterConstraints(const ParameterConstraints& value) { SetParameterConstraints(value); return *this;}
    inline ProvisioningArtifactParameter& WithParameterConstraints(ParameterConstraints&& value) { SetParameterConstraints(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterKey;
    bool m_parameterKeyHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_parameterType;
    bool m_parameterTypeHasBeenSet = false;

    bool m_isNoEcho;
    bool m_isNoEchoHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ParameterConstraints m_parameterConstraints;
    bool m_parameterConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
