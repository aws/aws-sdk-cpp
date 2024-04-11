/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MediaResourceNeighbor.h>
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
   * An AWS resource used in media workflows.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaResource">AWS
   * API Reference</a></p>
   */
  class MediaResource
  {
  public:
    AWS_MEDIALIVE_API MediaResource();
    AWS_MEDIALIVE_API MediaResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<MediaResourceNeighbor>& GetDestinations() const{ return m_destinations; }

    
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    
    inline void SetDestinations(const Aws::Vector<MediaResourceNeighbor>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    
    inline void SetDestinations(Aws::Vector<MediaResourceNeighbor>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    
    inline MediaResource& WithDestinations(const Aws::Vector<MediaResourceNeighbor>& value) { SetDestinations(value); return *this;}

    
    inline MediaResource& WithDestinations(Aws::Vector<MediaResourceNeighbor>&& value) { SetDestinations(std::move(value)); return *this;}

    
    inline MediaResource& AddDestinations(const MediaResourceNeighbor& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    
    inline MediaResource& AddDestinations(MediaResourceNeighbor&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * The logical name of an AWS media resource.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The logical name of an AWS media resource.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The logical name of an AWS media resource.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The logical name of an AWS media resource.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The logical name of an AWS media resource.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The logical name of an AWS media resource.
     */
    inline MediaResource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The logical name of an AWS media resource.
     */
    inline MediaResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The logical name of an AWS media resource.
     */
    inline MediaResource& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Vector<MediaResourceNeighbor>& GetSources() const{ return m_sources; }

    
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    
    inline void SetSources(const Aws::Vector<MediaResourceNeighbor>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    
    inline void SetSources(Aws::Vector<MediaResourceNeighbor>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    
    inline MediaResource& WithSources(const Aws::Vector<MediaResourceNeighbor>& value) { SetSources(value); return *this;}

    
    inline MediaResource& WithSources(Aws::Vector<MediaResourceNeighbor>&& value) { SetSources(std::move(value)); return *this;}

    
    inline MediaResource& AddSources(const MediaResourceNeighbor& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    
    inline MediaResource& AddSources(MediaResourceNeighbor&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MediaResourceNeighbor> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<MediaResourceNeighbor> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
