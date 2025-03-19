/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/AppValidationStrategy.h>
#include <aws/sms/model/SSMValidationParameters.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Configuration for validating an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/AppValidationConfiguration">AWS
   * API Reference</a></p>
   */
  class AppValidationConfiguration
  {
  public:
    AWS_SMS_API AppValidationConfiguration() = default;
    AWS_SMS_API AppValidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API AppValidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the validation.</p>
     */
    inline const Aws::String& GetValidationId() const { return m_validationId; }
    inline bool ValidationIdHasBeenSet() const { return m_validationIdHasBeenSet; }
    template<typename ValidationIdT = Aws::String>
    void SetValidationId(ValidationIdT&& value) { m_validationIdHasBeenSet = true; m_validationId = std::forward<ValidationIdT>(value); }
    template<typename ValidationIdT = Aws::String>
    AppValidationConfiguration& WithValidationId(ValidationIdT&& value) { SetValidationId(std::forward<ValidationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AppValidationConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation strategy.</p>
     */
    inline AppValidationStrategy GetAppValidationStrategy() const { return m_appValidationStrategy; }
    inline bool AppValidationStrategyHasBeenSet() const { return m_appValidationStrategyHasBeenSet; }
    inline void SetAppValidationStrategy(AppValidationStrategy value) { m_appValidationStrategyHasBeenSet = true; m_appValidationStrategy = value; }
    inline AppValidationConfiguration& WithAppValidationStrategy(AppValidationStrategy value) { SetAppValidationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation parameters.</p>
     */
    inline const SSMValidationParameters& GetSsmValidationParameters() const { return m_ssmValidationParameters; }
    inline bool SsmValidationParametersHasBeenSet() const { return m_ssmValidationParametersHasBeenSet; }
    template<typename SsmValidationParametersT = SSMValidationParameters>
    void SetSsmValidationParameters(SsmValidationParametersT&& value) { m_ssmValidationParametersHasBeenSet = true; m_ssmValidationParameters = std::forward<SsmValidationParametersT>(value); }
    template<typename SsmValidationParametersT = SSMValidationParameters>
    AppValidationConfiguration& WithSsmValidationParameters(SsmValidationParametersT&& value) { SetSsmValidationParameters(std::forward<SsmValidationParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_validationId;
    bool m_validationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AppValidationStrategy m_appValidationStrategy{AppValidationStrategy::NOT_SET};
    bool m_appValidationStrategyHasBeenSet = false;

    SSMValidationParameters m_ssmValidationParameters;
    bool m_ssmValidationParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
