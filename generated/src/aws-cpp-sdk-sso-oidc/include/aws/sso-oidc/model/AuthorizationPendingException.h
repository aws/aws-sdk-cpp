/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
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
namespace SSOOIDC
{
namespace Model
{

  /**
   * <p>Indicates that a request to authorize a client with an access user session
   * token is pending.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/AuthorizationPendingException">AWS
   * API Reference</a></p>
   */
  class AuthorizationPendingException
  {
  public:
    AWS_SSOOIDC_API AuthorizationPendingException();
    AWS_SSOOIDC_API AuthorizationPendingException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API AuthorizationPendingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Single error code. For this exception the value will be
     * <code>authorization_pending</code>.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>authorization_pending</code>.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>authorization_pending</code>.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>authorization_pending</code>.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>authorization_pending</code>.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>authorization_pending</code>.</p>
     */
    inline AuthorizationPendingException& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>Single error code. For this exception the value will be
     * <code>authorization_pending</code>.</p>
     */
    inline AuthorizationPendingException& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>Single error code. For this exception the value will be
     * <code>authorization_pending</code>.</p>
     */
    inline AuthorizationPendingException& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline const Aws::String& GetError_description() const{ return m_error_description; }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline bool Error_descriptionHasBeenSet() const { return m_error_descriptionHasBeenSet; }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline void SetError_description(const Aws::String& value) { m_error_descriptionHasBeenSet = true; m_error_description = value; }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline void SetError_description(Aws::String&& value) { m_error_descriptionHasBeenSet = true; m_error_description = std::move(value); }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline void SetError_description(const char* value) { m_error_descriptionHasBeenSet = true; m_error_description.assign(value); }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline AuthorizationPendingException& WithError_description(const Aws::String& value) { SetError_description(value); return *this;}

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline AuthorizationPendingException& WithError_description(Aws::String&& value) { SetError_description(std::move(value)); return *this;}

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline AuthorizationPendingException& WithError_description(const char* value) { SetError_description(value); return *this;}

  private:

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_error_description;
    bool m_error_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
