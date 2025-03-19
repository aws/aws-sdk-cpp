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
    AWS_MEDICALIMAGING_API CopyImageSetResult() = default;
    AWS_MEDICALIMAGING_API CopyImageSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API CopyImageSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const { return m_datastoreId; }
    template<typename DatastoreIdT = Aws::String>
    void SetDatastoreId(DatastoreIdT&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::forward<DatastoreIdT>(value); }
    template<typename DatastoreIdT = Aws::String>
    CopyImageSetResult& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the source image set.</p>
     */
    inline const CopySourceImageSetProperties& GetSourceImageSetProperties() const { return m_sourceImageSetProperties; }
    template<typename SourceImageSetPropertiesT = CopySourceImageSetProperties>
    void SetSourceImageSetProperties(SourceImageSetPropertiesT&& value) { m_sourceImageSetPropertiesHasBeenSet = true; m_sourceImageSetProperties = std::forward<SourceImageSetPropertiesT>(value); }
    template<typename SourceImageSetPropertiesT = CopySourceImageSetProperties>
    CopyImageSetResult& WithSourceImageSetProperties(SourceImageSetPropertiesT&& value) { SetSourceImageSetProperties(std::forward<SourceImageSetPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the destination image set.</p>
     */
    inline const CopyDestinationImageSetProperties& GetDestinationImageSetProperties() const { return m_destinationImageSetProperties; }
    template<typename DestinationImageSetPropertiesT = CopyDestinationImageSetProperties>
    void SetDestinationImageSetProperties(DestinationImageSetPropertiesT&& value) { m_destinationImageSetPropertiesHasBeenSet = true; m_destinationImageSetProperties = std::forward<DestinationImageSetPropertiesT>(value); }
    template<typename DestinationImageSetPropertiesT = CopyDestinationImageSetProperties>
    CopyImageSetResult& WithDestinationImageSetProperties(DestinationImageSetPropertiesT&& value) { SetDestinationImageSetProperties(std::forward<DestinationImageSetPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CopyImageSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    CopySourceImageSetProperties m_sourceImageSetProperties;
    bool m_sourceImageSetPropertiesHasBeenSet = false;

    CopyDestinationImageSetProperties m_destinationImageSetProperties;
    bool m_destinationImageSetPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
