/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobErrorType.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>VectorEnrichmentJob error details in response from
   * GetVectorEnrichmentJob.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/VectorEnrichmentJobErrorDetails">AWS
   * API Reference</a></p>
   */
  class VectorEnrichmentJobErrorDetails
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobErrorDetails() = default;
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message that you define and then is processed and rendered by the Vector
     * Enrichment job when the error occurs.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    VectorEnrichmentJobErrorDetails& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of error generated during the Vector Enrichment job.</p>
     */
    inline VectorEnrichmentJobErrorType GetErrorType() const { return m_errorType; }
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
    inline void SetErrorType(VectorEnrichmentJobErrorType value) { m_errorTypeHasBeenSet = true; m_errorType = value; }
    inline VectorEnrichmentJobErrorDetails& WithErrorType(VectorEnrichmentJobErrorType value) { SetErrorType(value); return *this;}
    ///@}
  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    VectorEnrichmentJobErrorType m_errorType{VectorEnrichmentJobErrorType::NOT_SET};
    bool m_errorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
