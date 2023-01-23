/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MsSmoothH265PackagingType.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Ms Smooth Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MsSmoothOutputSettings">AWS
   * API Reference</a></p>
   */
  class MsSmoothOutputSettings
  {
  public:
    AWS_MEDIALIVE_API MsSmoothOutputSettings();
    AWS_MEDIALIVE_API MsSmoothOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MsSmoothOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline const MsSmoothH265PackagingType& GetH265PackagingType() const{ return m_h265PackagingType; }

    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline bool H265PackagingTypeHasBeenSet() const { return m_h265PackagingTypeHasBeenSet; }

    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline void SetH265PackagingType(const MsSmoothH265PackagingType& value) { m_h265PackagingTypeHasBeenSet = true; m_h265PackagingType = value; }

    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline void SetH265PackagingType(MsSmoothH265PackagingType&& value) { m_h265PackagingTypeHasBeenSet = true; m_h265PackagingType = std::move(value); }

    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline MsSmoothOutputSettings& WithH265PackagingType(const MsSmoothH265PackagingType& value) { SetH265PackagingType(value); return *this;}

    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline MsSmoothOutputSettings& WithH265PackagingType(MsSmoothH265PackagingType&& value) { SetH265PackagingType(std::move(value)); return *this;}


    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline const Aws::String& GetNameModifier() const{ return m_nameModifier; }

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline bool NameModifierHasBeenSet() const { return m_nameModifierHasBeenSet; }

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline void SetNameModifier(const Aws::String& value) { m_nameModifierHasBeenSet = true; m_nameModifier = value; }

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline void SetNameModifier(Aws::String&& value) { m_nameModifierHasBeenSet = true; m_nameModifier = std::move(value); }

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline void SetNameModifier(const char* value) { m_nameModifierHasBeenSet = true; m_nameModifier.assign(value); }

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline MsSmoothOutputSettings& WithNameModifier(const Aws::String& value) { SetNameModifier(value); return *this;}

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline MsSmoothOutputSettings& WithNameModifier(Aws::String&& value) { SetNameModifier(std::move(value)); return *this;}

    /**
     * String concatenated to the end of the destination filename.  Required for
     * multiple outputs of the same type.
     */
    inline MsSmoothOutputSettings& WithNameModifier(const char* value) { SetNameModifier(value); return *this;}

  private:

    MsSmoothH265PackagingType m_h265PackagingType;
    bool m_h265PackagingTypeHasBeenSet = false;

    Aws::String m_nameModifier;
    bool m_nameModifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
