/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
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
   * <p>Provides details about an error in a core network policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkPolicyError">AWS
   * API Reference</a></p>
   */
  class CoreNetworkPolicyError
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkPolicyError();
    AWS_NETWORKMANAGER_API CoreNetworkPolicyError(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkPolicyError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code associated with a core network policy error.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code associated with a core network policy error.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code associated with a core network policy error.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code associated with a core network policy error.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code associated with a core network policy error.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code associated with a core network policy error.</p>
     */
    inline CoreNetworkPolicyError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code associated with a core network policy error.</p>
     */
    inline CoreNetworkPolicyError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code associated with a core network policy error.</p>
     */
    inline CoreNetworkPolicyError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The message associated with a core network policy error code.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message associated with a core network policy error code.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message associated with a core network policy error code.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message associated with a core network policy error code.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message associated with a core network policy error code.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message associated with a core network policy error code.</p>
     */
    inline CoreNetworkPolicyError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message associated with a core network policy error code.</p>
     */
    inline CoreNetworkPolicyError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message associated with a core network policy error code.</p>
     */
    inline CoreNetworkPolicyError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The JSON path where the error was discovered in the policy document.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The JSON path where the error was discovered in the policy document.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The JSON path where the error was discovered in the policy document.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The JSON path where the error was discovered in the policy document.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The JSON path where the error was discovered in the policy document.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The JSON path where the error was discovered in the policy document.</p>
     */
    inline CoreNetworkPolicyError& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The JSON path where the error was discovered in the policy document.</p>
     */
    inline CoreNetworkPolicyError& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The JSON path where the error was discovered in the policy document.</p>
     */
    inline CoreNetworkPolicyError& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
