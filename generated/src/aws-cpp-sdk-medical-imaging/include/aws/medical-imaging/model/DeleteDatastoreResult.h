/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/DatastoreStatus.h>
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
  class DeleteDatastoreResult
  {
  public:
    AWS_MEDICALIMAGING_API DeleteDatastoreResult();
    AWS_MEDICALIMAGING_API DeleteDatastoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API DeleteDatastoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreId = value; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreId = std::move(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreId.assign(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline DeleteDatastoreResult& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline DeleteDatastoreResult& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline DeleteDatastoreResult& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p>The data store status.</p>
     */
    inline const DatastoreStatus& GetDatastoreStatus() const{ return m_datastoreStatus; }

    /**
     * <p>The data store status.</p>
     */
    inline void SetDatastoreStatus(const DatastoreStatus& value) { m_datastoreStatus = value; }

    /**
     * <p>The data store status.</p>
     */
    inline void SetDatastoreStatus(DatastoreStatus&& value) { m_datastoreStatus = std::move(value); }

    /**
     * <p>The data store status.</p>
     */
    inline DeleteDatastoreResult& WithDatastoreStatus(const DatastoreStatus& value) { SetDatastoreStatus(value); return *this;}

    /**
     * <p>The data store status.</p>
     */
    inline DeleteDatastoreResult& WithDatastoreStatus(DatastoreStatus&& value) { SetDatastoreStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteDatastoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteDatastoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteDatastoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_datastoreId;

    DatastoreStatus m_datastoreStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
