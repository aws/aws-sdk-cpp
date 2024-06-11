﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/CopyProductStatus.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class DescribeCopyProductStatusResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeCopyProductStatusResult();
    AWS_SERVICECATALOG_API DescribeCopyProductStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeCopyProductStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the copy product operation.</p>
     */
    inline const CopyProductStatus& GetCopyProductStatus() const{ return m_copyProductStatus; }
    inline void SetCopyProductStatus(const CopyProductStatus& value) { m_copyProductStatus = value; }
    inline void SetCopyProductStatus(CopyProductStatus&& value) { m_copyProductStatus = std::move(value); }
    inline DescribeCopyProductStatusResult& WithCopyProductStatus(const CopyProductStatus& value) { SetCopyProductStatus(value); return *this;}
    inline DescribeCopyProductStatusResult& WithCopyProductStatus(CopyProductStatus&& value) { SetCopyProductStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the copied product.</p>
     */
    inline const Aws::String& GetTargetProductId() const{ return m_targetProductId; }
    inline void SetTargetProductId(const Aws::String& value) { m_targetProductId = value; }
    inline void SetTargetProductId(Aws::String&& value) { m_targetProductId = std::move(value); }
    inline void SetTargetProductId(const char* value) { m_targetProductId.assign(value); }
    inline DescribeCopyProductStatusResult& WithTargetProductId(const Aws::String& value) { SetTargetProductId(value); return *this;}
    inline DescribeCopyProductStatusResult& WithTargetProductId(Aws::String&& value) { SetTargetProductId(std::move(value)); return *this;}
    inline DescribeCopyProductStatusResult& WithTargetProductId(const char* value) { SetTargetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusDetail() const{ return m_statusDetail; }
    inline void SetStatusDetail(const Aws::String& value) { m_statusDetail = value; }
    inline void SetStatusDetail(Aws::String&& value) { m_statusDetail = std::move(value); }
    inline void SetStatusDetail(const char* value) { m_statusDetail.assign(value); }
    inline DescribeCopyProductStatusResult& WithStatusDetail(const Aws::String& value) { SetStatusDetail(value); return *this;}
    inline DescribeCopyProductStatusResult& WithStatusDetail(Aws::String&& value) { SetStatusDetail(std::move(value)); return *this;}
    inline DescribeCopyProductStatusResult& WithStatusDetail(const char* value) { SetStatusDetail(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCopyProductStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCopyProductStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCopyProductStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CopyProductStatus m_copyProductStatus;

    Aws::String m_targetProductId;

    Aws::String m_statusDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
