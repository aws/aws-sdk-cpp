/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The error code and error description associated with the
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchDescribeModelPackageError">AWS
   * API Reference</a></p>
   */
  class BatchDescribeModelPackageError
  {
  public:
    AWS_SAGEMAKER_API BatchDescribeModelPackageError() = default;
    AWS_SAGEMAKER_API BatchDescribeModelPackageError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API BatchDescribeModelPackageError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    BatchDescribeModelPackageError& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetErrorResponse() const { return m_errorResponse; }
    inline bool ErrorResponseHasBeenSet() const { return m_errorResponseHasBeenSet; }
    template<typename ErrorResponseT = Aws::String>
    void SetErrorResponse(ErrorResponseT&& value) { m_errorResponseHasBeenSet = true; m_errorResponse = std::forward<ErrorResponseT>(value); }
    template<typename ErrorResponseT = Aws::String>
    BatchDescribeModelPackageError& WithErrorResponse(ErrorResponseT&& value) { SetErrorResponse(std::forward<ErrorResponseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorResponse;
    bool m_errorResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
