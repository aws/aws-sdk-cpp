/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/RecordDetail.h>
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
  class ProvisionProductResult
  {
  public:
    AWS_SERVICECATALOG_API ProvisionProductResult();
    AWS_SERVICECATALOG_API ProvisionProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ProvisionProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the result of provisioning the product.</p>
     */
    inline const RecordDetail& GetRecordDetail() const{ return m_recordDetail; }

    /**
     * <p>Information about the result of provisioning the product.</p>
     */
    inline void SetRecordDetail(const RecordDetail& value) { m_recordDetail = value; }

    /**
     * <p>Information about the result of provisioning the product.</p>
     */
    inline void SetRecordDetail(RecordDetail&& value) { m_recordDetail = std::move(value); }

    /**
     * <p>Information about the result of provisioning the product.</p>
     */
    inline ProvisionProductResult& WithRecordDetail(const RecordDetail& value) { SetRecordDetail(value); return *this;}

    /**
     * <p>Information about the result of provisioning the product.</p>
     */
    inline ProvisionProductResult& WithRecordDetail(RecordDetail&& value) { SetRecordDetail(std::move(value)); return *this;}

  private:

    RecordDetail m_recordDetail;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
