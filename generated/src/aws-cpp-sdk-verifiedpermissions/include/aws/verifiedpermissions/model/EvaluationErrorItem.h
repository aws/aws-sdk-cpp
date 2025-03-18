/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>Contains a description of an evaluation error.</p> <p>This data type is a
   * response parameter of the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorized.html">IsAuthorized</a>,
   * <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_BatchIsAuthorized.html">BatchIsAuthorized</a>,
   * and <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorizedWithToken.html">IsAuthorizedWithToken</a>
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/EvaluationErrorItem">AWS
   * API Reference</a></p>
   */
  class EvaluationErrorItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API EvaluationErrorItem() = default;
    AWS_VERIFIEDPERMISSIONS_API EvaluationErrorItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API EvaluationErrorItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error description.</p>
     */
    inline const Aws::String& GetErrorDescription() const { return m_errorDescription; }
    inline bool ErrorDescriptionHasBeenSet() const { return m_errorDescriptionHasBeenSet; }
    template<typename ErrorDescriptionT = Aws::String>
    void SetErrorDescription(ErrorDescriptionT&& value) { m_errorDescriptionHasBeenSet = true; m_errorDescription = std::forward<ErrorDescriptionT>(value); }
    template<typename ErrorDescriptionT = Aws::String>
    EvaluationErrorItem& WithErrorDescription(ErrorDescriptionT&& value) { SetErrorDescription(std::forward<ErrorDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorDescription;
    bool m_errorDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
