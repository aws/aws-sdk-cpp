/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/model/DatastoreProperties.h>
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
namespace MedicalImaging
{
namespace Model
{
  class GetDatastoreResult
  {
  public:
    AWS_MEDICALIMAGING_API GetDatastoreResult() = default;
    AWS_MEDICALIMAGING_API GetDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API GetDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data store properties.</p>
     */
    inline const DatastoreProperties& GetDatastoreProperties() const { return m_datastoreProperties; }
    template<typename DatastorePropertiesT = DatastoreProperties>
    void SetDatastoreProperties(DatastorePropertiesT&& value) { m_datastorePropertiesHasBeenSet = true; m_datastoreProperties = std::forward<DatastorePropertiesT>(value); }
    template<typename DatastorePropertiesT = DatastoreProperties>
    GetDatastoreResult& WithDatastoreProperties(DatastorePropertiesT&& value) { SetDatastoreProperties(std::forward<DatastorePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDatastoreResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DatastoreProperties m_datastoreProperties;
    bool m_datastorePropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
