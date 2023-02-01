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


    /**
     * <p>The code for the state reason.</p>
     */
    inline const TransitGatewayRegistrationState& GetCode() const{ return m_code; }

    /**
     * <p>The code for the state reason.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The code for the state reason.</p>
     */
    inline void SetCode(const TransitGatewayRegistrationState& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code for the state reason.</p>
     */
    inline void SetCode(TransitGatewayRegistrationState&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The code for the state reason.</p>
     */
    inline TransitGatewayRegistrationStateReason& WithCode(const TransitGatewayRegistrationState& value) { SetCode(value); return *this;}

    /**
     * <p>The code for the state reason.</p>
     */
    inline TransitGatewayRegistrationStateReason& WithCode(TransitGatewayRegistrationState&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The message for the state reason.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message for the state reason.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message for the state reason.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message for the state reason.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message for the state reason.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message for the state reason.</p>
     */
    inline TransitGatewayRegistrationStateReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message for the state reason.</p>
     */
    inline TransitGatewayRegistrationStateReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message for the state reason.</p>
     */
    inline TransitGatewayRegistrationStateReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    TransitGatewayRegistrationState m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
