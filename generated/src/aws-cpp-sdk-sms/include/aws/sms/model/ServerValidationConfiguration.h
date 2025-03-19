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
    AWS_SMS_API ServerValidationConfiguration() = default;
    AWS_SMS_API ServerValidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerValidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Server& GetServer() const { return m_server; }
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }
    template<typename ServerT = Server>
    void SetServer(ServerT&& value) { m_serverHasBeenSet = true; m_server = std::forward<ServerT>(value); }
    template<typename ServerT = Server>
    ServerValidationConfiguration& WithServer(ServerT&& value) { SetServer(std::forward<ServerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the validation.</p>
     */
    inline const Aws::String& GetValidationId() const { return m_validationId; }
    inline bool ValidationIdHasBeenSet() const { return m_validationIdHasBeenSet; }
    template<typename ValidationIdT = Aws::String>
    void SetValidationId(ValidationIdT&& value) { m_validationIdHasBeenSet = true; m_validationId = std::forward<ValidationIdT>(value); }
    template<typename ValidationIdT = Aws::String>
    ServerValidationConfiguration& WithValidationId(ValidationIdT&& value) { SetValidationId(std::forward<ValidationIdT>(value)); return *this;}
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
    ServerValidationConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation strategy.</p>
     */
    inline ServerValidationStrategy GetServerValidationStrategy() const { return m_serverValidationStrategy; }
    inline bool ServerValidationStrategyHasBeenSet() const { return m_serverValidationStrategyHasBeenSet; }
    inline void SetServerValidationStrategy(ServerValidationStrategy value) { m_serverValidationStrategyHasBeenSet = true; m_serverValidationStrategy = value; }
    inline ServerValidationConfiguration& WithServerValidationStrategy(ServerValidationStrategy value) { SetServerValidationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation parameters.</p>
     */
    inline const UserDataValidationParameters& GetUserDataValidationParameters() const { return m_userDataValidationParameters; }
    inline bool UserDataValidationParametersHasBeenSet() const { return m_userDataValidationParametersHasBeenSet; }
    template<typename UserDataValidationParametersT = UserDataValidationParameters>
    void SetUserDataValidationParameters(UserDataValidationParametersT&& value) { m_userDataValidationParametersHasBeenSet = true; m_userDataValidationParameters = std::forward<UserDataValidationParametersT>(value); }
    template<typename UserDataValidationParametersT = UserDataValidationParameters>
    ServerValidationConfiguration& WithUserDataValidationParameters(UserDataValidationParametersT&& value) { SetUserDataValidationParameters(std::forward<UserDataValidationParametersT>(value)); return *this;}
    ///@}
  private:

    Server m_server;
    bool m_serverHasBeenSet = false;

    Aws::String m_validationId;
    bool m_validationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServerValidationStrategy m_serverValidationStrategy{ServerValidationStrategy::NOT_SET};
    bool m_serverValidationStrategyHasBeenSet = false;

    UserDataValidationParameters m_userDataValidationParameters;
    bool m_userDataValidationParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
