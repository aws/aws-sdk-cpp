/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/model/DICOMImportJobProperties.h>
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
  class GetDICOMImportJobResult
  {
  public:
    AWS_MEDICALIMAGING_API GetDICOMImportJobResult();
    AWS_MEDICALIMAGING_API GetDICOMImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API GetDICOMImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the import job.</p>
     */
    inline const DICOMImportJobProperties& GetJobProperties() const{ return m_jobProperties; }

    /**
     * <p>The properties of the import job.</p>
     */
    inline void SetJobProperties(const DICOMImportJobProperties& value) { m_jobProperties = value; }

    /**
     * <p>The properties of the import job.</p>
     */
    inline void SetJobProperties(DICOMImportJobProperties&& value) { m_jobProperties = std::move(value); }

    /**
     * <p>The properties of the import job.</p>
     */
    inline GetDICOMImportJobResult& WithJobProperties(const DICOMImportJobProperties& value) { SetJobProperties(value); return *this;}

    /**
     * <p>The properties of the import job.</p>
     */
    inline GetDICOMImportJobResult& WithJobProperties(DICOMImportJobProperties&& value) { SetJobProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDICOMImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDICOMImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDICOMImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DICOMImportJobProperties m_jobProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
