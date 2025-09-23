/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-oidc/model/AccessDeniedExceptionReason.h>
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
   * <p>You do not have sufficient access to perform this action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/AccessDeniedException">AWS
   * API Reference</a></p>
   */
  class AccessDeniedException
  {
  public:
    AWS_SSOOIDC_API AccessDeniedException() = default;
    AWS_SSOOIDC_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Single error code. For this exception the value will be
     * <code>access_denied</code>.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    AccessDeniedException& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that uniquely identifies a reason for the error.</p>
     */
    inline AccessDeniedExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(AccessDeniedExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline AccessDeniedException& WithReason(AccessDeniedExceptionReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline const Aws::String& GetError_description() const { return m_error_description; }
    inline bool Error_descriptionHasBeenSet() const { return m_error_descriptionHasBeenSet; }
    template<typename Error_descriptionT = Aws::String>
    void SetError_description(Error_descriptionT&& value) { m_error_descriptionHasBeenSet = true; m_error_description = std::forward<Error_descriptionT>(value); }
    template<typename Error_descriptionT = Aws::String>
    AccessDeniedException& WithError_description(Error_descriptionT&& value) { SetError_description(std::forward<Error_descriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    AccessDeniedExceptionReason m_reason{AccessDeniedExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::String m_error_description;
    bool m_error_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
