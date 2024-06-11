﻿/**
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
  class CreateEnvironmentTemplateVersionResult
  {
  public:
    AWS_PROTON_API CreateEnvironmentTemplateVersionResult();
    AWS_PROTON_API CreateEnvironmentTemplateVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CreateEnvironmentTemplateVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The environment template detail data that's returned by Proton.</p>
     */
    inline const EnvironmentTemplateVersion& GetEnvironmentTemplateVersion() const{ return m_environmentTemplateVersion; }
    inline void SetEnvironmentTemplateVersion(const EnvironmentTemplateVersion& value) { m_environmentTemplateVersion = value; }
    inline void SetEnvironmentTemplateVersion(EnvironmentTemplateVersion&& value) { m_environmentTemplateVersion = std::move(value); }
    inline CreateEnvironmentTemplateVersionResult& WithEnvironmentTemplateVersion(const EnvironmentTemplateVersion& value) { SetEnvironmentTemplateVersion(value); return *this;}
    inline CreateEnvironmentTemplateVersionResult& WithEnvironmentTemplateVersion(EnvironmentTemplateVersion&& value) { SetEnvironmentTemplateVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEnvironmentTemplateVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEnvironmentTemplateVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEnvironmentTemplateVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    EnvironmentTemplateVersion m_environmentTemplateVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
