/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/EnvironmentTemplateVersion.h>
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
  class GetEnvironmentTemplateVersionResult
  {
  public:
    AWS_PROTON_API GetEnvironmentTemplateVersionResult();
    AWS_PROTON_API GetEnvironmentTemplateVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetEnvironmentTemplateVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the requested environment template version.</p>
     */
    inline const EnvironmentTemplateVersion& GetEnvironmentTemplateVersion() const{ return m_environmentTemplateVersion; }

    /**
     * <p>The detailed data of the requested environment template version.</p>
     */
    inline void SetEnvironmentTemplateVersion(const EnvironmentTemplateVersion& value) { m_environmentTemplateVersion = value; }

    /**
     * <p>The detailed data of the requested environment template version.</p>
     */
    inline void SetEnvironmentTemplateVersion(EnvironmentTemplateVersion&& value) { m_environmentTemplateVersion = std::move(value); }

    /**
     * <p>The detailed data of the requested environment template version.</p>
     */
    inline GetEnvironmentTemplateVersionResult& WithEnvironmentTemplateVersion(const EnvironmentTemplateVersion& value) { SetEnvironmentTemplateVersion(value); return *this;}

    /**
     * <p>The detailed data of the requested environment template version.</p>
     */
    inline GetEnvironmentTemplateVersionResult& WithEnvironmentTemplateVersion(EnvironmentTemplateVersion&& value) { SetEnvironmentTemplateVersion(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEnvironmentTemplateVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEnvironmentTemplateVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEnvironmentTemplateVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EnvironmentTemplateVersion m_environmentTemplateVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
