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
    AWS_MEDICALIMAGING_API GetDatastoreResult();
    AWS_MEDICALIMAGING_API GetDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API GetDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The data store properties.</p>
     */
    inline const DatastoreProperties& GetDatastoreProperties() const{ return m_datastoreProperties; }

    /**
     * <p>The data store properties.</p>
     */
    inline void SetDatastoreProperties(const DatastoreProperties& value) { m_datastoreProperties = value; }

    /**
     * <p>The data store properties.</p>
     */
    inline void SetDatastoreProperties(DatastoreProperties&& value) { m_datastoreProperties = std::move(value); }

    /**
     * <p>The data store properties.</p>
     */
    inline GetDatastoreResult& WithDatastoreProperties(const DatastoreProperties& value) { SetDatastoreProperties(value); return *this;}

    /**
     * <p>The data store properties.</p>
     */
    inline GetDatastoreResult& WithDatastoreProperties(DatastoreProperties&& value) { SetDatastoreProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDatastoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDatastoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDatastoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DatastoreProperties m_datastoreProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
