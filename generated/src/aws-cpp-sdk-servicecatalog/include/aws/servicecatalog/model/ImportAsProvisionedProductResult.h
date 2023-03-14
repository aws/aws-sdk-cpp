/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/RecordDetail.h>
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
  class ImportAsProvisionedProductResult
  {
  public:
    AWS_SERVICECATALOG_API ImportAsProvisionedProductResult();
    AWS_SERVICECATALOG_API ImportAsProvisionedProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ImportAsProvisionedProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const RecordDetail& GetRecordDetail() const{ return m_recordDetail; }

    
    inline void SetRecordDetail(const RecordDetail& value) { m_recordDetail = value; }

    
    inline void SetRecordDetail(RecordDetail&& value) { m_recordDetail = std::move(value); }

    
    inline ImportAsProvisionedProductResult& WithRecordDetail(const RecordDetail& value) { SetRecordDetail(value); return *this;}

    
    inline ImportAsProvisionedProductResult& WithRecordDetail(RecordDetail&& value) { SetRecordDetail(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ImportAsProvisionedProductResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ImportAsProvisionedProductResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ImportAsProvisionedProductResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RecordDetail m_recordDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
