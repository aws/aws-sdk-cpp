/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>The following element is returned by the service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TestRenderEmailTemplateResponse">AWS
   * API Reference</a></p>
   */
  class TestRenderEmailTemplateResult
  {
  public:
    AWS_SESV2_API TestRenderEmailTemplateResult() = default;
    AWS_SESV2_API TestRenderEmailTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API TestRenderEmailTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The complete MIME message rendered by applying the data in the
     * <code>TemplateData</code> parameter to the template specified in the
     * TemplateName parameter.</p>
     */
    inline const Aws::String& GetRenderedTemplate() const { return m_renderedTemplate; }
    template<typename RenderedTemplateT = Aws::String>
    void SetRenderedTemplate(RenderedTemplateT&& value) { m_renderedTemplateHasBeenSet = true; m_renderedTemplate = std::forward<RenderedTemplateT>(value); }
    template<typename RenderedTemplateT = Aws::String>
    TestRenderEmailTemplateResult& WithRenderedTemplate(RenderedTemplateT&& value) { SetRenderedTemplate(std::forward<RenderedTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestRenderEmailTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_renderedTemplate;
    bool m_renderedTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
