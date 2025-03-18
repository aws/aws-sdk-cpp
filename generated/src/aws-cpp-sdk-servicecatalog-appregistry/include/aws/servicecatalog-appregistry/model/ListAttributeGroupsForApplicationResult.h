/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog-appregistry/model/AttributeGroupDetails.h>
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
  class ListAttributeGroupsForApplicationResult
  {
  public:
    AWS_APPREGISTRY_API ListAttributeGroupsForApplicationResult() = default;
    AWS_APPREGISTRY_API ListAttributeGroupsForApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API ListAttributeGroupsForApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The details related to a specific attribute group. </p>
     */
    inline const Aws::Vector<AttributeGroupDetails>& GetAttributeGroupsDetails() const { return m_attributeGroupsDetails; }
    template<typename AttributeGroupsDetailsT = Aws::Vector<AttributeGroupDetails>>
    void SetAttributeGroupsDetails(AttributeGroupsDetailsT&& value) { m_attributeGroupsDetailsHasBeenSet = true; m_attributeGroupsDetails = std::forward<AttributeGroupsDetailsT>(value); }
    template<typename AttributeGroupsDetailsT = Aws::Vector<AttributeGroupDetails>>
    ListAttributeGroupsForApplicationResult& WithAttributeGroupsDetails(AttributeGroupsDetailsT&& value) { SetAttributeGroupsDetails(std::forward<AttributeGroupsDetailsT>(value)); return *this;}
    template<typename AttributeGroupsDetailsT = AttributeGroupDetails>
    ListAttributeGroupsForApplicationResult& AddAttributeGroupsDetails(AttributeGroupsDetailsT&& value) { m_attributeGroupsDetailsHasBeenSet = true; m_attributeGroupsDetails.emplace_back(std::forward<AttributeGroupsDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next page of results after a previous API
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAttributeGroupsForApplicationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAttributeGroupsForApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeGroupDetails> m_attributeGroupsDetails;
    bool m_attributeGroupsDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
