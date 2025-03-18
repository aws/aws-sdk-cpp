/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/EntityDetail.h>
#include <aws/marketplace-catalog/model/BatchDescribeErrorDetail.h>
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
namespace MarketplaceCatalog
{
namespace Model
{
  class BatchDescribeEntitiesResult
  {
  public:
    AWS_MARKETPLACECATALOG_API BatchDescribeEntitiesResult() = default;
    AWS_MARKETPLACECATALOG_API BatchDescribeEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API BatchDescribeEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about each entity.</p>
     */
    inline const Aws::Map<Aws::String, EntityDetail>& GetEntityDetails() const { return m_entityDetails; }
    template<typename EntityDetailsT = Aws::Map<Aws::String, EntityDetail>>
    void SetEntityDetails(EntityDetailsT&& value) { m_entityDetailsHasBeenSet = true; m_entityDetails = std::forward<EntityDetailsT>(value); }
    template<typename EntityDetailsT = Aws::Map<Aws::String, EntityDetail>>
    BatchDescribeEntitiesResult& WithEntityDetails(EntityDetailsT&& value) { SetEntityDetails(std::forward<EntityDetailsT>(value)); return *this;}
    template<typename EntityDetailsKeyT = Aws::String, typename EntityDetailsValueT = EntityDetail>
    BatchDescribeEntitiesResult& AddEntityDetails(EntityDetailsKeyT&& key, EntityDetailsValueT&& value) {
      m_entityDetailsHasBeenSet = true; m_entityDetails.emplace(std::forward<EntityDetailsKeyT>(key), std::forward<EntityDetailsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of errors returned, with <code>EntityId</code> as the key and
     * <code>errorDetail</code> as the value.</p>
     */
    inline const Aws::Map<Aws::String, BatchDescribeErrorDetail>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Map<Aws::String, BatchDescribeErrorDetail>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Map<Aws::String, BatchDescribeErrorDetail>>
    BatchDescribeEntitiesResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsKeyT = Aws::String, typename ErrorsValueT = BatchDescribeErrorDetail>
    BatchDescribeEntitiesResult& AddErrors(ErrorsKeyT&& key, ErrorsValueT&& value) {
      m_errorsHasBeenSet = true; m_errors.emplace(std::forward<ErrorsKeyT>(key), std::forward<ErrorsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDescribeEntitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, EntityDetail> m_entityDetails;
    bool m_entityDetailsHasBeenSet = false;

    Aws::Map<Aws::String, BatchDescribeErrorDetail> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
