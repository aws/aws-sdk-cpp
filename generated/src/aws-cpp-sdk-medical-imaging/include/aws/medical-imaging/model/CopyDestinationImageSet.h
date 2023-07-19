/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
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
   * <p>Copy the destination image set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/CopyDestinationImageSet">AWS
   * API Reference</a></p>
   */
  class CopyDestinationImageSet
  {
  public:
    AWS_MEDICALIMAGING_API CopyDestinationImageSet();
    AWS_MEDICALIMAGING_API CopyDestinationImageSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API CopyDestinationImageSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image set identifier for the destination image set.</p>
     */
    inline const Aws::String& GetImageSetId() const{ return m_imageSetId; }

    /**
     * <p>The image set identifier for the destination image set.</p>
     */
    inline bool ImageSetIdHasBeenSet() const { return m_imageSetIdHasBeenSet; }

    /**
     * <p>The image set identifier for the destination image set.</p>
     */
    inline void SetImageSetId(const Aws::String& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = value; }

    /**
     * <p>The image set identifier for the destination image set.</p>
     */
    inline void SetImageSetId(Aws::String&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::move(value); }

    /**
     * <p>The image set identifier for the destination image set.</p>
     */
    inline void SetImageSetId(const char* value) { m_imageSetIdHasBeenSet = true; m_imageSetId.assign(value); }

    /**
     * <p>The image set identifier for the destination image set.</p>
     */
    inline CopyDestinationImageSet& WithImageSetId(const Aws::String& value) { SetImageSetId(value); return *this;}

    /**
     * <p>The image set identifier for the destination image set.</p>
     */
    inline CopyDestinationImageSet& WithImageSetId(Aws::String&& value) { SetImageSetId(std::move(value)); return *this;}

    /**
     * <p>The image set identifier for the destination image set.</p>
     */
    inline CopyDestinationImageSet& WithImageSetId(const char* value) { SetImageSetId(value); return *this;}


    /**
     * <p>The latest version identifier for the destination image set.</p>
     */
    inline const Aws::String& GetLatestVersionId() const{ return m_latestVersionId; }

    /**
     * <p>The latest version identifier for the destination image set.</p>
     */
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }

    /**
     * <p>The latest version identifier for the destination image set.</p>
     */
    inline void SetLatestVersionId(const Aws::String& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = value; }

    /**
     * <p>The latest version identifier for the destination image set.</p>
     */
    inline void SetLatestVersionId(Aws::String&& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = std::move(value); }

    /**
     * <p>The latest version identifier for the destination image set.</p>
     */
    inline void SetLatestVersionId(const char* value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId.assign(value); }

    /**
     * <p>The latest version identifier for the destination image set.</p>
     */
    inline CopyDestinationImageSet& WithLatestVersionId(const Aws::String& value) { SetLatestVersionId(value); return *this;}

    /**
     * <p>The latest version identifier for the destination image set.</p>
     */
    inline CopyDestinationImageSet& WithLatestVersionId(Aws::String&& value) { SetLatestVersionId(std::move(value)); return *this;}

    /**
     * <p>The latest version identifier for the destination image set.</p>
     */
    inline CopyDestinationImageSet& WithLatestVersionId(const char* value) { SetLatestVersionId(value); return *this;}

  private:

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    Aws::String m_latestVersionId;
    bool m_latestVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
