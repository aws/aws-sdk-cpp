/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/model/DICOMUpdates.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MedicalImaging
{
namespace Model
{

  /**
   * <p>Contains DICOMUpdates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/MetadataUpdates">AWS
   * API Reference</a></p>
   */
  class MetadataUpdates
  {
  public:
    AWS_MEDICALIMAGING_API MetadataUpdates();
    AWS_MEDICALIMAGING_API MetadataUpdates(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API MetadataUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The object containing <code>removableAttributes</code> and
     * <code>updatableAttributes</code>.</p>
     */
    inline const DICOMUpdates& GetDICOMUpdates() const{ return m_dICOMUpdates; }
    inline bool DICOMUpdatesHasBeenSet() const { return m_dICOMUpdatesHasBeenSet; }
    inline void SetDICOMUpdates(const DICOMUpdates& value) { m_dICOMUpdatesHasBeenSet = true; m_dICOMUpdates = value; }
    inline void SetDICOMUpdates(DICOMUpdates&& value) { m_dICOMUpdatesHasBeenSet = true; m_dICOMUpdates = std::move(value); }
    inline MetadataUpdates& WithDICOMUpdates(const DICOMUpdates& value) { SetDICOMUpdates(value); return *this;}
    inline MetadataUpdates& WithDICOMUpdates(DICOMUpdates&& value) { SetDICOMUpdates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the previous image set version ID to revert the current image set
     * back to.</p>  <p>You must provide either <code>revertToVersionId</code> or
     * <code>DICOMUpdates</code> in your request. A <code>ValidationException</code>
     * error is thrown if both parameters are provided at the same time.</p> 
     */
    inline const Aws::String& GetRevertToVersionId() const{ return m_revertToVersionId; }
    inline bool RevertToVersionIdHasBeenSet() const { return m_revertToVersionIdHasBeenSet; }
    inline void SetRevertToVersionId(const Aws::String& value) { m_revertToVersionIdHasBeenSet = true; m_revertToVersionId = value; }
    inline void SetRevertToVersionId(Aws::String&& value) { m_revertToVersionIdHasBeenSet = true; m_revertToVersionId = std::move(value); }
    inline void SetRevertToVersionId(const char* value) { m_revertToVersionIdHasBeenSet = true; m_revertToVersionId.assign(value); }
    inline MetadataUpdates& WithRevertToVersionId(const Aws::String& value) { SetRevertToVersionId(value); return *this;}
    inline MetadataUpdates& WithRevertToVersionId(Aws::String&& value) { SetRevertToVersionId(std::move(value)); return *this;}
    inline MetadataUpdates& WithRevertToVersionId(const char* value) { SetRevertToVersionId(value); return *this;}
    ///@}
  private:

    DICOMUpdates m_dICOMUpdates;
    bool m_dICOMUpdatesHasBeenSet = false;

    Aws::String m_revertToVersionId;
    bool m_revertToVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
