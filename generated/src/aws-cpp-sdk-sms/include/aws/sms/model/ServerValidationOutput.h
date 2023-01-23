/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/Server.h>
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
   * <p>Contains output from validating an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerValidationOutput">AWS
   * API Reference</a></p>
   */
  class ServerValidationOutput
  {
  public:
    AWS_SMS_API ServerValidationOutput();
    AWS_SMS_API ServerValidationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerValidationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Server& GetServer() const{ return m_server; }

    
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }

    
    inline void SetServer(const Server& value) { m_serverHasBeenSet = true; m_server = value; }

    
    inline void SetServer(Server&& value) { m_serverHasBeenSet = true; m_server = std::move(value); }

    
    inline ServerValidationOutput& WithServer(const Server& value) { SetServer(value); return *this;}

    
    inline ServerValidationOutput& WithServer(Server&& value) { SetServer(std::move(value)); return *this;}

  private:

    Server m_server;
    bool m_serverHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
