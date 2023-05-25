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
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobErrorDetails();
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A message that you define and then is processed and rendered by the Vector
     * Enrichment job when the error occurs.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A message that you define and then is processed and rendered by the Vector
     * Enrichment job when the error occurs.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A message that you define and then is processed and rendered by the Vector
     * Enrichment job when the error occurs.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A message that you define and then is processed and rendered by the Vector
     * Enrichment job when the error occurs.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A message that you define and then is processed and rendered by the Vector
     * Enrichment job when the error occurs.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A message that you define and then is processed and rendered by the Vector
     * Enrichment job when the error occurs.</p>
     */
    inline VectorEnrichmentJobErrorDetails& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A message that you define and then is processed and rendered by the Vector
     * Enrichment job when the error occurs.</p>
     */
    inline VectorEnrichmentJobErrorDetails& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A message that you define and then is processed and rendered by the Vector
     * Enrichment job when the error occurs.</p>
     */
    inline VectorEnrichmentJobErrorDetails& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The type of error generated during the Vector Enrichment job.</p>
     */
    inline const VectorEnrichmentJobErrorType& GetErrorType() const{ return m_errorType; }

    /**
     * <p>The type of error generated during the Vector Enrichment job.</p>
     */
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }

    /**
     * <p>The type of error generated during the Vector Enrichment job.</p>
     */
    inline void SetErrorType(const VectorEnrichmentJobErrorType& value) { m_errorTypeHasBeenSet = true; m_errorType = value; }

    /**
     * <p>The type of error generated during the Vector Enrichment job.</p>
     */
    inline void SetErrorType(VectorEnrichmentJobErrorType&& value) { m_errorTypeHasBeenSet = true; m_errorType = std::move(value); }

    /**
     * <p>The type of error generated during the Vector Enrichment job.</p>
     */
    inline VectorEnrichmentJobErrorDetails& WithErrorType(const VectorEnrichmentJobErrorType& value) { SetErrorType(value); return *this;}

    /**
     * <p>The type of error generated during the Vector Enrichment job.</p>
     */
    inline VectorEnrichmentJobErrorDetails& WithErrorType(VectorEnrichmentJobErrorType&& value) { SetErrorType(std::move(value)); return *this;}

  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    VectorEnrichmentJobErrorType m_errorType;
    bool m_errorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
