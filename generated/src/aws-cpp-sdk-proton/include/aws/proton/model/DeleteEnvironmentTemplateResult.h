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
  class DeleteEnvironmentTemplateResult
  {
  public:
    AWS_PROTON_API DeleteEnvironmentTemplateResult();
    AWS_PROTON_API DeleteEnvironmentTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API DeleteEnvironmentTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the environment template being deleted.</p>
     */
    inline const EnvironmentTemplate& GetEnvironmentTemplate() const{ return m_environmentTemplate; }

    /**
     * <p>The detailed data of the environment template being deleted.</p>
     */
    inline void SetEnvironmentTemplate(const EnvironmentTemplate& value) { m_environmentTemplate = value; }

    /**
     * <p>The detailed data of the environment template being deleted.</p>
     */
    inline void SetEnvironmentTemplate(EnvironmentTemplate&& value) { m_environmentTemplate = std::move(value); }

    /**
     * <p>The detailed data of the environment template being deleted.</p>
     */
    inline DeleteEnvironmentTemplateResult& WithEnvironmentTemplate(const EnvironmentTemplate& value) { SetEnvironmentTemplate(value); return *this;}

    /**
     * <p>The detailed data of the environment template being deleted.</p>
     */
    inline DeleteEnvironmentTemplateResult& WithEnvironmentTemplate(EnvironmentTemplate&& value) { SetEnvironmentTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteEnvironmentTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteEnvironmentTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteEnvironmentTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EnvironmentTemplate m_environmentTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
