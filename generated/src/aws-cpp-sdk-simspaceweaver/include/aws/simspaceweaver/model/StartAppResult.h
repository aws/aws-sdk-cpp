﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
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
namespace SimSpaceWeaver
{
namespace Model
{
  class StartAppResult
  {
  public:
    AWS_SIMSPACEWEAVER_API StartAppResult();
    AWS_SIMSPACEWEAVER_API StartAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIMSPACEWEAVER_API StartAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the domain of the app.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline void SetDomain(const Aws::String& value) { m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domain.assign(value); }
    inline StartAppResult& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline StartAppResult& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline StartAppResult& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline StartAppResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartAppResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartAppResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline const Aws::String& GetSimulation() const{ return m_simulation; }
    inline void SetSimulation(const Aws::String& value) { m_simulation = value; }
    inline void SetSimulation(Aws::String&& value) { m_simulation = std::move(value); }
    inline void SetSimulation(const char* value) { m_simulation.assign(value); }
    inline StartAppResult& WithSimulation(const Aws::String& value) { SetSimulation(value); return *this;}
    inline StartAppResult& WithSimulation(Aws::String&& value) { SetSimulation(std::move(value)); return *this;}
    inline StartAppResult& WithSimulation(const char* value) { SetSimulation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;

    Aws::String m_name;

    Aws::String m_simulation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
