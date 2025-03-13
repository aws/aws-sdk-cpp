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
   * <p>Indicates that something is wrong with the input to the request. For example,
   * a required parameter might be missing or out of range.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/InvalidRequestException">AWS
   * API Reference</a></p>
   */
  class InvalidRequestException
  {
  public:
    AWS_SSOOIDC_API InvalidRequestException() = default;
    AWS_SSOOIDC_API InvalidRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API InvalidRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Single error code. For this exception the value will be
     * <code>invalid_request</code>.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    InvalidRequestException& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
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
    InvalidRequestException& WithError_description(Error_descriptionT&& value) { SetError_description(std::forward<Error_descriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_error_description;
    bool m_error_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
