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
   * <p>An internal server error has occurred during the request. For more
   * information, see the error and message fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/InternalServerError">AWS
   * API Reference</a></p>
   */
  class InternalServerError
  {
  public:
    AWS_STORAGEGATEWAY_API InternalServerError();
    AWS_STORAGEGATEWAY_API InternalServerError(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API InternalServerError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A human-readable message describing the error that occurred.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A human-readable message describing the error that occurred.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A human-readable message describing the error that occurred.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A human-readable message describing the error that occurred.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A human-readable message describing the error that occurred.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A human-readable message describing the error that occurred.</p>
     */
    inline InternalServerError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A human-readable message describing the error that occurred.</p>
     */
    inline InternalServerError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A human-readable message describing the error that occurred.</p>
     */
    inline InternalServerError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>A <a>StorageGatewayError</a> that provides more information about the cause
     * of the error.</p>
     */
    inline const StorageGatewayError& GetError() const{ return m_error; }

    /**
     * <p>A <a>StorageGatewayError</a> that provides more information about the cause
     * of the error.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>A <a>StorageGatewayError</a> that provides more information about the cause
     * of the error.</p>
     */
    inline void SetError(const StorageGatewayError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>A <a>StorageGatewayError</a> that provides more information about the cause
     * of the error.</p>
     */
    inline void SetError(StorageGatewayError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>A <a>StorageGatewayError</a> that provides more information about the cause
     * of the error.</p>
     */
    inline InternalServerError& WithError(const StorageGatewayError& value) { SetError(value); return *this;}

    /**
     * <p>A <a>StorageGatewayError</a> that provides more information about the cause
     * of the error.</p>
     */
    inline InternalServerError& WithError(StorageGatewayError&& value) { SetError(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    StorageGatewayError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
