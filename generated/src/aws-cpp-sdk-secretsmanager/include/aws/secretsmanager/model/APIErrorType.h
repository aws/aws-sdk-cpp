/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>The error Secrets Manager encountered while retrieving an individual secret
   * as part of <a>BatchGetSecretValue</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/APIErrorType">AWS
   * API Reference</a></p>
   */
  class APIErrorType
  {
  public:
    AWS_SECRETSMANAGER_API APIErrorType();
    AWS_SECRETSMANAGER_API APIErrorType(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API APIErrorType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN or name of the secret.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>The ARN or name of the secret.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>The ARN or name of the secret.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>The ARN or name of the secret.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>The ARN or name of the secret.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>The ARN or name of the secret.</p>
     */
    inline APIErrorType& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>The ARN or name of the secret.</p>
     */
    inline APIErrorType& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>The ARN or name of the secret.</p>
     */
    inline APIErrorType& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>The error Secrets Manager encountered while retrieving an individual secret
     * as part of <a>BatchGetSecretValue</a>, for example
     * <code>ResourceNotFoundException</code>,<code>InvalidParameterException</code>,
     * <code>InvalidRequestException</code>, <code>DecryptionFailure</code>, or
     * <code>AccessDeniedException</code>.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error Secrets Manager encountered while retrieving an individual secret
     * as part of <a>BatchGetSecretValue</a>, for example
     * <code>ResourceNotFoundException</code>,<code>InvalidParameterException</code>,
     * <code>InvalidRequestException</code>, <code>DecryptionFailure</code>, or
     * <code>AccessDeniedException</code>.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error Secrets Manager encountered while retrieving an individual secret
     * as part of <a>BatchGetSecretValue</a>, for example
     * <code>ResourceNotFoundException</code>,<code>InvalidParameterException</code>,
     * <code>InvalidRequestException</code>, <code>DecryptionFailure</code>, or
     * <code>AccessDeniedException</code>.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error Secrets Manager encountered while retrieving an individual secret
     * as part of <a>BatchGetSecretValue</a>, for example
     * <code>ResourceNotFoundException</code>,<code>InvalidParameterException</code>,
     * <code>InvalidRequestException</code>, <code>DecryptionFailure</code>, or
     * <code>AccessDeniedException</code>.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error Secrets Manager encountered while retrieving an individual secret
     * as part of <a>BatchGetSecretValue</a>, for example
     * <code>ResourceNotFoundException</code>,<code>InvalidParameterException</code>,
     * <code>InvalidRequestException</code>, <code>DecryptionFailure</code>, or
     * <code>AccessDeniedException</code>.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error Secrets Manager encountered while retrieving an individual secret
     * as part of <a>BatchGetSecretValue</a>, for example
     * <code>ResourceNotFoundException</code>,<code>InvalidParameterException</code>,
     * <code>InvalidRequestException</code>, <code>DecryptionFailure</code>, or
     * <code>AccessDeniedException</code>.</p>
     */
    inline APIErrorType& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error Secrets Manager encountered while retrieving an individual secret
     * as part of <a>BatchGetSecretValue</a>, for example
     * <code>ResourceNotFoundException</code>,<code>InvalidParameterException</code>,
     * <code>InvalidRequestException</code>, <code>DecryptionFailure</code>, or
     * <code>AccessDeniedException</code>.</p>
     */
    inline APIErrorType& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error Secrets Manager encountered while retrieving an individual secret
     * as part of <a>BatchGetSecretValue</a>, for example
     * <code>ResourceNotFoundException</code>,<code>InvalidParameterException</code>,
     * <code>InvalidRequestException</code>, <code>DecryptionFailure</code>, or
     * <code>AccessDeniedException</code>.</p>
     */
    inline APIErrorType& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>A message describing the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message describing the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message describing the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message describing the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message describing the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message describing the error.</p>
     */
    inline APIErrorType& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message describing the error.</p>
     */
    inline APIErrorType& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message describing the error.</p>
     */
    inline APIErrorType& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
