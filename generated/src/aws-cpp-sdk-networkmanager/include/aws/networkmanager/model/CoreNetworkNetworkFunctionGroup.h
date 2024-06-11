/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/ServiceInsertionSegments.h>
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
   * <p>Describes a network function group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkNetworkFunctionGroup">AWS
   * API Reference</a></p>
   */
  class CoreNetworkNetworkFunctionGroup
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroup();
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the network function group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CoreNetworkNetworkFunctionGroup& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CoreNetworkNetworkFunctionGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CoreNetworkNetworkFunctionGroup& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The core network edge locations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const{ return m_edgeLocations; }
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
    inline void SetEdgeLocations(const Aws::Vector<Aws::String>& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = value; }
    inline void SetEdgeLocations(Aws::Vector<Aws::String>&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::move(value); }
    inline CoreNetworkNetworkFunctionGroup& WithEdgeLocations(const Aws::Vector<Aws::String>& value) { SetEdgeLocations(value); return *this;}
    inline CoreNetworkNetworkFunctionGroup& WithEdgeLocations(Aws::Vector<Aws::String>&& value) { SetEdgeLocations(std::move(value)); return *this;}
    inline CoreNetworkNetworkFunctionGroup& AddEdgeLocations(const Aws::String& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }
    inline CoreNetworkNetworkFunctionGroup& AddEdgeLocations(Aws::String&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(std::move(value)); return *this; }
    inline CoreNetworkNetworkFunctionGroup& AddEdgeLocations(const char* value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The segments associated with the network function group.</p>
     */
    inline const ServiceInsertionSegments& GetSegments() const{ return m_segments; }
    inline bool SegmentsHasBeenSet() const { return m_segmentsHasBeenSet; }
    inline void SetSegments(const ServiceInsertionSegments& value) { m_segmentsHasBeenSet = true; m_segments = value; }
    inline void SetSegments(ServiceInsertionSegments&& value) { m_segmentsHasBeenSet = true; m_segments = std::move(value); }
    inline CoreNetworkNetworkFunctionGroup& WithSegments(const ServiceInsertionSegments& value) { SetSegments(value); return *this;}
    inline CoreNetworkNetworkFunctionGroup& WithSegments(ServiceInsertionSegments&& value) { SetSegments(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLocations;
    bool m_edgeLocationsHasBeenSet = false;

    ServiceInsertionSegments m_segments;
    bool m_segmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
