﻿/**
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
    AWS_STORAGEGATEWAY_API ServiceUnavailableError();
    AWS_STORAGEGATEWAY_API ServiceUnavailableError(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API ServiceUnavailableError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A human-readable message describing the error that occurred.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ServiceUnavailableError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ServiceUnavailableError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ServiceUnavailableError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>StorageGatewayError</a> that provides more information about the cause
     * of the error.</p>
     */
    inline const StorageGatewayError& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const StorageGatewayError& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(StorageGatewayError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline ServiceUnavailableError& WithError(const StorageGatewayError& value) { SetError(value); return *this;}
    inline ServiceUnavailableError& WithError(StorageGatewayError&& value) { SetError(std::move(value)); return *this;}
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
