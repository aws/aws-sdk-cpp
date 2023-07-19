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
    AWS_MEDICALIMAGING_API CopyImageSetInformation();
    AWS_MEDICALIMAGING_API CopyImageSetInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API CopyImageSetInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source image set.</p>
     */
    inline const CopySourceImageSetInformation& GetSourceImageSet() const{ return m_sourceImageSet; }

    /**
     * <p>The source image set.</p>
     */
    inline bool SourceImageSetHasBeenSet() const { return m_sourceImageSetHasBeenSet; }

    /**
     * <p>The source image set.</p>
     */
    inline void SetSourceImageSet(const CopySourceImageSetInformation& value) { m_sourceImageSetHasBeenSet = true; m_sourceImageSet = value; }

    /**
     * <p>The source image set.</p>
     */
    inline void SetSourceImageSet(CopySourceImageSetInformation&& value) { m_sourceImageSetHasBeenSet = true; m_sourceImageSet = std::move(value); }

    /**
     * <p>The source image set.</p>
     */
    inline CopyImageSetInformation& WithSourceImageSet(const CopySourceImageSetInformation& value) { SetSourceImageSet(value); return *this;}

    /**
     * <p>The source image set.</p>
     */
    inline CopyImageSetInformation& WithSourceImageSet(CopySourceImageSetInformation&& value) { SetSourceImageSet(std::move(value)); return *this;}


    /**
     * <p>The destination image set.</p>
     */
    inline const CopyDestinationImageSet& GetDestinationImageSet() const{ return m_destinationImageSet; }

    /**
     * <p>The destination image set.</p>
     */
    inline bool DestinationImageSetHasBeenSet() const { return m_destinationImageSetHasBeenSet; }

    /**
     * <p>The destination image set.</p>
     */
    inline void SetDestinationImageSet(const CopyDestinationImageSet& value) { m_destinationImageSetHasBeenSet = true; m_destinationImageSet = value; }

    /**
     * <p>The destination image set.</p>
     */
    inline void SetDestinationImageSet(CopyDestinationImageSet&& value) { m_destinationImageSetHasBeenSet = true; m_destinationImageSet = std::move(value); }

    /**
     * <p>The destination image set.</p>
     */
    inline CopyImageSetInformation& WithDestinationImageSet(const CopyDestinationImageSet& value) { SetDestinationImageSet(value); return *this;}

    /**
     * <p>The destination image set.</p>
     */
    inline CopyImageSetInformation& WithDestinationImageSet(CopyDestinationImageSet&& value) { SetDestinationImageSet(std::move(value)); return *this;}

  private:

    CopySourceImageSetInformation m_sourceImageSet;
    bool m_sourceImageSetHasBeenSet = false;

    CopyDestinationImageSet m_destinationImageSet;
    bool m_destinationImageSetHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
