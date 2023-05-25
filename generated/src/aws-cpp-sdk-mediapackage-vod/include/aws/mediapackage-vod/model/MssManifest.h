/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/StreamSelection.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A Microsoft Smooth Streaming (MSS) manifest configuration.<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/MssManifest">AWS
   * API Reference</a></p>
   */
  class MssManifest
  {
  public:
    AWS_MEDIAPACKAGEVOD_API MssManifest();
    AWS_MEDIAPACKAGEVOD_API MssManifest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API MssManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An optional string to include in the name of the manifest.
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline MssManifest& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * An optional string to include in the name of the manifest.
     */
    inline MssManifest& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * An optional string to include in the name of the manifest.
     */
    inline MssManifest& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    
    inline const StreamSelection& GetStreamSelection() const{ return m_streamSelection; }

    
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }

    
    inline void SetStreamSelection(const StreamSelection& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = value; }

    
    inline void SetStreamSelection(StreamSelection&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::move(value); }

    
    inline MssManifest& WithStreamSelection(const StreamSelection& value) { SetStreamSelection(value); return *this;}

    
    inline MssManifest& WithStreamSelection(StreamSelection&& value) { SetStreamSelection(std::move(value)); return *this;}

  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
