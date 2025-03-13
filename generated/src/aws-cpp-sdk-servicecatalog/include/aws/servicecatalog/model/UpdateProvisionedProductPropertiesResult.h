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
    AWS_SERVICECATALOG_API UpdateProvisionedProductPropertiesResult() = default;
    AWS_SERVICECATALOG_API UpdateProvisionedProductPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdateProvisionedProductPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The provisioned product identifier.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const { return m_provisionedProductId; }
    template<typename ProvisionedProductIdT = Aws::String>
    void SetProvisionedProductId(ProvisionedProductIdT&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::forward<ProvisionedProductIdT>(value); }
    template<typename ProvisionedProductIdT = Aws::String>
    UpdateProvisionedProductPropertiesResult& WithProvisionedProductId(ProvisionedProductIdT&& value) { SetProvisionedProductId(std::forward<ProvisionedProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains the properties updated.</p>
     */
    inline const Aws::Map<PropertyKey, Aws::String>& GetProvisionedProductProperties() const { return m_provisionedProductProperties; }
    template<typename ProvisionedProductPropertiesT = Aws::Map<PropertyKey, Aws::String>>
    void SetProvisionedProductProperties(ProvisionedProductPropertiesT&& value) { m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties = std::forward<ProvisionedProductPropertiesT>(value); }
    template<typename ProvisionedProductPropertiesT = Aws::Map<PropertyKey, Aws::String>>
    UpdateProvisionedProductPropertiesResult& WithProvisionedProductProperties(ProvisionedProductPropertiesT&& value) { SetProvisionedProductProperties(std::forward<ProvisionedProductPropertiesT>(value)); return *this;}
    inline UpdateProvisionedProductPropertiesResult& AddProvisionedProductProperties(PropertyKey key, Aws::String value) {
      m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The identifier of the record.</p>
     */
    inline const Aws::String& GetRecordId() const { return m_recordId; }
    template<typename RecordIdT = Aws::String>
    void SetRecordId(RecordIdT&& value) { m_recordIdHasBeenSet = true; m_recordId = std::forward<RecordIdT>(value); }
    template<typename RecordIdT = Aws::String>
    UpdateProvisionedProductPropertiesResult& WithRecordId(RecordIdT&& value) { SetRecordId(std::forward<RecordIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the request.</p>
     */
    inline RecordStatus GetStatus() const { return m_status; }
    inline void SetStatus(RecordStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateProvisionedProductPropertiesResult& WithStatus(RecordStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateProvisionedProductPropertiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::Map<PropertyKey, Aws::String> m_provisionedProductProperties;
    bool m_provisionedProductPropertiesHasBeenSet = false;

    Aws::String m_recordId;
    bool m_recordIdHasBeenSet = false;

    RecordStatus m_status{RecordStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
