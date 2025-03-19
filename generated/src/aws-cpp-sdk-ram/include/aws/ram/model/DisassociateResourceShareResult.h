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
  class DisassociateResourceShareResult
  {
  public:
    AWS_RAM_API DisassociateResourceShareResult() = default;
    AWS_RAM_API DisassociateResourceShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API DisassociateResourceShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects with information about the updated associations for this
     * resource share.</p>
     */
    inline const Aws::Vector<ResourceShareAssociation>& GetResourceShareAssociations() const { return m_resourceShareAssociations; }
    template<typename ResourceShareAssociationsT = Aws::Vector<ResourceShareAssociation>>
    void SetResourceShareAssociations(ResourceShareAssociationsT&& value) { m_resourceShareAssociationsHasBeenSet = true; m_resourceShareAssociations = std::forward<ResourceShareAssociationsT>(value); }
    template<typename ResourceShareAssociationsT = Aws::Vector<ResourceShareAssociation>>
    DisassociateResourceShareResult& WithResourceShareAssociations(ResourceShareAssociationsT&& value) { SetResourceShareAssociations(std::forward<ResourceShareAssociationsT>(value)); return *this;}
    template<typename ResourceShareAssociationsT = ResourceShareAssociation>
    DisassociateResourceShareResult& AddResourceShareAssociations(ResourceShareAssociationsT&& value) { m_resourceShareAssociationsHasBeenSet = true; m_resourceShareAssociations.emplace_back(std::forward<ResourceShareAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    DisassociateResourceShareResult& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateResourceShareResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceShareAssociation> m_resourceShareAssociations;
    bool m_resourceShareAssociationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
