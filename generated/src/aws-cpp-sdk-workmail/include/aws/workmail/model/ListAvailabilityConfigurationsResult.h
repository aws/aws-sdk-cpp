/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/AvailabilityConfiguration.h>
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
namespace WorkMail
{
namespace Model
{
  class ListAvailabilityConfigurationsResult
  {
  public:
    AWS_WORKMAIL_API ListAvailabilityConfigurationsResult() = default;
    AWS_WORKMAIL_API ListAvailabilityConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListAvailabilityConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of <code>AvailabilityConfiguration</code>'s that exist for the
     * specified WorkMail organization.</p>
     */
    inline const Aws::Vector<AvailabilityConfiguration>& GetAvailabilityConfigurations() const { return m_availabilityConfigurations; }
    template<typename AvailabilityConfigurationsT = Aws::Vector<AvailabilityConfiguration>>
    void SetAvailabilityConfigurations(AvailabilityConfigurationsT&& value) { m_availabilityConfigurationsHasBeenSet = true; m_availabilityConfigurations = std::forward<AvailabilityConfigurationsT>(value); }
    template<typename AvailabilityConfigurationsT = Aws::Vector<AvailabilityConfiguration>>
    ListAvailabilityConfigurationsResult& WithAvailabilityConfigurations(AvailabilityConfigurationsT&& value) { SetAvailabilityConfigurations(std::forward<AvailabilityConfigurationsT>(value)); return *this;}
    template<typename AvailabilityConfigurationsT = AvailabilityConfiguration>
    ListAvailabilityConfigurationsResult& AddAvailabilityConfigurations(AvailabilityConfigurationsT&& value) { m_availabilityConfigurationsHasBeenSet = true; m_availabilityConfigurations.emplace_back(std::forward<AvailabilityConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no further results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAvailabilityConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAvailabilityConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AvailabilityConfiguration> m_availabilityConfigurations;
    bool m_availabilityConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
