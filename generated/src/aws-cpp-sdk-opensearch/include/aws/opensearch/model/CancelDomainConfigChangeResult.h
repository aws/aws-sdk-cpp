/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/CancelledChangeProperty.h>
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
namespace OpenSearchService
{
namespace Model
{
  class CancelDomainConfigChangeResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API CancelDomainConfigChangeResult() = default;
    AWS_OPENSEARCHSERVICE_API CancelDomainConfigChangeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API CancelDomainConfigChangeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifiers of the changes that were cancelled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCancelledChangeIds() const { return m_cancelledChangeIds; }
    template<typename CancelledChangeIdsT = Aws::Vector<Aws::String>>
    void SetCancelledChangeIds(CancelledChangeIdsT&& value) { m_cancelledChangeIdsHasBeenSet = true; m_cancelledChangeIds = std::forward<CancelledChangeIdsT>(value); }
    template<typename CancelledChangeIdsT = Aws::Vector<Aws::String>>
    CancelDomainConfigChangeResult& WithCancelledChangeIds(CancelledChangeIdsT&& value) { SetCancelledChangeIds(std::forward<CancelledChangeIdsT>(value)); return *this;}
    template<typename CancelledChangeIdsT = Aws::String>
    CancelDomainConfigChangeResult& AddCancelledChangeIds(CancelledChangeIdsT&& value) { m_cancelledChangeIdsHasBeenSet = true; m_cancelledChangeIds.emplace_back(std::forward<CancelledChangeIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domain change properties that were cancelled.</p>
     */
    inline const Aws::Vector<CancelledChangeProperty>& GetCancelledChangeProperties() const { return m_cancelledChangeProperties; }
    template<typename CancelledChangePropertiesT = Aws::Vector<CancelledChangeProperty>>
    void SetCancelledChangeProperties(CancelledChangePropertiesT&& value) { m_cancelledChangePropertiesHasBeenSet = true; m_cancelledChangeProperties = std::forward<CancelledChangePropertiesT>(value); }
    template<typename CancelledChangePropertiesT = Aws::Vector<CancelledChangeProperty>>
    CancelDomainConfigChangeResult& WithCancelledChangeProperties(CancelledChangePropertiesT&& value) { SetCancelledChangeProperties(std::forward<CancelledChangePropertiesT>(value)); return *this;}
    template<typename CancelledChangePropertiesT = CancelledChangeProperty>
    CancelDomainConfigChangeResult& AddCancelledChangeProperties(CancelledChangePropertiesT&& value) { m_cancelledChangePropertiesHasBeenSet = true; m_cancelledChangeProperties.emplace_back(std::forward<CancelledChangePropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether or not the request was a dry run. If <code>True</code>, the changes
     * were not actually cancelled. </p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CancelDomainConfigChangeResult& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelDomainConfigChangeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_cancelledChangeIds;
    bool m_cancelledChangeIdsHasBeenSet = false;

    Aws::Vector<CancelledChangeProperty> m_cancelledChangeProperties;
    bool m_cancelledChangePropertiesHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
