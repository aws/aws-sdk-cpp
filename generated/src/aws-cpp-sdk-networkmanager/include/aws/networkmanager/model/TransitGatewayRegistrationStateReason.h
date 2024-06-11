/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayRegistrationState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the status of a transit gateway registration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TransitGatewayRegistrationStateReason">AWS
   * API Reference</a></p>
   */
  class TransitGatewayRegistrationStateReason
  {
  public:
    AWS_NETWORKMANAGER_API TransitGatewayRegistrationStateReason();
    AWS_NETWORKMANAGER_API TransitGatewayRegistrationStateReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API TransitGatewayRegistrationStateReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code for the state reason.</p>
     */
    inline const TransitGatewayRegistrationState& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const TransitGatewayRegistrationState& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(TransitGatewayRegistrationState&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline TransitGatewayRegistrationStateReason& WithCode(const TransitGatewayRegistrationState& value) { SetCode(value); return *this;}
    inline TransitGatewayRegistrationStateReason& WithCode(TransitGatewayRegistrationState&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message for the state reason.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline TransitGatewayRegistrationStateReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline TransitGatewayRegistrationStateReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline TransitGatewayRegistrationStateReason& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    TransitGatewayRegistrationState m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
