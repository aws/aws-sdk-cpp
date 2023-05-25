/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/EnvironmentTemplate.h>
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
  class GetEnvironmentTemplateResult
  {
  public:
    AWS_PROTON_API GetEnvironmentTemplateResult();
    AWS_PROTON_API GetEnvironmentTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetEnvironmentTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the requested environment template.</p>
     */
    inline const EnvironmentTemplate& GetEnvironmentTemplate() const{ return m_environmentTemplate; }

    /**
     * <p>The detailed data of the requested environment template.</p>
     */
    inline void SetEnvironmentTemplate(const EnvironmentTemplate& value) { m_environmentTemplate = value; }

    /**
     * <p>The detailed data of the requested environment template.</p>
     */
    inline void SetEnvironmentTemplate(EnvironmentTemplate&& value) { m_environmentTemplate = std::move(value); }

    /**
     * <p>The detailed data of the requested environment template.</p>
     */
    inline GetEnvironmentTemplateResult& WithEnvironmentTemplate(const EnvironmentTemplate& value) { SetEnvironmentTemplate(value); return *this;}

    /**
     * <p>The detailed data of the requested environment template.</p>
     */
    inline GetEnvironmentTemplateResult& WithEnvironmentTemplate(EnvironmentTemplate&& value) { SetEnvironmentTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEnvironmentTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEnvironmentTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEnvironmentTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EnvironmentTemplate m_environmentTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
