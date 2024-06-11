﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/Eula.h>
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
  class GetEulaResult
  {
  public:
    AWS_NIMBLESTUDIO_API GetEulaResult();
    AWS_NIMBLESTUDIO_API GetEulaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API GetEulaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The EULA.</p>
     */
    inline const Eula& GetEula() const{ return m_eula; }
    inline void SetEula(const Eula& value) { m_eula = value; }
    inline void SetEula(Eula&& value) { m_eula = std::move(value); }
    inline GetEulaResult& WithEula(const Eula& value) { SetEula(value); return *this;}
    inline GetEulaResult& WithEula(Eula&& value) { SetEula(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEulaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEulaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEulaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Eula m_eula;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
