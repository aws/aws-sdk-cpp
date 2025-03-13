/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/model/CopySourceImageSetInformation.h>
#include <aws/medical-imaging/model/CopyDestinationImageSet.h>
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
   * <p>Copy image set information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/CopyImageSetInformation">AWS
   * API Reference</a></p>
   */
  class CopyImageSetInformation
  {
  public:
    AWS_MEDICALIMAGING_API CopyImageSetInformation() = default;
    AWS_MEDICALIMAGING_API CopyImageSetInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API CopyImageSetInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source image set.</p>
     */
    inline const CopySourceImageSetInformation& GetSourceImageSet() const { return m_sourceImageSet; }
    inline bool SourceImageSetHasBeenSet() const { return m_sourceImageSetHasBeenSet; }
    template<typename SourceImageSetT = CopySourceImageSetInformation>
    void SetSourceImageSet(SourceImageSetT&& value) { m_sourceImageSetHasBeenSet = true; m_sourceImageSet = std::forward<SourceImageSetT>(value); }
    template<typename SourceImageSetT = CopySourceImageSetInformation>
    CopyImageSetInformation& WithSourceImageSet(SourceImageSetT&& value) { SetSourceImageSet(std::forward<SourceImageSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination image set.</p>
     */
    inline const CopyDestinationImageSet& GetDestinationImageSet() const { return m_destinationImageSet; }
    inline bool DestinationImageSetHasBeenSet() const { return m_destinationImageSetHasBeenSet; }
    template<typename DestinationImageSetT = CopyDestinationImageSet>
    void SetDestinationImageSet(DestinationImageSetT&& value) { m_destinationImageSetHasBeenSet = true; m_destinationImageSet = std::forward<DestinationImageSetT>(value); }
    template<typename DestinationImageSetT = CopyDestinationImageSet>
    CopyImageSetInformation& WithDestinationImageSet(DestinationImageSetT&& value) { SetDestinationImageSet(std::forward<DestinationImageSetT>(value)); return *this;}
    ///@}
  private:

    CopySourceImageSetInformation m_sourceImageSet;
    bool m_sourceImageSetHasBeenSet = false;

    CopyDestinationImageSet m_destinationImageSet;
    bool m_destinationImageSetHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
