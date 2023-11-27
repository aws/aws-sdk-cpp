/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ConfigurationOptions.h>
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
   * <p> An object that describes a security control parameter and the options for
   * customizing it. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ParameterDefinition">AWS
   * API Reference</a></p>
   */
  class ParameterDefinition
  {
  public:
    AWS_SECURITYHUB_API ParameterDefinition();
    AWS_SECURITYHUB_API ParameterDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ParameterDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Description of a control parameter. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> Description of a control parameter. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> Description of a control parameter. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> Description of a control parameter. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> Description of a control parameter. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> Description of a control parameter. </p>
     */
    inline ParameterDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> Description of a control parameter. </p>
     */
    inline ParameterDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> Description of a control parameter. </p>
     */
    inline ParameterDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The options for customizing a control parameter. Customization options vary
     * based on the data type of the parameter. </p>
     */
    inline const ConfigurationOptions& GetConfigurationOptions() const{ return m_configurationOptions; }

    /**
     * <p> The options for customizing a control parameter. Customization options vary
     * based on the data type of the parameter. </p>
     */
    inline bool ConfigurationOptionsHasBeenSet() const { return m_configurationOptionsHasBeenSet; }

    /**
     * <p> The options for customizing a control parameter. Customization options vary
     * based on the data type of the parameter. </p>
     */
    inline void SetConfigurationOptions(const ConfigurationOptions& value) { m_configurationOptionsHasBeenSet = true; m_configurationOptions = value; }

    /**
     * <p> The options for customizing a control parameter. Customization options vary
     * based on the data type of the parameter. </p>
     */
    inline void SetConfigurationOptions(ConfigurationOptions&& value) { m_configurationOptionsHasBeenSet = true; m_configurationOptions = std::move(value); }

    /**
     * <p> The options for customizing a control parameter. Customization options vary
     * based on the data type of the parameter. </p>
     */
    inline ParameterDefinition& WithConfigurationOptions(const ConfigurationOptions& value) { SetConfigurationOptions(value); return *this;}

    /**
     * <p> The options for customizing a control parameter. Customization options vary
     * based on the data type of the parameter. </p>
     */
    inline ParameterDefinition& WithConfigurationOptions(ConfigurationOptions&& value) { SetConfigurationOptions(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConfigurationOptions m_configurationOptions;
    bool m_configurationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
