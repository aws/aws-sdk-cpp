/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/MetadataCopies.h>
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
   * <p>Copy source image set information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/CopySourceImageSetInformation">AWS
   * API Reference</a></p>
   */
  class CopySourceImageSetInformation
  {
  public:
    AWS_MEDICALIMAGING_API CopySourceImageSetInformation();
    AWS_MEDICALIMAGING_API CopySourceImageSetInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API CopySourceImageSetInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latest version identifier for the source image set.</p>
     */
    inline const Aws::String& GetLatestVersionId() const{ return m_latestVersionId; }
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }
    inline void SetLatestVersionId(const Aws::String& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = value; }
    inline void SetLatestVersionId(Aws::String&& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = std::move(value); }
    inline void SetLatestVersionId(const char* value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId.assign(value); }
    inline CopySourceImageSetInformation& WithLatestVersionId(const Aws::String& value) { SetLatestVersionId(value); return *this;}
    inline CopySourceImageSetInformation& WithLatestVersionId(Aws::String&& value) { SetLatestVersionId(std::move(value)); return *this;}
    inline CopySourceImageSetInformation& WithLatestVersionId(const char* value) { SetLatestVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains <code>MetadataCopies</code> structure and wraps information related
     * to specific copy use cases. For example, when copying subsets.</p>
     */
    inline const MetadataCopies& GetDICOMCopies() const{ return m_dICOMCopies; }
    inline bool DICOMCopiesHasBeenSet() const { return m_dICOMCopiesHasBeenSet; }
    inline void SetDICOMCopies(const MetadataCopies& value) { m_dICOMCopiesHasBeenSet = true; m_dICOMCopies = value; }
    inline void SetDICOMCopies(MetadataCopies&& value) { m_dICOMCopiesHasBeenSet = true; m_dICOMCopies = std::move(value); }
    inline CopySourceImageSetInformation& WithDICOMCopies(const MetadataCopies& value) { SetDICOMCopies(value); return *this;}
    inline CopySourceImageSetInformation& WithDICOMCopies(MetadataCopies&& value) { SetDICOMCopies(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_latestVersionId;
    bool m_latestVersionIdHasBeenSet = false;

    MetadataCopies m_dICOMCopies;
    bool m_dICOMCopiesHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
