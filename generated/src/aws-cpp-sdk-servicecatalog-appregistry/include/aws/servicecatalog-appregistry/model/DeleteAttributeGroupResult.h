/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/AttributeGroupSummary.h>
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
namespace AppRegistry
{
namespace Model
{
  class DeleteAttributeGroupResult
  {
  public:
    AWS_APPREGISTRY_API DeleteAttributeGroupResult() = default;
    AWS_APPREGISTRY_API DeleteAttributeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API DeleteAttributeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the deleted attribute group.</p>
     */
    inline const AttributeGroupSummary& GetAttributeGroup() const { return m_attributeGroup; }
    template<typename AttributeGroupT = AttributeGroupSummary>
    void SetAttributeGroup(AttributeGroupT&& value) { m_attributeGroupHasBeenSet = true; m_attributeGroup = std::forward<AttributeGroupT>(value); }
    template<typename AttributeGroupT = AttributeGroupSummary>
    DeleteAttributeGroupResult& WithAttributeGroup(AttributeGroupT&& value) { SetAttributeGroup(std::forward<AttributeGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteAttributeGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AttributeGroupSummary m_attributeGroup;
    bool m_attributeGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
