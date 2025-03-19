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
    AWS_SCHEMAS_API StopDiscovererResult() = default;
    AWS_SCHEMAS_API StopDiscovererResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API StopDiscovererResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererId() const { return m_discovererId; }
    template<typename DiscovererIdT = Aws::String>
    void SetDiscovererId(DiscovererIdT&& value) { m_discovererIdHasBeenSet = true; m_discovererId = std::forward<DiscovererIdT>(value); }
    template<typename DiscovererIdT = Aws::String>
    StopDiscovererResult& WithDiscovererId(DiscovererIdT&& value) { SetDiscovererId(std::forward<DiscovererIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the discoverer.</p>
     */
    inline DiscovererState GetState() const { return m_state; }
    inline void SetState(DiscovererState value) { m_stateHasBeenSet = true; m_state = value; }
    inline StopDiscovererResult& WithState(DiscovererState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopDiscovererResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_discovererId;
    bool m_discovererIdHasBeenSet = false;

    DiscovererState m_state{DiscovererState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
