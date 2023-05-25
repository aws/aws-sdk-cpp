/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/UnprocessedErrorCode.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about a security control for which a response couldn't be
   * returned. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UnprocessedSecurityControl">AWS
   * API Reference</a></p>
   */
  class UnprocessedSecurityControl
  {
  public:
    AWS_SECURITYHUB_API UnprocessedSecurityControl();
    AWS_SECURITYHUB_API UnprocessedSecurityControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API UnprocessedSecurityControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which a
     * response couldn't be returned. </p>
     */
    inline const Aws::String& GetSecurityControlId() const{ return m_securityControlId; }

    /**
     * <p> The control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which a
     * response couldn't be returned. </p>
     */
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }

    /**
     * <p> The control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which a
     * response couldn't be returned. </p>
     */
    inline void SetSecurityControlId(const Aws::String& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = value; }

    /**
     * <p> The control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which a
     * response couldn't be returned. </p>
     */
    inline void SetSecurityControlId(Aws::String&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::move(value); }

    /**
     * <p> The control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which a
     * response couldn't be returned. </p>
     */
    inline void SetSecurityControlId(const char* value) { m_securityControlIdHasBeenSet = true; m_securityControlId.assign(value); }

    /**
     * <p> The control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which a
     * response couldn't be returned. </p>
     */
    inline UnprocessedSecurityControl& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}

    /**
     * <p> The control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which a
     * response couldn't be returned. </p>
     */
    inline UnprocessedSecurityControl& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}

    /**
     * <p> The control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which a
     * response couldn't be returned. </p>
     */
    inline UnprocessedSecurityControl& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}


    /**
     * <p> The error code for the unprocessed security control. </p>
     */
    inline const UnprocessedErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p> The error code for the unprocessed security control. </p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p> The error code for the unprocessed security control. </p>
     */
    inline void SetErrorCode(const UnprocessedErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p> The error code for the unprocessed security control. </p>
     */
    inline void SetErrorCode(UnprocessedErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p> The error code for the unprocessed security control. </p>
     */
    inline UnprocessedSecurityControl& WithErrorCode(const UnprocessedErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p> The error code for the unprocessed security control. </p>
     */
    inline UnprocessedSecurityControl& WithErrorCode(UnprocessedErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p> The reason why the security control was unprocessed. </p>
     */
    inline const Aws::String& GetErrorReason() const{ return m_errorReason; }

    /**
     * <p> The reason why the security control was unprocessed. </p>
     */
    inline bool ErrorReasonHasBeenSet() const { return m_errorReasonHasBeenSet; }

    /**
     * <p> The reason why the security control was unprocessed. </p>
     */
    inline void SetErrorReason(const Aws::String& value) { m_errorReasonHasBeenSet = true; m_errorReason = value; }

    /**
     * <p> The reason why the security control was unprocessed. </p>
     */
    inline void SetErrorReason(Aws::String&& value) { m_errorReasonHasBeenSet = true; m_errorReason = std::move(value); }

    /**
     * <p> The reason why the security control was unprocessed. </p>
     */
    inline void SetErrorReason(const char* value) { m_errorReasonHasBeenSet = true; m_errorReason.assign(value); }

    /**
     * <p> The reason why the security control was unprocessed. </p>
     */
    inline UnprocessedSecurityControl& WithErrorReason(const Aws::String& value) { SetErrorReason(value); return *this;}

    /**
     * <p> The reason why the security control was unprocessed. </p>
     */
    inline UnprocessedSecurityControl& WithErrorReason(Aws::String&& value) { SetErrorReason(std::move(value)); return *this;}

    /**
     * <p> The reason why the security control was unprocessed. </p>
     */
    inline UnprocessedSecurityControl& WithErrorReason(const char* value) { SetErrorReason(value); return *this;}

  private:

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    UnprocessedErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorReason;
    bool m_errorReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
