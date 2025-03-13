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
    AWS_MEDICALIMAGING_API DICOMUpdates() = default;
    AWS_MEDICALIMAGING_API DICOMUpdates(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API DICOMUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DICOM tags to be removed from <code>ImageSetMetadata</code>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetRemovableAttributes() const { return m_removableAttributes; }
    inline bool RemovableAttributesHasBeenSet() const { return m_removableAttributesHasBeenSet; }
    template<typename RemovableAttributesT = Aws::Utils::CryptoBuffer>
    void SetRemovableAttributes(RemovableAttributesT&& value) { m_removableAttributesHasBeenSet = true; m_removableAttributes = std::forward<RemovableAttributesT>(value); }
    template<typename RemovableAttributesT = Aws::Utils::CryptoBuffer>
    DICOMUpdates& WithRemovableAttributes(RemovableAttributesT&& value) { SetRemovableAttributes(std::forward<RemovableAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DICOM tags that need to be updated in <code>ImageSetMetadata</code>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetUpdatableAttributes() const { return m_updatableAttributes; }
    inline bool UpdatableAttributesHasBeenSet() const { return m_updatableAttributesHasBeenSet; }
    template<typename UpdatableAttributesT = Aws::Utils::CryptoBuffer>
    void SetUpdatableAttributes(UpdatableAttributesT&& value) { m_updatableAttributesHasBeenSet = true; m_updatableAttributes = std::forward<UpdatableAttributesT>(value); }
    template<typename UpdatableAttributesT = Aws::Utils::CryptoBuffer>
    DICOMUpdates& WithUpdatableAttributes(UpdatableAttributesT&& value) { SetUpdatableAttributes(std::forward<UpdatableAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_removableAttributes{};
    bool m_removableAttributesHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_updatableAttributes{};
    bool m_updatableAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
