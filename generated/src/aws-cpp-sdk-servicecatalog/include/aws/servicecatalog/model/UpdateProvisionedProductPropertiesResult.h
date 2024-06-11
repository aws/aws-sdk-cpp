/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/RecordStatus.h>
#include <aws/servicecatalog/model/PropertyKey.h>
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
  class UpdateProvisionedProductPropertiesResult
  {
  public:
    AWS_SERVICECATALOG_API UpdateProvisionedProductPropertiesResult();
    AWS_SERVICECATALOG_API UpdateProvisionedProductPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdateProvisionedProductPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The provisioned product identifier.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductId = value; }
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductId = std::move(value); }
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductId.assign(value); }
    inline UpdateProvisionedProductPropertiesResult& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}
    inline UpdateProvisionedProductPropertiesResult& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(std::move(value)); return *this;}
    inline UpdateProvisionedProductPropertiesResult& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline const Aws::Map<PropertyKey, Aws::String>& GetProvisionedProductProperties() const{ return m_provisionedProductProperties; }
    inline void SetProvisionedProductProperties(const Aws::Map<PropertyKey, Aws::String>& value) { m_provisionedProductProperties = value; }
    inline void SetProvisionedProductProperties(Aws::Map<PropertyKey, Aws::String>&& value) { m_provisionedProductProperties = std::move(value); }
    inline UpdateProvisionedProductPropertiesResult& WithProvisionedProductProperties(const Aws::Map<PropertyKey, Aws::String>& value) { SetProvisionedProductProperties(value); return *this;}
    inline UpdateProvisionedProductPropertiesResult& WithProvisionedProductProperties(Aws::Map<PropertyKey, Aws::String>&& value) { SetProvisionedProductProperties(std::move(value)); return *this;}
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(const PropertyKey& key, const Aws::String& value) { m_provisionedProductProperties.emplace(key, value); return *this; }
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(PropertyKey&& key, const Aws::String& value) { m_provisionedProductProperties.emplace(std::move(key), value); return *this; }
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(const PropertyKey& key, Aws::String&& value) { m_provisionedProductProperties.emplace(key, std::move(value)); return *this; }
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(PropertyKey&& key, Aws::String&& value) { m_provisionedProductProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(PropertyKey&& key, const char* value) { m_provisionedProductProperties.emplace(std::move(key), value); return *this; }
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(const PropertyKey& key, const char* value) { m_provisionedProductProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the record.</p>
     */
    inline const Aws::String& GetRecordId() const{ return m_recordId; }
    inline void SetRecordId(const Aws::String& value) { m_recordId = value; }
    inline void SetRecordId(Aws::String&& value) { m_recordId = std::move(value); }
    inline void SetRecordId(const char* value) { m_recordId.assign(value); }
    inline UpdateProvisionedProductPropertiesResult& WithRecordId(const Aws::String& value) { SetRecordId(value); return *this;}
    inline UpdateProvisionedProductPropertiesResult& WithRecordId(Aws::String&& value) { SetRecordId(std::move(value)); return *this;}
    inline UpdateProvisionedProductPropertiesResult& WithRecordId(const char* value) { SetRecordId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the request.</p>
     */
    inline const RecordStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RecordStatus& value) { m_status = value; }
    inline void SetStatus(RecordStatus&& value) { m_status = std::move(value); }
    inline UpdateProvisionedProductPropertiesResult& WithStatus(const RecordStatus& value) { SetStatus(value); return *this;}
    inline UpdateProvisionedProductPropertiesResult& WithStatus(RecordStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateProvisionedProductPropertiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateProvisionedProductPropertiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateProvisionedProductPropertiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_provisionedProductId;

    Aws::Map<PropertyKey, Aws::String> m_provisionedProductProperties;

    Aws::String m_recordId;

    RecordStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
