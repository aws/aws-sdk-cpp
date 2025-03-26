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
   * Probe results for your media file.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ProbeResult">AWS
   * API Reference</a></p>
   */
  class ProbeResult
  {
  public:
    AWS_MEDIACONVERT_API ProbeResult() = default;
    AWS_MEDIACONVERT_API ProbeResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ProbeResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The container of your media file. This information helps you understand the
     * overall structure and details of your media, including format, duration, and
     * track layout.
     */
    inline const Container& GetContainer() const { return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    template<typename ContainerT = Container>
    void SetContainer(ContainerT&& value) { m_containerHasBeenSet = true; m_container = std::forward<ContainerT>(value); }
    template<typename ContainerT = Container>
    ProbeResult& WithContainer(ContainerT&& value) { SetContainer(std::forward<ContainerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Metadata and other file information.
     */
    inline const Metadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Metadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Metadata>
    ProbeResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array containing track mapping information.
     */
    inline const Aws::Vector<TrackMapping>& GetTrackMappings() const { return m_trackMappings; }
    inline bool TrackMappingsHasBeenSet() const { return m_trackMappingsHasBeenSet; }
    template<typename TrackMappingsT = Aws::Vector<TrackMapping>>
    void SetTrackMappings(TrackMappingsT&& value) { m_trackMappingsHasBeenSet = true; m_trackMappings = std::forward<TrackMappingsT>(value); }
    template<typename TrackMappingsT = Aws::Vector<TrackMapping>>
    ProbeResult& WithTrackMappings(TrackMappingsT&& value) { SetTrackMappings(std::forward<TrackMappingsT>(value)); return *this;}
    template<typename TrackMappingsT = TrackMapping>
    ProbeResult& AddTrackMappings(TrackMappingsT&& value) { m_trackMappingsHasBeenSet = true; m_trackMappings.emplace_back(std::forward<TrackMappingsT>(value)); return *this; }
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
