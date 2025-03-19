/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
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
  class AssociateAttributeGroupResult
  {
  public:
    AWS_APPREGISTRY_API AssociateAttributeGroupResult() = default;
    AWS_APPREGISTRY_API AssociateAttributeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API AssociateAttributeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    AssociateAttributeGroupResult& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the attribute group that contains the
     * application's new attributes.</p>
     */
    inline const Aws::String& GetAttributeGroupArn() const { return m_attributeGroupArn; }
    template<typename AttributeGroupArnT = Aws::String>
    void SetAttributeGroupArn(AttributeGroupArnT&& value) { m_attributeGroupArnHasBeenSet = true; m_attributeGroupArn = std::forward<AttributeGroupArnT>(value); }
    template<typename AttributeGroupArnT = Aws::String>
    AssociateAttributeGroupResult& WithAttributeGroupArn(AttributeGroupArnT&& value) { SetAttributeGroupArn(std::forward<AttributeGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateAttributeGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_attributeGroupArn;
    bool m_attributeGroupArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
