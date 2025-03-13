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
    AWS_SERVICECATALOG_API ProvisioningArtifactParameter() = default;
    AWS_SERVICECATALOG_API ProvisioningArtifactParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifactParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameter key.</p>
     */
    inline const Aws::String& GetParameterKey() const { return m_parameterKey; }
    inline bool ParameterKeyHasBeenSet() const { return m_parameterKeyHasBeenSet; }
    template<typename ParameterKeyT = Aws::String>
    void SetParameterKey(ParameterKeyT&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = std::forward<ParameterKeyT>(value); }
    template<typename ParameterKeyT = Aws::String>
    ProvisioningArtifactParameter& WithParameterKey(ParameterKeyT&& value) { SetParameterKey(std::forward<ParameterKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    ProvisioningArtifactParameter& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter type.</p>
     */
    inline const Aws::String& GetParameterType() const { return m_parameterType; }
    inline bool ParameterTypeHasBeenSet() const { return m_parameterTypeHasBeenSet; }
    template<typename ParameterTypeT = Aws::String>
    void SetParameterType(ParameterTypeT&& value) { m_parameterTypeHasBeenSet = true; m_parameterType = std::forward<ParameterTypeT>(value); }
    template<typename ParameterTypeT = Aws::String>
    ProvisioningArtifactParameter& WithParameterType(ParameterTypeT&& value) { SetParameterType(std::forward<ParameterTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this value is true, the value for this parameter is obfuscated from view
     * when the parameter is retrieved. This parameter is used to hide sensitive
     * information.</p>
     */
    inline bool GetIsNoEcho() const { return m_isNoEcho; }
    inline bool IsNoEchoHasBeenSet() const { return m_isNoEchoHasBeenSet; }
    inline void SetIsNoEcho(bool value) { m_isNoEchoHasBeenSet = true; m_isNoEcho = value; }
    inline ProvisioningArtifactParameter& WithIsNoEcho(bool value) { SetIsNoEcho(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ProvisioningArtifactParameter& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Constraints that the administrator has put on a parameter.</p>
     */
    inline const ParameterConstraints& GetParameterConstraints() const { return m_parameterConstraints; }
    inline bool ParameterConstraintsHasBeenSet() const { return m_parameterConstraintsHasBeenSet; }
    template<typename ParameterConstraintsT = ParameterConstraints>
    void SetParameterConstraints(ParameterConstraintsT&& value) { m_parameterConstraintsHasBeenSet = true; m_parameterConstraints = std::forward<ParameterConstraintsT>(value); }
    template<typename ParameterConstraintsT = ParameterConstraints>
    ProvisioningArtifactParameter& WithParameterConstraints(ParameterConstraintsT&& value) { SetParameterConstraints(std::forward<ParameterConstraintsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterKey;
    bool m_parameterKeyHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_parameterType;
    bool m_parameterTypeHasBeenSet = false;

    bool m_isNoEcho{false};
    bool m_isNoEchoHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ParameterConstraints m_parameterConstraints;
    bool m_parameterConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
