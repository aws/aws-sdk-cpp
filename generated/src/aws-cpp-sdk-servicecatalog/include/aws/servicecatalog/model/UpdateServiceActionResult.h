﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ServiceActionDetail.h>
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
  class UpdateServiceActionResult
  {
  public:
    AWS_SERVICECATALOG_API UpdateServiceActionResult();
    AWS_SERVICECATALOG_API UpdateServiceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdateServiceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Detailed information about the self-service action.</p>
     */
    inline const ServiceActionDetail& GetServiceActionDetail() const{ return m_serviceActionDetail; }

    /**
     * <p>Detailed information about the self-service action.</p>
     */
    inline void SetServiceActionDetail(const ServiceActionDetail& value) { m_serviceActionDetail = value; }

    /**
     * <p>Detailed information about the self-service action.</p>
     */
    inline void SetServiceActionDetail(ServiceActionDetail&& value) { m_serviceActionDetail = std::move(value); }

    /**
     * <p>Detailed information about the self-service action.</p>
     */
    inline UpdateServiceActionResult& WithServiceActionDetail(const ServiceActionDetail& value) { SetServiceActionDetail(value); return *this;}

    /**
     * <p>Detailed information about the self-service action.</p>
     */
    inline UpdateServiceActionResult& WithServiceActionDetail(ServiceActionDetail&& value) { SetServiceActionDetail(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateServiceActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateServiceActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateServiceActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceActionDetail m_serviceActionDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
