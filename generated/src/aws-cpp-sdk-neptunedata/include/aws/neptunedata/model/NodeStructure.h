/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>A node structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/NodeStructure">AWS
   * API Reference</a></p>
   */
  class NodeStructure
  {
  public:
    AWS_NEPTUNEDATA_API NodeStructure();
    AWS_NEPTUNEDATA_API NodeStructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API NodeStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of nodes that have this specific structure.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>Number of nodes that have this specific structure.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>Number of nodes that have this specific structure.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>Number of nodes that have this specific structure.</p>
     */
    inline NodeStructure& WithCount(long long value) { SetCount(value); return *this;}


    /**
     * <p>A list of the node properties present in this specific structure.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeProperties() const{ return m_nodeProperties; }

    /**
     * <p>A list of the node properties present in this specific structure.</p>
     */
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }

    /**
     * <p>A list of the node properties present in this specific structure.</p>
     */
    inline void SetNodeProperties(const Aws::Vector<Aws::String>& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }

    /**
     * <p>A list of the node properties present in this specific structure.</p>
     */
    inline void SetNodeProperties(Aws::Vector<Aws::String>&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }

    /**
     * <p>A list of the node properties present in this specific structure.</p>
     */
    inline NodeStructure& WithNodeProperties(const Aws::Vector<Aws::String>& value) { SetNodeProperties(value); return *this;}

    /**
     * <p>A list of the node properties present in this specific structure.</p>
     */
    inline NodeStructure& WithNodeProperties(Aws::Vector<Aws::String>&& value) { SetNodeProperties(std::move(value)); return *this;}

    /**
     * <p>A list of the node properties present in this specific structure.</p>
     */
    inline NodeStructure& AddNodeProperties(const Aws::String& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties.push_back(value); return *this; }

    /**
     * <p>A list of the node properties present in this specific structure.</p>
     */
    inline NodeStructure& AddNodeProperties(Aws::String&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the node properties present in this specific structure.</p>
     */
    inline NodeStructure& AddNodeProperties(const char* value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties.push_back(value); return *this; }


    /**
     * <p>A list of distinct outgoing edge labels present in this specific
     * structure.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDistinctOutgoingEdgeLabels() const{ return m_distinctOutgoingEdgeLabels; }

    /**
     * <p>A list of distinct outgoing edge labels present in this specific
     * structure.</p>
     */
    inline bool DistinctOutgoingEdgeLabelsHasBeenSet() const { return m_distinctOutgoingEdgeLabelsHasBeenSet; }

    /**
     * <p>A list of distinct outgoing edge labels present in this specific
     * structure.</p>
     */
    inline void SetDistinctOutgoingEdgeLabels(const Aws::Vector<Aws::String>& value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels = value; }

    /**
     * <p>A list of distinct outgoing edge labels present in this specific
     * structure.</p>
     */
    inline void SetDistinctOutgoingEdgeLabels(Aws::Vector<Aws::String>&& value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels = std::move(value); }

    /**
     * <p>A list of distinct outgoing edge labels present in this specific
     * structure.</p>
     */
    inline NodeStructure& WithDistinctOutgoingEdgeLabels(const Aws::Vector<Aws::String>& value) { SetDistinctOutgoingEdgeLabels(value); return *this;}

    /**
     * <p>A list of distinct outgoing edge labels present in this specific
     * structure.</p>
     */
    inline NodeStructure& WithDistinctOutgoingEdgeLabels(Aws::Vector<Aws::String>&& value) { SetDistinctOutgoingEdgeLabels(std::move(value)); return *this;}

    /**
     * <p>A list of distinct outgoing edge labels present in this specific
     * structure.</p>
     */
    inline NodeStructure& AddDistinctOutgoingEdgeLabels(const Aws::String& value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels.push_back(value); return *this; }

    /**
     * <p>A list of distinct outgoing edge labels present in this specific
     * structure.</p>
     */
    inline NodeStructure& AddDistinctOutgoingEdgeLabels(Aws::String&& value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of distinct outgoing edge labels present in this specific
     * structure.</p>
     */
    inline NodeStructure& AddDistinctOutgoingEdgeLabels(const char* value) { m_distinctOutgoingEdgeLabelsHasBeenSet = true; m_distinctOutgoingEdgeLabels.push_back(value); return *this; }

  private:

    long long m_count;
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeProperties;
    bool m_nodePropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_distinctOutgoingEdgeLabels;
    bool m_distinctOutgoingEdgeLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
