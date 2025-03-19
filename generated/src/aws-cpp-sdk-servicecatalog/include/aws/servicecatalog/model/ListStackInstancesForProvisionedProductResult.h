/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/StackInstance.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListStackInstancesForProvisionedProductResult
  {
  public:
    AWS_SERVICECATALOG_API ListStackInstancesForProvisionedProductResult() = default;
    AWS_SERVICECATALOG_API ListStackInstancesForProvisionedProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListStackInstancesForProvisionedProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of stack instances.</p>
     */
    inline const Aws::Vector<StackInstance>& GetStackInstances() const { return m_stackInstances; }
    template<typename StackInstancesT = Aws::Vector<StackInstance>>
    void SetStackInstances(StackInstancesT&& value) { m_stackInstancesHasBeenSet = true; m_stackInstances = std::forward<StackInstancesT>(value); }
    template<typename StackInstancesT = Aws::Vector<StackInstance>>
    ListStackInstancesForProvisionedProductResult& WithStackInstances(StackInstancesT&& value) { SetStackInstances(std::forward<StackInstancesT>(value)); return *this;}
    template<typename StackInstancesT = StackInstance>
    ListStackInstancesForProvisionedProductResult& AddStackInstances(StackInstancesT&& value) { m_stackInstancesHasBeenSet = true; m_stackInstances.emplace_back(std::forward<StackInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListStackInstancesForProvisionedProductResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStackInstancesForProvisionedProductResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackInstance> m_stackInstances;
    bool m_stackInstancesHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
