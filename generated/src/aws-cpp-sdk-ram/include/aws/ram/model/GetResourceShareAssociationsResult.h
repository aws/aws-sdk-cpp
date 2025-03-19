/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareAssociation.h>
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
namespace RAM
{
namespace Model
{
  class GetResourceShareAssociationsResult
  {
  public:
    AWS_RAM_API GetResourceShareAssociationsResult() = default;
    AWS_RAM_API GetResourceShareAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API GetResourceShareAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that contain the details about the associations.</p>
     */
    inline const Aws::Vector<ResourceShareAssociation>& GetResourceShareAssociations() const { return m_resourceShareAssociations; }
    template<typename ResourceShareAssociationsT = Aws::Vector<ResourceShareAssociation>>
    void SetResourceShareAssociations(ResourceShareAssociationsT&& value) { m_resourceShareAssociationsHasBeenSet = true; m_resourceShareAssociations = std::forward<ResourceShareAssociationsT>(value); }
    template<typename ResourceShareAssociationsT = Aws::Vector<ResourceShareAssociation>>
    GetResourceShareAssociationsResult& WithResourceShareAssociations(ResourceShareAssociationsT&& value) { SetResourceShareAssociations(std::forward<ResourceShareAssociationsT>(value)); return *this;}
    template<typename ResourceShareAssociationsT = ResourceShareAssociation>
    GetResourceShareAssociationsResult& AddResourceShareAssociations(ResourceShareAssociationsT&& value) { m_resourceShareAssociationsHasBeenSet = true; m_resourceShareAssociations.emplace_back(std::forward<ResourceShareAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetResourceShareAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceShareAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceShareAssociation> m_resourceShareAssociations;
    bool m_resourceShareAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
