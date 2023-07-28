/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/CopySourceImageSetProperties.h>
#include <aws/medical-imaging/model/CopyDestinationImageSetProperties.h>
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
  class CopyImageSetResult
  {
  public:
    AWS_MEDICALIMAGING_API CopyImageSetResult();
    AWS_MEDICALIMAGING_API CopyImageSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API CopyImageSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CopyImageSetResult& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline CopyImageSetResult& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline CopyImageSetResult& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p>The properties of the source image set.</p>
     */
    inline const CopySourceImageSetProperties& GetSourceImageSetProperties() const{ return m_sourceImageSetProperties; }

    /**
     * <p>The properties of the source image set.</p>
     */
    inline void SetSourceImageSetProperties(const CopySourceImageSetProperties& value) { m_sourceImageSetProperties = value; }

    /**
     * <p>The properties of the source image set.</p>
     */
    inline void SetSourceImageSetProperties(CopySourceImageSetProperties&& value) { m_sourceImageSetProperties = std::move(value); }

    /**
     * <p>The properties of the source image set.</p>
     */
    inline CopyImageSetResult& WithSourceImageSetProperties(const CopySourceImageSetProperties& value) { SetSourceImageSetProperties(value); return *this;}

    /**
     * <p>The properties of the source image set.</p>
     */
    inline CopyImageSetResult& WithSourceImageSetProperties(CopySourceImageSetProperties&& value) { SetSourceImageSetProperties(std::move(value)); return *this;}


    /**
     * <p>The properties of the destination image set.</p>
     */
    inline const CopyDestinationImageSetProperties& GetDestinationImageSetProperties() const{ return m_destinationImageSetProperties; }

    /**
     * <p>The properties of the destination image set.</p>
     */
    inline void SetDestinationImageSetProperties(const CopyDestinationImageSetProperties& value) { m_destinationImageSetProperties = value; }

    /**
     * <p>The properties of the destination image set.</p>
     */
    inline void SetDestinationImageSetProperties(CopyDestinationImageSetProperties&& value) { m_destinationImageSetProperties = std::move(value); }

    /**
     * <p>The properties of the destination image set.</p>
     */
    inline CopyImageSetResult& WithDestinationImageSetProperties(const CopyDestinationImageSetProperties& value) { SetDestinationImageSetProperties(value); return *this;}

    /**
     * <p>The properties of the destination image set.</p>
     */
    inline CopyImageSetResult& WithDestinationImageSetProperties(CopyDestinationImageSetProperties&& value) { SetDestinationImageSetProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CopyImageSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CopyImageSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CopyImageSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_datastoreId;

    CopySourceImageSetProperties m_sourceImageSetProperties;

    CopyDestinationImageSetProperties m_destinationImageSetProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
