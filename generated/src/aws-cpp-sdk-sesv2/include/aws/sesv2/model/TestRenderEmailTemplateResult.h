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
    AWS_SESV2_API TestRenderEmailTemplateResult();
    AWS_SESV2_API TestRenderEmailTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API TestRenderEmailTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The complete MIME message rendered by applying the data in the
     * <code>TemplateData</code> parameter to the template specified in the
     * TemplateName parameter.</p>
     */
    inline const Aws::String& GetRenderedTemplate() const{ return m_renderedTemplate; }

    /**
     * <p>The complete MIME message rendered by applying the data in the
     * <code>TemplateData</code> parameter to the template specified in the
     * TemplateName parameter.</p>
     */
    inline void SetRenderedTemplate(const Aws::String& value) { m_renderedTemplate = value; }

    /**
     * <p>The complete MIME message rendered by applying the data in the
     * <code>TemplateData</code> parameter to the template specified in the
     * TemplateName parameter.</p>
     */
    inline void SetRenderedTemplate(Aws::String&& value) { m_renderedTemplate = std::move(value); }

    /**
     * <p>The complete MIME message rendered by applying the data in the
     * <code>TemplateData</code> parameter to the template specified in the
     * TemplateName parameter.</p>
     */
    inline void SetRenderedTemplate(const char* value) { m_renderedTemplate.assign(value); }

    /**
     * <p>The complete MIME message rendered by applying the data in the
     * <code>TemplateData</code> parameter to the template specified in the
     * TemplateName parameter.</p>
     */
    inline TestRenderEmailTemplateResult& WithRenderedTemplate(const Aws::String& value) { SetRenderedTemplate(value); return *this;}

    /**
     * <p>The complete MIME message rendered by applying the data in the
     * <code>TemplateData</code> parameter to the template specified in the
     * TemplateName parameter.</p>
     */
    inline TestRenderEmailTemplateResult& WithRenderedTemplate(Aws::String&& value) { SetRenderedTemplate(std::move(value)); return *this;}

    /**
     * <p>The complete MIME message rendered by applying the data in the
     * <code>TemplateData</code> parameter to the template specified in the
     * TemplateName parameter.</p>
     */
    inline TestRenderEmailTemplateResult& WithRenderedTemplate(const char* value) { SetRenderedTemplate(value); return *this;}

  private:

    Aws::String m_renderedTemplate;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
