/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/Template.h>
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
namespace PcaConnectorAd
{
namespace Model
{
  class GetTemplateResult
  {
  public:
    AWS_PCACONNECTORAD_API GetTemplateResult();
    AWS_PCACONNECTORAD_API GetTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API GetTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A certificate template that the connector uses to issue certificates from a
     * private CA.</p>
     */
    inline const Template& GetTemplate() const{ return m_template; }

    /**
     * <p>A certificate template that the connector uses to issue certificates from a
     * private CA.</p>
     */
    inline void SetTemplate(const Template& value) { m_template = value; }

    /**
     * <p>A certificate template that the connector uses to issue certificates from a
     * private CA.</p>
     */
    inline void SetTemplate(Template&& value) { m_template = std::move(value); }

    /**
     * <p>A certificate template that the connector uses to issue certificates from a
     * private CA.</p>
     */
    inline GetTemplateResult& WithTemplate(const Template& value) { SetTemplate(value); return *this;}

    /**
     * <p>A certificate template that the connector uses to issue certificates from a
     * private CA.</p>
     */
    inline GetTemplateResult& WithTemplate(Template&& value) { SetTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Template m_template;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
