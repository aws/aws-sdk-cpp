/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
   * <p>The object containing <code>removableAttributes</code> and
   * <code>updatableAttributes</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/DICOMUpdates">AWS
   * API Reference</a></p>
   */
  class DICOMUpdates
  {
  public:
    AWS_MEDICALIMAGING_API DICOMUpdates();
    AWS_MEDICALIMAGING_API DICOMUpdates(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API DICOMUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DICOM tags to be removed from <code>ImageSetMetadata</code>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetRemovableAttributes() const{ return m_removableAttributes; }

    /**
     * <p>The DICOM tags to be removed from <code>ImageSetMetadata</code>.</p>
     */
    inline bool RemovableAttributesHasBeenSet() const { return m_removableAttributesHasBeenSet; }

    /**
     * <p>The DICOM tags to be removed from <code>ImageSetMetadata</code>.</p>
     */
    inline void SetRemovableAttributes(const Aws::Utils::CryptoBuffer& value) { m_removableAttributesHasBeenSet = true; m_removableAttributes = value; }

    /**
     * <p>The DICOM tags to be removed from <code>ImageSetMetadata</code>.</p>
     */
    inline void SetRemovableAttributes(Aws::Utils::CryptoBuffer&& value) { m_removableAttributesHasBeenSet = true; m_removableAttributes = std::move(value); }

    /**
     * <p>The DICOM tags to be removed from <code>ImageSetMetadata</code>.</p>
     */
    inline DICOMUpdates& WithRemovableAttributes(const Aws::Utils::CryptoBuffer& value) { SetRemovableAttributes(value); return *this;}

    /**
     * <p>The DICOM tags to be removed from <code>ImageSetMetadata</code>.</p>
     */
    inline DICOMUpdates& WithRemovableAttributes(Aws::Utils::CryptoBuffer&& value) { SetRemovableAttributes(std::move(value)); return *this;}


    /**
     * <p>The DICOM tags that need to be updated in <code>ImageSetMetadata</code>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetUpdatableAttributes() const{ return m_updatableAttributes; }

    /**
     * <p>The DICOM tags that need to be updated in <code>ImageSetMetadata</code>.</p>
     */
    inline bool UpdatableAttributesHasBeenSet() const { return m_updatableAttributesHasBeenSet; }

    /**
     * <p>The DICOM tags that need to be updated in <code>ImageSetMetadata</code>.</p>
     */
    inline void SetUpdatableAttributes(const Aws::Utils::CryptoBuffer& value) { m_updatableAttributesHasBeenSet = true; m_updatableAttributes = value; }

    /**
     * <p>The DICOM tags that need to be updated in <code>ImageSetMetadata</code>.</p>
     */
    inline void SetUpdatableAttributes(Aws::Utils::CryptoBuffer&& value) { m_updatableAttributesHasBeenSet = true; m_updatableAttributes = std::move(value); }

    /**
     * <p>The DICOM tags that need to be updated in <code>ImageSetMetadata</code>.</p>
     */
    inline DICOMUpdates& WithUpdatableAttributes(const Aws::Utils::CryptoBuffer& value) { SetUpdatableAttributes(value); return *this;}

    /**
     * <p>The DICOM tags that need to be updated in <code>ImageSetMetadata</code>.</p>
     */
    inline DICOMUpdates& WithUpdatableAttributes(Aws::Utils::CryptoBuffer&& value) { SetUpdatableAttributes(std::move(value)); return *this;}

  private:

    Aws::Utils::CryptoBuffer m_removableAttributes;
    bool m_removableAttributesHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_updatableAttributes;
    bool m_updatableAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
