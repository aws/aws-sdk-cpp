/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/PeeringErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/PermissionsErrorContext.h>
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
   * <p>Describes an error associated with a peering request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/PeeringError">AWS
   * API Reference</a></p>
   */
  class PeeringError
  {
  public:
    AWS_NETWORKMANAGER_API PeeringError();
    AWS_NETWORKMANAGER_API PeeringError(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API PeeringError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code for the peering request.</p>
     */
    inline const PeeringErrorCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const PeeringErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(PeeringErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline PeeringError& WithCode(const PeeringErrorCode& value) { SetCode(value); return *this;}
    inline PeeringError& WithCode(PeeringErrorCode&& value) { SetCode(std::move(value)); return *this;}
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
    inline PeeringError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline PeeringError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline PeeringError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the requested peering resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline PeeringError& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline PeeringError& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline PeeringError& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Peering request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline PeeringError& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PeeringError& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PeeringError& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information about missing permissions for the peering
     * error.</p>
     */
    inline const PermissionsErrorContext& GetMissingPermissionsContext() const{ return m_missingPermissionsContext; }
    inline bool MissingPermissionsContextHasBeenSet() const { return m_missingPermissionsContextHasBeenSet; }
    inline void SetMissingPermissionsContext(const PermissionsErrorContext& value) { m_missingPermissionsContextHasBeenSet = true; m_missingPermissionsContext = value; }
    inline void SetMissingPermissionsContext(PermissionsErrorContext&& value) { m_missingPermissionsContextHasBeenSet = true; m_missingPermissionsContext = std::move(value); }
    inline PeeringError& WithMissingPermissionsContext(const PermissionsErrorContext& value) { SetMissingPermissionsContext(value); return *this;}
    inline PeeringError& WithMissingPermissionsContext(PermissionsErrorContext&& value) { SetMissingPermissionsContext(std::move(value)); return *this;}
    ///@}
  private:

    PeeringErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    PermissionsErrorContext m_missingPermissionsContext;
    bool m_missingPermissionsContextHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
