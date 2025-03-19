/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ResourceIdentifier.h>
#include <aws/resource-groups/model/QueryError.h>
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
namespace ResourceGroups
{
namespace Model
{
  class SearchResourcesResult
  {
  public:
    AWS_RESOURCEGROUPS_API SearchResourcesResult() = default;
    AWS_RESOURCEGROUPS_API SearchResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API SearchResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARNs and resource types of resources that are members of the group that
     * you specified.</p>
     */
    inline const Aws::Vector<ResourceIdentifier>& GetResourceIdentifiers() const { return m_resourceIdentifiers; }
    template<typename ResourceIdentifiersT = Aws::Vector<ResourceIdentifier>>
    void SetResourceIdentifiers(ResourceIdentifiersT&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = std::forward<ResourceIdentifiersT>(value); }
    template<typename ResourceIdentifiersT = Aws::Vector<ResourceIdentifier>>
    SearchResourcesResult& WithResourceIdentifiers(ResourceIdentifiersT&& value) { SetResourceIdentifiers(std::forward<ResourceIdentifiersT>(value)); return *this;}
    template<typename ResourceIdentifiersT = ResourceIdentifier>
    SearchResourcesResult& AddResourceIdentifiers(ResourceIdentifiersT&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.emplace_back(std::forward<ResourceIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>QueryError</code> objects. Each error contains an
     * <code>ErrorCode</code> and <code>Message</code>.</p> <p>Possible values for
     * <code>ErrorCode</code>:</p> <ul> <li> <p>
     * <code>CLOUDFORMATION_STACK_INACTIVE</code> </p> </li> <li> <p>
     * <code>CLOUDFORMATION_STACK_NOT_EXISTING</code> </p> </li> <li> <p>
     * <code>CLOUDFORMATION_STACK_UNASSUMABLE_ROLE </code> </p> </li> </ul>
     */
    inline const Aws::Vector<QueryError>& GetQueryErrors() const { return m_queryErrors; }
    template<typename QueryErrorsT = Aws::Vector<QueryError>>
    void SetQueryErrors(QueryErrorsT&& value) { m_queryErrorsHasBeenSet = true; m_queryErrors = std::forward<QueryErrorsT>(value); }
    template<typename QueryErrorsT = Aws::Vector<QueryError>>
    SearchResourcesResult& WithQueryErrors(QueryErrorsT&& value) { SetQueryErrors(std::forward<QueryErrorsT>(value)); return *this;}
    template<typename QueryErrorsT = QueryError>
    SearchResourcesResult& AddQueryErrors(QueryErrorsT&& value) { m_queryErrorsHasBeenSet = true; m_queryErrors.emplace_back(std::forward<QueryErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceIdentifier> m_resourceIdentifiers;
    bool m_resourceIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<QueryError> m_queryErrors;
    bool m_queryErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
