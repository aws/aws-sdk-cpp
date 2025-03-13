/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/StorageGatewayError.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>An internal server error has occurred because the service is unavailable. For
   * more information, see the error and message fields.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ServiceUnavailableError">AWS
   * API Reference</a></p>
   */
  class ServiceUnavailableError
  {
  public:
    AWS_STORAGEGATEWAY_API ServiceUnavailableError() = default;
    AWS_STORAGEGATEWAY_API ServiceUnavailableError(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API ServiceUnavailableError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A human-readable message describing the error that occurred.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ServiceUnavailableError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>StorageGatewayError</a> that provides more information about the cause
     * of the error.</p>
     */
    inline const StorageGatewayError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = StorageGatewayError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = StorageGatewayError>
    ServiceUnavailableError& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    StorageGatewayError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
