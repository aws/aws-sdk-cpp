﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/Mode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>A list of node configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/NodeConfigurationOption">AWS
   * API Reference</a></p>
   */
  class NodeConfigurationOption
  {
  public:
    AWS_REDSHIFT_API NodeConfigurationOption();
    AWS_REDSHIFT_API NodeConfigurationOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API NodeConfigurationOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The node type, such as, "ds2.8xlarge".</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline NodeConfigurationOption& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline NodeConfigurationOption& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline NodeConfigurationOption& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline NodeConfigurationOption& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated disk utilizaton percentage.</p>
     */
    inline double GetEstimatedDiskUtilizationPercent() const{ return m_estimatedDiskUtilizationPercent; }
    inline bool EstimatedDiskUtilizationPercentHasBeenSet() const { return m_estimatedDiskUtilizationPercentHasBeenSet; }
    inline void SetEstimatedDiskUtilizationPercent(double value) { m_estimatedDiskUtilizationPercentHasBeenSet = true; m_estimatedDiskUtilizationPercent = value; }
    inline NodeConfigurationOption& WithEstimatedDiskUtilizationPercent(double value) { SetEstimatedDiskUtilizationPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the node configuration recommendation.</p>
     */
    inline const Mode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const Mode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(Mode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline NodeConfigurationOption& WithMode(const Mode& value) { SetMode(value); return *this;}
    inline NodeConfigurationOption& WithMode(Mode&& value) { SetMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;

    double m_estimatedDiskUtilizationPercent;
    bool m_estimatedDiskUtilizationPercentHasBeenSet = false;

    Mode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
