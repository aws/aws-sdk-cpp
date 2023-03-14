/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServiceTemplate.h>
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
namespace Proton
{
namespace Model
{
  class CreateServiceTemplateResult
  {
  public:
    AWS_PROTON_API CreateServiceTemplateResult();
    AWS_PROTON_API CreateServiceTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CreateServiceTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service template detail data that's returned by Proton.</p>
     */
    inline const ServiceTemplate& GetServiceTemplate() const{ return m_serviceTemplate; }

    /**
     * <p>The service template detail data that's returned by Proton.</p>
     */
    inline void SetServiceTemplate(const ServiceTemplate& value) { m_serviceTemplate = value; }

    /**
     * <p>The service template detail data that's returned by Proton.</p>
     */
    inline void SetServiceTemplate(ServiceTemplate&& value) { m_serviceTemplate = std::move(value); }

    /**
     * <p>The service template detail data that's returned by Proton.</p>
     */
    inline CreateServiceTemplateResult& WithServiceTemplate(const ServiceTemplate& value) { SetServiceTemplate(value); return *this;}

    /**
     * <p>The service template detail data that's returned by Proton.</p>
     */
    inline CreateServiceTemplateResult& WithServiceTemplate(ServiceTemplate&& value) { SetServiceTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateServiceTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateServiceTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateServiceTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceTemplate m_serviceTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
