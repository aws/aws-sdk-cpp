/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/model/DICOMUpdates.h>
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


    /**
     * <p>The object containing <code>removableAttributes</code> and
     * <code>updatableAttributes</code>.</p>
     */
    inline const DICOMUpdates& GetDICOMUpdates() const{ return m_dICOMUpdates; }

    /**
     * <p>The object containing <code>removableAttributes</code> and
     * <code>updatableAttributes</code>.</p>
     */
    inline bool DICOMUpdatesHasBeenSet() const { return m_dICOMUpdatesHasBeenSet; }

    /**
     * <p>The object containing <code>removableAttributes</code> and
     * <code>updatableAttributes</code>.</p>
     */
    inline void SetDICOMUpdates(const DICOMUpdates& value) { m_dICOMUpdatesHasBeenSet = true; m_dICOMUpdates = value; }

    /**
     * <p>The object containing <code>removableAttributes</code> and
     * <code>updatableAttributes</code>.</p>
     */
    inline void SetDICOMUpdates(DICOMUpdates&& value) { m_dICOMUpdatesHasBeenSet = true; m_dICOMUpdates = std::move(value); }

    /**
     * <p>The object containing <code>removableAttributes</code> and
     * <code>updatableAttributes</code>.</p>
     */
    inline MetadataUpdates& WithDICOMUpdates(const DICOMUpdates& value) { SetDICOMUpdates(value); return *this;}

    /**
     * <p>The object containing <code>removableAttributes</code> and
     * <code>updatableAttributes</code>.</p>
     */
    inline MetadataUpdates& WithDICOMUpdates(DICOMUpdates&& value) { SetDICOMUpdates(std::move(value)); return *this;}

  private:

    DICOMUpdates m_dICOMUpdates;
    bool m_dICOMUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
