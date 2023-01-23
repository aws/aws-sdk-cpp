/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network segment, which are dedicated routes. Only
   * attachments within this segment can communicate with each other.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkSegment">AWS
   * API Reference</a></p>
   */
  class CoreNetworkSegment
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkSegment();
    AWS_NETWORKMANAGER_API CoreNetworkSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a core network segment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a core network segment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a core network segment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a core network segment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a core network segment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a core network segment.</p>
     */
    inline CoreNetworkSegment& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a core network segment.</p>
     */
    inline CoreNetworkSegment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a core network segment.</p>
     */
    inline CoreNetworkSegment& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Regions where the edges are located.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const{ return m_edgeLocations; }

    /**
     * <p>The Regions where the edges are located.</p>
     */
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }

    /**
     * <p>The Regions where the edges are located.</p>
     */
    inline void SetEdgeLocations(const Aws::Vector<Aws::String>& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = value; }

    /**
     * <p>The Regions where the edges are located.</p>
     */
    inline void SetEdgeLocations(Aws::Vector<Aws::String>&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::move(value); }

    /**
     * <p>The Regions where the edges are located.</p>
     */
    inline CoreNetworkSegment& WithEdgeLocations(const Aws::Vector<Aws::String>& value) { SetEdgeLocations(value); return *this;}

    /**
     * <p>The Regions where the edges are located.</p>
     */
    inline CoreNetworkSegment& WithEdgeLocations(Aws::Vector<Aws::String>&& value) { SetEdgeLocations(std::move(value)); return *this;}

    /**
     * <p>The Regions where the edges are located.</p>
     */
    inline CoreNetworkSegment& AddEdgeLocations(const Aws::String& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }

    /**
     * <p>The Regions where the edges are located.</p>
     */
    inline CoreNetworkSegment& AddEdgeLocations(Aws::String&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(std::move(value)); return *this; }

    /**
     * <p>The Regions where the edges are located.</p>
     */
    inline CoreNetworkSegment& AddEdgeLocations(const char* value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }


    /**
     * <p>The shared segments of a core network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedSegments() const{ return m_sharedSegments; }

    /**
     * <p>The shared segments of a core network.</p>
     */
    inline bool SharedSegmentsHasBeenSet() const { return m_sharedSegmentsHasBeenSet; }

    /**
     * <p>The shared segments of a core network.</p>
     */
    inline void SetSharedSegments(const Aws::Vector<Aws::String>& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments = value; }

    /**
     * <p>The shared segments of a core network.</p>
     */
    inline void SetSharedSegments(Aws::Vector<Aws::String>&& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments = std::move(value); }

    /**
     * <p>The shared segments of a core network.</p>
     */
    inline CoreNetworkSegment& WithSharedSegments(const Aws::Vector<Aws::String>& value) { SetSharedSegments(value); return *this;}

    /**
     * <p>The shared segments of a core network.</p>
     */
    inline CoreNetworkSegment& WithSharedSegments(Aws::Vector<Aws::String>&& value) { SetSharedSegments(std::move(value)); return *this;}

    /**
     * <p>The shared segments of a core network.</p>
     */
    inline CoreNetworkSegment& AddSharedSegments(const Aws::String& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments.push_back(value); return *this; }

    /**
     * <p>The shared segments of a core network.</p>
     */
    inline CoreNetworkSegment& AddSharedSegments(Aws::String&& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments.push_back(std::move(value)); return *this; }

    /**
     * <p>The shared segments of a core network.</p>
     */
    inline CoreNetworkSegment& AddSharedSegments(const char* value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLocations;
    bool m_edgeLocationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sharedSegments;
    bool m_sharedSegmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
