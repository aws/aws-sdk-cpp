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
    AWS_SECURITYHUB_API UnprocessedSecurityControl() = default;
    AWS_SECURITYHUB_API UnprocessedSecurityControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API UnprocessedSecurityControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which a
     * response couldn't be returned. </p>
     */
    inline const Aws::String& GetSecurityControlId() const { return m_securityControlId; }
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }
    template<typename SecurityControlIdT = Aws::String>
    void SetSecurityControlId(SecurityControlIdT&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::forward<SecurityControlIdT>(value); }
    template<typename SecurityControlIdT = Aws::String>
    UnprocessedSecurityControl& WithSecurityControlId(SecurityControlIdT&& value) { SetSecurityControlId(std::forward<SecurityControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error code for the unprocessed security control. </p>
     */
    inline UnprocessedErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(UnprocessedErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline UnprocessedSecurityControl& WithErrorCode(UnprocessedErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason why the security control was unprocessed. </p>
     */
    inline const Aws::String& GetErrorReason() const { return m_errorReason; }
    inline bool ErrorReasonHasBeenSet() const { return m_errorReasonHasBeenSet; }
    template<typename ErrorReasonT = Aws::String>
    void SetErrorReason(ErrorReasonT&& value) { m_errorReasonHasBeenSet = true; m_errorReason = std::forward<ErrorReasonT>(value); }
    template<typename ErrorReasonT = Aws::String>
    UnprocessedSecurityControl& WithErrorReason(ErrorReasonT&& value) { SetErrorReason(std::forward<ErrorReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    UnprocessedErrorCode m_errorCode{UnprocessedErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorReason;
    bool m_errorReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
