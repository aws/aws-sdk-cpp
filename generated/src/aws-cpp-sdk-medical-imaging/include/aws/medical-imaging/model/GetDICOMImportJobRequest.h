/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/MedicalImagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

  /**
   */
  class GetDICOMImportJobRequest : public MedicalImagingRequest
  {
  public:
    AWS_MEDICALIMAGING_API GetDICOMImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDICOMImportJob"; }

    AWS_MEDICALIMAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }
    inline GetDICOMImportJobRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline GetDICOMImportJobRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline GetDICOMImportJobRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import job identifier.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline GetDICOMImportJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetDICOMImportJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetDICOMImportJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
