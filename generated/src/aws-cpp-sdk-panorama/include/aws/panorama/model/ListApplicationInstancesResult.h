/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/ApplicationInstance.h>
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
namespace Panorama
{
namespace Model
{
  class ListApplicationInstancesResult
  {
  public:
    AWS_PANORAMA_API ListApplicationInstancesResult() = default;
    AWS_PANORAMA_API ListApplicationInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListApplicationInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of application instances.</p>
     */
    inline const Aws::Vector<ApplicationInstance>& GetApplicationInstances() const { return m_applicationInstances; }
    template<typename ApplicationInstancesT = Aws::Vector<ApplicationInstance>>
    void SetApplicationInstances(ApplicationInstancesT&& value) { m_applicationInstancesHasBeenSet = true; m_applicationInstances = std::forward<ApplicationInstancesT>(value); }
    template<typename ApplicationInstancesT = Aws::Vector<ApplicationInstance>>
    ListApplicationInstancesResult& WithApplicationInstances(ApplicationInstancesT&& value) { SetApplicationInstances(std::forward<ApplicationInstancesT>(value)); return *this;}
    template<typename ApplicationInstancesT = ApplicationInstance>
    ListApplicationInstancesResult& AddApplicationInstances(ApplicationInstancesT&& value) { m_applicationInstancesHasBeenSet = true; m_applicationInstances.emplace_back(std::forward<ApplicationInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationInstance> m_applicationInstances;
    bool m_applicationInstancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
