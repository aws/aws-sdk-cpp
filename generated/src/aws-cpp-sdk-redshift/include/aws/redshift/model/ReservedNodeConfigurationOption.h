/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/ReservedNode.h>
#include <aws/redshift/model/ReservedNodeOffering.h>
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
   * <p>Details for a reserved-node exchange. Examples include the node type for a
   * reserved node, the price for a node, the node's state, and other
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ReservedNodeConfigurationOption">AWS
   * API Reference</a></p>
   */
  class ReservedNodeConfigurationOption
  {
  public:
    AWS_REDSHIFT_API ReservedNodeConfigurationOption();
    AWS_REDSHIFT_API ReservedNodeConfigurationOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ReservedNodeConfigurationOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const ReservedNode& GetSourceReservedNode() const{ return m_sourceReservedNode; }

    
    inline bool SourceReservedNodeHasBeenSet() const { return m_sourceReservedNodeHasBeenSet; }

    
    inline void SetSourceReservedNode(const ReservedNode& value) { m_sourceReservedNodeHasBeenSet = true; m_sourceReservedNode = value; }

    
    inline void SetSourceReservedNode(ReservedNode&& value) { m_sourceReservedNodeHasBeenSet = true; m_sourceReservedNode = std::move(value); }

    
    inline ReservedNodeConfigurationOption& WithSourceReservedNode(const ReservedNode& value) { SetSourceReservedNode(value); return *this;}

    
    inline ReservedNodeConfigurationOption& WithSourceReservedNode(ReservedNode&& value) { SetSourceReservedNode(std::move(value)); return *this;}


    /**
     * <p>The target reserved-node count.</p>
     */
    inline int GetTargetReservedNodeCount() const{ return m_targetReservedNodeCount; }

    /**
     * <p>The target reserved-node count.</p>
     */
    inline bool TargetReservedNodeCountHasBeenSet() const { return m_targetReservedNodeCountHasBeenSet; }

    /**
     * <p>The target reserved-node count.</p>
     */
    inline void SetTargetReservedNodeCount(int value) { m_targetReservedNodeCountHasBeenSet = true; m_targetReservedNodeCount = value; }

    /**
     * <p>The target reserved-node count.</p>
     */
    inline ReservedNodeConfigurationOption& WithTargetReservedNodeCount(int value) { SetTargetReservedNodeCount(value); return *this;}


    
    inline const ReservedNodeOffering& GetTargetReservedNodeOffering() const{ return m_targetReservedNodeOffering; }

    
    inline bool TargetReservedNodeOfferingHasBeenSet() const { return m_targetReservedNodeOfferingHasBeenSet; }

    
    inline void SetTargetReservedNodeOffering(const ReservedNodeOffering& value) { m_targetReservedNodeOfferingHasBeenSet = true; m_targetReservedNodeOffering = value; }

    
    inline void SetTargetReservedNodeOffering(ReservedNodeOffering&& value) { m_targetReservedNodeOfferingHasBeenSet = true; m_targetReservedNodeOffering = std::move(value); }

    
    inline ReservedNodeConfigurationOption& WithTargetReservedNodeOffering(const ReservedNodeOffering& value) { SetTargetReservedNodeOffering(value); return *this;}

    
    inline ReservedNodeConfigurationOption& WithTargetReservedNodeOffering(ReservedNodeOffering&& value) { SetTargetReservedNodeOffering(std::move(value)); return *this;}

  private:

    ReservedNode m_sourceReservedNode;
    bool m_sourceReservedNodeHasBeenSet = false;

    int m_targetReservedNodeCount;
    bool m_targetReservedNodeCountHasBeenSet = false;

    ReservedNodeOffering m_targetReservedNodeOffering;
    bool m_targetReservedNodeOfferingHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
