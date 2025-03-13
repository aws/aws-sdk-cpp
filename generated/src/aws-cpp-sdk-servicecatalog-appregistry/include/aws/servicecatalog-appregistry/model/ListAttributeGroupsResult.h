/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog-appregistry/model/AttributeGroupSummary.h>
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
namespace AppRegistry
{
namespace Model
{
  class ListAttributeGroupsResult
  {
  public:
    AWS_APPREGISTRY_API ListAttributeGroupsResult() = default;
    AWS_APPREGISTRY_API ListAttributeGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API ListAttributeGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This list of attribute groups.</p>
     */
    inline const Aws::Vector<AttributeGroupSummary>& GetAttributeGroups() const { return m_attributeGroups; }
    template<typename AttributeGroupsT = Aws::Vector<AttributeGroupSummary>>
    void SetAttributeGroups(AttributeGroupsT&& value) { m_attributeGroupsHasBeenSet = true; m_attributeGroups = std::forward<AttributeGroupsT>(value); }
    template<typename AttributeGroupsT = Aws::Vector<AttributeGroupSummary>>
    ListAttributeGroupsResult& WithAttributeGroups(AttributeGroupsT&& value) { SetAttributeGroups(std::forward<AttributeGroupsT>(value)); return *this;}
    template<typename AttributeGroupsT = AttributeGroupSummary>
    ListAttributeGroupsResult& AddAttributeGroups(AttributeGroupsT&& value) { m_attributeGroupsHasBeenSet = true; m_attributeGroups.emplace_back(std::forward<AttributeGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAttributeGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAttributeGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeGroupSummary> m_attributeGroups;
    bool m_attributeGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
