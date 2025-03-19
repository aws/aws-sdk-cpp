/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/RenderingError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class RenderUiTemplateResult
  {
  public:
    AWS_SAGEMAKER_API RenderUiTemplateResult() = default;
    AWS_SAGEMAKER_API RenderUiTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API RenderUiTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A Liquid template that renders the HTML for the worker UI.</p>
     */
    inline const Aws::String& GetRenderedContent() const { return m_renderedContent; }
    template<typename RenderedContentT = Aws::String>
    void SetRenderedContent(RenderedContentT&& value) { m_renderedContentHasBeenSet = true; m_renderedContent = std::forward<RenderedContentT>(value); }
    template<typename RenderedContentT = Aws::String>
    RenderUiTemplateResult& WithRenderedContent(RenderedContentT&& value) { SetRenderedContent(std::forward<RenderedContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more <code>RenderingError</code> objects if any were
     * encountered while rendering the template. If there were no errors, the list is
     * empty.</p>
     */
    inline const Aws::Vector<RenderingError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<RenderingError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<RenderingError>>
    RenderUiTemplateResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = RenderingError>
    RenderUiTemplateResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RenderUiTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_renderedContent;
    bool m_renderedContentHasBeenSet = false;

    Aws::Vector<RenderingError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
