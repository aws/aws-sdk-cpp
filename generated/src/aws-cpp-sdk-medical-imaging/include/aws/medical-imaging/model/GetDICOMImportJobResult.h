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
    AWS_MEDICALIMAGING_API GetDICOMImportJobResult() = default;
    AWS_MEDICALIMAGING_API GetDICOMImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API GetDICOMImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties of the import job.</p>
     */
    inline const DICOMImportJobProperties& GetJobProperties() const { return m_jobProperties; }
    template<typename JobPropertiesT = DICOMImportJobProperties>
    void SetJobProperties(JobPropertiesT&& value) { m_jobPropertiesHasBeenSet = true; m_jobProperties = std::forward<JobPropertiesT>(value); }
    template<typename JobPropertiesT = DICOMImportJobProperties>
    GetDICOMImportJobResult& WithJobProperties(JobPropertiesT&& value) { SetJobProperties(std::forward<JobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDICOMImportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DICOMImportJobProperties m_jobProperties;
    bool m_jobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
