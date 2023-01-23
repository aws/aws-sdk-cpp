/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServiceTemplate.h>
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
  class GetServiceTemplateResult
  {
  public:
    AWS_PROTON_API GetServiceTemplateResult();
    AWS_PROTON_API GetServiceTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetServiceTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the requested service template.</p>
     */
    inline const ServiceTemplate& GetServiceTemplate() const{ return m_serviceTemplate; }

    /**
     * <p>The detailed data of the requested service template.</p>
     */
    inline void SetServiceTemplate(const ServiceTemplate& value) { m_serviceTemplate = value; }

    /**
     * <p>The detailed data of the requested service template.</p>
     */
    inline void SetServiceTemplate(ServiceTemplate&& value) { m_serviceTemplate = std::move(value); }

    /**
     * <p>The detailed data of the requested service template.</p>
     */
    inline GetServiceTemplateResult& WithServiceTemplate(const ServiceTemplate& value) { SetServiceTemplate(value); return *this;}

    /**
     * <p>The detailed data of the requested service template.</p>
     */
    inline GetServiceTemplateResult& WithServiceTemplate(ServiceTemplate&& value) { SetServiceTemplate(std::move(value)); return *this;}

  private:

    ServiceTemplate m_serviceTemplate;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
