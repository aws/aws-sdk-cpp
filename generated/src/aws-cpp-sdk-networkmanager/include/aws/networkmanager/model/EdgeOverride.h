/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the edge that's used for the override. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/EdgeOverride">AWS
   * API Reference</a></p>
   */
  class EdgeOverride
  {
  public:
    AWS_NETWORKMANAGER_API EdgeOverride();
    AWS_NETWORKMANAGER_API EdgeOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API EdgeOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of edge locations.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetEdgeSets() const{ return m_edgeSets; }

    /**
     * <p>The list of edge locations.</p>
     */
    inline bool EdgeSetsHasBeenSet() const { return m_edgeSetsHasBeenSet; }

    /**
     * <p>The list of edge locations.</p>
     */
    inline void SetEdgeSets(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_edgeSetsHasBeenSet = true; m_edgeSets = value; }

    /**
     * <p>The list of edge locations.</p>
     */
    inline void SetEdgeSets(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_edgeSetsHasBeenSet = true; m_edgeSets = std::move(value); }

    /**
     * <p>The list of edge locations.</p>
     */
    inline EdgeOverride& WithEdgeSets(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetEdgeSets(value); return *this;}

    /**
     * <p>The list of edge locations.</p>
     */
    inline EdgeOverride& WithEdgeSets(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetEdgeSets(std::move(value)); return *this;}

    /**
     * <p>The list of edge locations.</p>
     */
    inline EdgeOverride& AddEdgeSets(const Aws::Vector<Aws::String>& value) { m_edgeSetsHasBeenSet = true; m_edgeSets.push_back(value); return *this; }

    /**
     * <p>The list of edge locations.</p>
     */
    inline EdgeOverride& AddEdgeSets(Aws::Vector<Aws::String>&& value) { m_edgeSetsHasBeenSet = true; m_edgeSets.push_back(std::move(value)); return *this; }


    /**
     * <p>The edge that should be used when overriding the current edge order.</p>
     */
    inline const Aws::String& GetUseEdge() const{ return m_useEdge; }

    /**
     * <p>The edge that should be used when overriding the current edge order.</p>
     */
    inline bool UseEdgeHasBeenSet() const { return m_useEdgeHasBeenSet; }

    /**
     * <p>The edge that should be used when overriding the current edge order.</p>
     */
    inline void SetUseEdge(const Aws::String& value) { m_useEdgeHasBeenSet = true; m_useEdge = value; }

    /**
     * <p>The edge that should be used when overriding the current edge order.</p>
     */
    inline void SetUseEdge(Aws::String&& value) { m_useEdgeHasBeenSet = true; m_useEdge = std::move(value); }

    /**
     * <p>The edge that should be used when overriding the current edge order.</p>
     */
    inline void SetUseEdge(const char* value) { m_useEdgeHasBeenSet = true; m_useEdge.assign(value); }

    /**
     * <p>The edge that should be used when overriding the current edge order.</p>
     */
    inline EdgeOverride& WithUseEdge(const Aws::String& value) { SetUseEdge(value); return *this;}

    /**
     * <p>The edge that should be used when overriding the current edge order.</p>
     */
    inline EdgeOverride& WithUseEdge(Aws::String&& value) { SetUseEdge(std::move(value)); return *this;}

    /**
     * <p>The edge that should be used when overriding the current edge order.</p>
     */
    inline EdgeOverride& WithUseEdge(const char* value) { SetUseEdge(value); return *this;}

  private:

    Aws::Vector<Aws::Vector<Aws::String>> m_edgeSets;
    bool m_edgeSetsHasBeenSet = false;

    Aws::String m_useEdge;
    bool m_useEdgeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
