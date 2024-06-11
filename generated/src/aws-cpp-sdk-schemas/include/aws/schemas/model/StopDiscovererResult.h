/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/schemas/model/DiscovererState.h>
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
namespace Schemas
{
namespace Model
{
  class StopDiscovererResult
  {
  public:
    AWS_SCHEMAS_API StopDiscovererResult();
    AWS_SCHEMAS_API StopDiscovererResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API StopDiscovererResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererId() const{ return m_discovererId; }
    inline void SetDiscovererId(const Aws::String& value) { m_discovererId = value; }
    inline void SetDiscovererId(Aws::String&& value) { m_discovererId = std::move(value); }
    inline void SetDiscovererId(const char* value) { m_discovererId.assign(value); }
    inline StopDiscovererResult& WithDiscovererId(const Aws::String& value) { SetDiscovererId(value); return *this;}
    inline StopDiscovererResult& WithDiscovererId(Aws::String&& value) { SetDiscovererId(std::move(value)); return *this;}
    inline StopDiscovererResult& WithDiscovererId(const char* value) { SetDiscovererId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the discoverer.</p>
     */
    inline const DiscovererState& GetState() const{ return m_state; }
    inline void SetState(const DiscovererState& value) { m_state = value; }
    inline void SetState(DiscovererState&& value) { m_state = std::move(value); }
    inline StopDiscovererResult& WithState(const DiscovererState& value) { SetState(value); return *this;}
    inline StopDiscovererResult& WithState(DiscovererState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StopDiscovererResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StopDiscovererResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StopDiscovererResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_discovererId;

    DiscovererState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
