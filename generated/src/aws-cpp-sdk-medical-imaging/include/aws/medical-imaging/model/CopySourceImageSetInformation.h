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


    /**
     * <p>The latest version identifier for the source image set.</p>
     */
    inline const Aws::String& GetLatestVersionId() const{ return m_latestVersionId; }

    /**
     * <p>The latest version identifier for the source image set.</p>
     */
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }

    /**
     * <p>The latest version identifier for the source image set.</p>
     */
    inline void SetLatestVersionId(const Aws::String& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = value; }

    /**
     * <p>The latest version identifier for the source image set.</p>
     */
    inline void SetLatestVersionId(Aws::String&& value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = std::move(value); }

    /**
     * <p>The latest version identifier for the source image set.</p>
     */
    inline void SetLatestVersionId(const char* value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId.assign(value); }

    /**
     * <p>The latest version identifier for the source image set.</p>
     */
    inline CopySourceImageSetInformation& WithLatestVersionId(const Aws::String& value) { SetLatestVersionId(value); return *this;}

    /**
     * <p>The latest version identifier for the source image set.</p>
     */
    inline CopySourceImageSetInformation& WithLatestVersionId(Aws::String&& value) { SetLatestVersionId(std::move(value)); return *this;}

    /**
     * <p>The latest version identifier for the source image set.</p>
     */
    inline CopySourceImageSetInformation& WithLatestVersionId(const char* value) { SetLatestVersionId(value); return *this;}

  private:

    Aws::String m_latestVersionId;
    bool m_latestVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
