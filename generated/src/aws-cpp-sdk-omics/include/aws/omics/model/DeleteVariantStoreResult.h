/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/StoreStatus.h>
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
namespace Omics
{
namespace Model
{
  class DeleteVariantStoreResult
  {
  public:
    AWS_OMICS_API DeleteVariantStoreResult();
    AWS_OMICS_API DeleteVariantStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API DeleteVariantStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The store's status.</p>
     */
    inline const StoreStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The store's status.</p>
     */
    inline void SetStatus(const StoreStatus& value) { m_status = value; }

    /**
     * <p>The store's status.</p>
     */
    inline void SetStatus(StoreStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The store's status.</p>
     */
    inline DeleteVariantStoreResult& WithStatus(const StoreStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The store's status.</p>
     */
    inline DeleteVariantStoreResult& WithStatus(StoreStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteVariantStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteVariantStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteVariantStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StoreStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
