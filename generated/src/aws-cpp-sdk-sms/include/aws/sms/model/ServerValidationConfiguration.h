/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/Server.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ServerValidationStrategy.h>
#include <aws/sms/model/UserDataValidationParameters.h>
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
   * <p>Configuration for validating an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerValidationConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerValidationConfiguration
  {
  public:
    AWS_SMS_API ServerValidationConfiguration();
    AWS_SMS_API ServerValidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerValidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Server& GetServer() const{ return m_server; }

    
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }

    
    inline void SetServer(const Server& value) { m_serverHasBeenSet = true; m_server = value; }

    
    inline void SetServer(Server&& value) { m_serverHasBeenSet = true; m_server = std::move(value); }

    
    inline ServerValidationConfiguration& WithServer(const Server& value) { SetServer(value); return *this;}

    
    inline ServerValidationConfiguration& WithServer(Server&& value) { SetServer(std::move(value)); return *this;}


    /**
     * <p>The ID of the validation.</p>
     */
    inline const Aws::String& GetValidationId() const{ return m_validationId; }

    /**
     * <p>The ID of the validation.</p>
     */
    inline bool ValidationIdHasBeenSet() const { return m_validationIdHasBeenSet; }

    /**
     * <p>The ID of the validation.</p>
     */
    inline void SetValidationId(const Aws::String& value) { m_validationIdHasBeenSet = true; m_validationId = value; }

    /**
     * <p>The ID of the validation.</p>
     */
    inline void SetValidationId(Aws::String&& value) { m_validationIdHasBeenSet = true; m_validationId = std::move(value); }

    /**
     * <p>The ID of the validation.</p>
     */
    inline void SetValidationId(const char* value) { m_validationIdHasBeenSet = true; m_validationId.assign(value); }

    /**
     * <p>The ID of the validation.</p>
     */
    inline ServerValidationConfiguration& WithValidationId(const Aws::String& value) { SetValidationId(value); return *this;}

    /**
     * <p>The ID of the validation.</p>
     */
    inline ServerValidationConfiguration& WithValidationId(Aws::String&& value) { SetValidationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the validation.</p>
     */
    inline ServerValidationConfiguration& WithValidationId(const char* value) { SetValidationId(value); return *this;}


    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configuration.</p>
     */
    inline ServerValidationConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configuration.</p>
     */
    inline ServerValidationConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration.</p>
     */
    inline ServerValidationConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The validation strategy.</p>
     */
    inline const ServerValidationStrategy& GetServerValidationStrategy() const{ return m_serverValidationStrategy; }

    /**
     * <p>The validation strategy.</p>
     */
    inline bool ServerValidationStrategyHasBeenSet() const { return m_serverValidationStrategyHasBeenSet; }

    /**
     * <p>The validation strategy.</p>
     */
    inline void SetServerValidationStrategy(const ServerValidationStrategy& value) { m_serverValidationStrategyHasBeenSet = true; m_serverValidationStrategy = value; }

    /**
     * <p>The validation strategy.</p>
     */
    inline void SetServerValidationStrategy(ServerValidationStrategy&& value) { m_serverValidationStrategyHasBeenSet = true; m_serverValidationStrategy = std::move(value); }

    /**
     * <p>The validation strategy.</p>
     */
    inline ServerValidationConfiguration& WithServerValidationStrategy(const ServerValidationStrategy& value) { SetServerValidationStrategy(value); return *this;}

    /**
     * <p>The validation strategy.</p>
     */
    inline ServerValidationConfiguration& WithServerValidationStrategy(ServerValidationStrategy&& value) { SetServerValidationStrategy(std::move(value)); return *this;}


    /**
     * <p>The validation parameters.</p>
     */
    inline const UserDataValidationParameters& GetUserDataValidationParameters() const{ return m_userDataValidationParameters; }

    /**
     * <p>The validation parameters.</p>
     */
    inline bool UserDataValidationParametersHasBeenSet() const { return m_userDataValidationParametersHasBeenSet; }

    /**
     * <p>The validation parameters.</p>
     */
    inline void SetUserDataValidationParameters(const UserDataValidationParameters& value) { m_userDataValidationParametersHasBeenSet = true; m_userDataValidationParameters = value; }

    /**
     * <p>The validation parameters.</p>
     */
    inline void SetUserDataValidationParameters(UserDataValidationParameters&& value) { m_userDataValidationParametersHasBeenSet = true; m_userDataValidationParameters = std::move(value); }

    /**
     * <p>The validation parameters.</p>
     */
    inline ServerValidationConfiguration& WithUserDataValidationParameters(const UserDataValidationParameters& value) { SetUserDataValidationParameters(value); return *this;}

    /**
     * <p>The validation parameters.</p>
     */
    inline ServerValidationConfiguration& WithUserDataValidationParameters(UserDataValidationParameters&& value) { SetUserDataValidationParameters(std::move(value)); return *this;}

  private:

    Server m_server;
    bool m_serverHasBeenSet = false;

    Aws::String m_validationId;
    bool m_validationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServerValidationStrategy m_serverValidationStrategy;
    bool m_serverValidationStrategyHasBeenSet = false;

    UserDataValidationParameters m_userDataValidationParameters;
    bool m_userDataValidationParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
