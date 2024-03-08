/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/ParameterConfiguration.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> A list of security controls and control parameter values that are included
   * in a configuration policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SecurityControlCustomParameter">AWS
   * API Reference</a></p>
   */
  class SecurityControlCustomParameter
  {
  public:
    AWS_SECURITYHUB_API SecurityControlCustomParameter();
    AWS_SECURITYHUB_API SecurityControlCustomParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SecurityControlCustomParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the security control. </p>
     */
    inline const Aws::String& GetSecurityControlId() const{ return m_securityControlId; }

    /**
     * <p> The ID of the security control. </p>
     */
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }

    /**
     * <p> The ID of the security control. </p>
     */
    inline void SetSecurityControlId(const Aws::String& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = value; }

    /**
     * <p> The ID of the security control. </p>
     */
    inline void SetSecurityControlId(Aws::String&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::move(value); }

    /**
     * <p> The ID of the security control. </p>
     */
    inline void SetSecurityControlId(const char* value) { m_securityControlIdHasBeenSet = true; m_securityControlId.assign(value); }

    /**
     * <p> The ID of the security control. </p>
     */
    inline SecurityControlCustomParameter& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}

    /**
     * <p> The ID of the security control. </p>
     */
    inline SecurityControlCustomParameter& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}

    /**
     * <p> The ID of the security control. </p>
     */
    inline SecurityControlCustomParameter& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}


    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline const Aws::Map<Aws::String, ParameterConfiguration>& GetParameters() const{ return m_parameters; }

    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, ParameterConfiguration>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline void SetParameters(Aws::Map<Aws::String, ParameterConfiguration>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline SecurityControlCustomParameter& WithParameters(const Aws::Map<Aws::String, ParameterConfiguration>& value) { SetParameters(value); return *this;}

    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline SecurityControlCustomParameter& WithParameters(Aws::Map<Aws::String, ParameterConfiguration>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline SecurityControlCustomParameter& AddParameters(const Aws::String& key, const ParameterConfiguration& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline SecurityControlCustomParameter& AddParameters(Aws::String&& key, const ParameterConfiguration& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline SecurityControlCustomParameter& AddParameters(const Aws::String& key, ParameterConfiguration&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline SecurityControlCustomParameter& AddParameters(Aws::String&& key, ParameterConfiguration&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline SecurityControlCustomParameter& AddParameters(const char* key, ParameterConfiguration&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p> An object that specifies parameter values for a control in a configuration
     * policy. </p>
     */
    inline SecurityControlCustomParameter& AddParameters(const char* key, const ParameterConfiguration& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    Aws::Map<Aws::String, ParameterConfiguration> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
