/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/ErrorCode.h>
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
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>An error that explains why an action did not succeed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ErrorReason">AWS
   * API Reference</a></p>
   */
  class ErrorReason
  {
  public:
    AWS_SERVICEQUOTAS_API ErrorReason() = default;
    AWS_SERVICEQUOTAS_API ErrorReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API ErrorReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Service Quotas returns the following error values:</p> <ul> <li> <p>
     * <code>DEPENDENCY_ACCESS_DENIED_ERROR</code> - The caller does not have the
     * required permissions to complete the action. To resolve the error, you must have
     * permission to access the Amazon Web Services service or quota.</p> </li> <li>
     * <p> <code>DEPENDENCY_THROTTLING_ERROR</code> - The Amazon Web Services service
     * is throttling Service Quotas. </p> </li> <li> <p>
     * <code>DEPENDENCY_SERVICE_ERROR</code> - The Amazon Web Services service is not
     * available.</p> </li> <li> <p> <code>SERVICE_QUOTA_NOT_AVAILABLE_ERROR</code> -
     * There was an error in Service Quotas.</p> </li> </ul>
     */
    inline ErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(ErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline ErrorReason& WithErrorCode(ErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ErrorReason& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    ErrorCode m_errorCode{ErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
