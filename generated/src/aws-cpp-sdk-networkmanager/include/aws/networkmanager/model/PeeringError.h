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
    AWS_NETWORKMANAGER_API PeeringError() = default;
    AWS_NETWORKMANAGER_API PeeringError(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API PeeringError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code for the peering request.</p>
     */
    inline PeeringErrorCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(PeeringErrorCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline PeeringError& WithCode(PeeringErrorCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the error <code>code</code>.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    PeeringError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the requested peering resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    PeeringError& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Peering request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PeeringError& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information about missing permissions for the peering
     * error.</p>
     */
    inline const PermissionsErrorContext& GetMissingPermissionsContext() const { return m_missingPermissionsContext; }
    inline bool MissingPermissionsContextHasBeenSet() const { return m_missingPermissionsContextHasBeenSet; }
    template<typename MissingPermissionsContextT = PermissionsErrorContext>
    void SetMissingPermissionsContext(MissingPermissionsContextT&& value) { m_missingPermissionsContextHasBeenSet = true; m_missingPermissionsContext = std::forward<MissingPermissionsContextT>(value); }
    template<typename MissingPermissionsContextT = PermissionsErrorContext>
    PeeringError& WithMissingPermissionsContext(MissingPermissionsContextT&& value) { SetMissingPermissionsContext(std::forward<MissingPermissionsContextT>(value)); return *this;}
    ///@}
  private:

    PeeringErrorCode m_code{PeeringErrorCode::NOT_SET};
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
