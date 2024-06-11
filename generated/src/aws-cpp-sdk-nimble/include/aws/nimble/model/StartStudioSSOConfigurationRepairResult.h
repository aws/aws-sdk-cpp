﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/Studio.h>
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
namespace NimbleStudio
{
namespace Model
{
  class StartStudioSSOConfigurationRepairResult
  {
  public:
    AWS_NIMBLESTUDIO_API StartStudioSSOConfigurationRepairResult();
    AWS_NIMBLESTUDIO_API StartStudioSSOConfigurationRepairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API StartStudioSSOConfigurationRepairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a studio.</p>
     */
    inline const Studio& GetStudio() const{ return m_studio; }
    inline void SetStudio(const Studio& value) { m_studio = value; }
    inline void SetStudio(Studio&& value) { m_studio = std::move(value); }
    inline StartStudioSSOConfigurationRepairResult& WithStudio(const Studio& value) { SetStudio(value); return *this;}
    inline StartStudioSSOConfigurationRepairResult& WithStudio(Studio&& value) { SetStudio(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartStudioSSOConfigurationRepairResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartStudioSSOConfigurationRepairResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartStudioSSOConfigurationRepairResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Studio m_studio;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
