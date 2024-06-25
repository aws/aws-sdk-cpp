/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ConnectPeerErrorCode.h>
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
   * <p>Describes an error associated with a Connect peer request</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectPeerError">AWS
   * API Reference</a></p>
   */
  class ConnectPeerError
  {
  public:
    AWS_NETWORKMANAGER_API ConnectPeerError();
    AWS_NETWORKMANAGER_API ConnectPeerError(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectPeerError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code for the Connect peer request.</p>
     */
    inline const ConnectPeerErrorCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const ConnectPeerErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(ConnectPeerErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline ConnectPeerError& WithCode(const ConnectPeerErrorCode& value) { SetCode(value); return *this;}
    inline ConnectPeerError& WithCode(ConnectPeerErrorCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the error <code>code</code>.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ConnectPeerError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ConnectPeerError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ConnectPeerError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the requested Connect peer resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline ConnectPeerError& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline ConnectPeerError& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline ConnectPeerError& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Connect peer request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline ConnectPeerError& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ConnectPeerError& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ConnectPeerError& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ConnectPeerErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
