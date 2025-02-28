/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Container.h>
#include <aws/mediaconvert/model/Metadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/TrackMapping.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * The metadata and analysis results for a media file.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ProbeResult">AWS
   * API Reference</a></p>
   */
  class ProbeResult
  {
  public:
    AWS_MEDIACONVERT_API ProbeResult();
    AWS_MEDIACONVERT_API ProbeResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ProbeResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Information about the container format of the media file.
     */
    inline const Container& GetContainer() const{ return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    inline void SetContainer(const Container& value) { m_containerHasBeenSet = true; m_container = value; }
    inline void SetContainer(Container&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }
    inline ProbeResult& WithContainer(const Container& value) { SetContainer(value); return *this;}
    inline ProbeResult& WithContainer(Container&& value) { SetContainer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Metadata about the file.
     */
    inline const Metadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Metadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Metadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline ProbeResult& WithMetadata(const Metadata& value) { SetMetadata(value); return *this;}
    inline ProbeResult& WithMetadata(Metadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * List of Track mapping objects.
     */
    inline const Aws::Vector<TrackMapping>& GetTrackMappings() const{ return m_trackMappings; }
    inline bool TrackMappingsHasBeenSet() const { return m_trackMappingsHasBeenSet; }
    inline void SetTrackMappings(const Aws::Vector<TrackMapping>& value) { m_trackMappingsHasBeenSet = true; m_trackMappings = value; }
    inline void SetTrackMappings(Aws::Vector<TrackMapping>&& value) { m_trackMappingsHasBeenSet = true; m_trackMappings = std::move(value); }
    inline ProbeResult& WithTrackMappings(const Aws::Vector<TrackMapping>& value) { SetTrackMappings(value); return *this;}
    inline ProbeResult& WithTrackMappings(Aws::Vector<TrackMapping>&& value) { SetTrackMappings(std::move(value)); return *this;}
    inline ProbeResult& AddTrackMappings(const TrackMapping& value) { m_trackMappingsHasBeenSet = true; m_trackMappings.push_back(value); return *this; }
    inline ProbeResult& AddTrackMappings(TrackMapping&& value) { m_trackMappingsHasBeenSet = true; m_trackMappings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Container m_container;
    bool m_containerHasBeenSet = false;

    Metadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Vector<TrackMapping> m_trackMappings;
    bool m_trackMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
