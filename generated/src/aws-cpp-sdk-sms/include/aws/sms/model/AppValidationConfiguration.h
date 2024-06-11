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
    AWS_SMS_API AppValidationConfiguration();
    AWS_SMS_API AppValidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API AppValidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the validation.</p>
     */
    inline const Aws::String& GetValidationId() const{ return m_validationId; }
    inline bool ValidationIdHasBeenSet() const { return m_validationIdHasBeenSet; }
    inline void SetValidationId(const Aws::String& value) { m_validationIdHasBeenSet = true; m_validationId = value; }
    inline void SetValidationId(Aws::String&& value) { m_validationIdHasBeenSet = true; m_validationId = std::move(value); }
    inline void SetValidationId(const char* value) { m_validationIdHasBeenSet = true; m_validationId.assign(value); }
    inline AppValidationConfiguration& WithValidationId(const Aws::String& value) { SetValidationId(value); return *this;}
    inline AppValidationConfiguration& WithValidationId(Aws::String&& value) { SetValidationId(std::move(value)); return *this;}
    inline AppValidationConfiguration& WithValidationId(const char* value) { SetValidationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AppValidationConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AppValidationConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AppValidationConfiguration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation strategy.</p>
     */
    inline const AppValidationStrategy& GetAppValidationStrategy() const{ return m_appValidationStrategy; }
    inline bool AppValidationStrategyHasBeenSet() const { return m_appValidationStrategyHasBeenSet; }
    inline void SetAppValidationStrategy(const AppValidationStrategy& value) { m_appValidationStrategyHasBeenSet = true; m_appValidationStrategy = value; }
    inline void SetAppValidationStrategy(AppValidationStrategy&& value) { m_appValidationStrategyHasBeenSet = true; m_appValidationStrategy = std::move(value); }
    inline AppValidationConfiguration& WithAppValidationStrategy(const AppValidationStrategy& value) { SetAppValidationStrategy(value); return *this;}
    inline AppValidationConfiguration& WithAppValidationStrategy(AppValidationStrategy&& value) { SetAppValidationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation parameters.</p>
     */
    inline const SSMValidationParameters& GetSsmValidationParameters() const{ return m_ssmValidationParameters; }
    inline bool SsmValidationParametersHasBeenSet() const { return m_ssmValidationParametersHasBeenSet; }
    inline void SetSsmValidationParameters(const SSMValidationParameters& value) { m_ssmValidationParametersHasBeenSet = true; m_ssmValidationParameters = value; }
    inline void SetSsmValidationParameters(SSMValidationParameters&& value) { m_ssmValidationParametersHasBeenSet = true; m_ssmValidationParameters = std::move(value); }
    inline AppValidationConfiguration& WithSsmValidationParameters(const SSMValidationParameters& value) { SetSsmValidationParameters(value); return *this;}
    inline AppValidationConfiguration& WithSsmValidationParameters(SSMValidationParameters&& value) { SetSsmValidationParameters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_validationId;
    bool m_validationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AppValidationStrategy m_appValidationStrategy;
    bool m_appValidationStrategyHasBeenSet = false;

    SSMValidationParameters m_ssmValidationParameters;
    bool m_ssmValidationParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
