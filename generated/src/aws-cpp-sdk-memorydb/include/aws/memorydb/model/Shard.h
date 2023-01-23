/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/Node.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Represents a collection of nodes in a cluster. One node in the node group is
   * the read/write primary node. All the other nodes are read-only Replica
   * nodes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Shard">AWS API
   * Reference</a></p>
   */
  class Shard
  {
  public:
    AWS_MEMORYDB_API Shard();
    AWS_MEMORYDB_API Shard(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Shard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the shard</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the shard</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the shard</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the shard</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the shard</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the shard</p>
     */
    inline Shard& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the shard</p>
     */
    inline Shard& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the shard</p>
     */
    inline Shard& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current state of this replication group - creating, available, modifying,
     * deleting.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of this replication group - creating, available, modifying,
     * deleting.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of this replication group - creating, available, modifying,
     * deleting.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of this replication group - creating, available, modifying,
     * deleting.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of this replication group - creating, available, modifying,
     * deleting.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current state of this replication group - creating, available, modifying,
     * deleting.</p>
     */
    inline Shard& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of this replication group - creating, available, modifying,
     * deleting.</p>
     */
    inline Shard& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current state of this replication group - creating, available, modifying,
     * deleting.</p>
     */
    inline Shard& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The keyspace for this shard.</p>
     */
    inline const Aws::String& GetSlots() const{ return m_slots; }

    /**
     * <p>The keyspace for this shard.</p>
     */
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }

    /**
     * <p>The keyspace for this shard.</p>
     */
    inline void SetSlots(const Aws::String& value) { m_slotsHasBeenSet = true; m_slots = value; }

    /**
     * <p>The keyspace for this shard.</p>
     */
    inline void SetSlots(Aws::String&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }

    /**
     * <p>The keyspace for this shard.</p>
     */
    inline void SetSlots(const char* value) { m_slotsHasBeenSet = true; m_slots.assign(value); }

    /**
     * <p>The keyspace for this shard.</p>
     */
    inline Shard& WithSlots(const Aws::String& value) { SetSlots(value); return *this;}

    /**
     * <p>The keyspace for this shard.</p>
     */
    inline Shard& WithSlots(Aws::String&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>The keyspace for this shard.</p>
     */
    inline Shard& WithSlots(const char* value) { SetSlots(value); return *this;}


    /**
     * <p>A list containing information about individual nodes within the shard</p>
     */
    inline const Aws::Vector<Node>& GetNodes() const{ return m_nodes; }

    /**
     * <p>A list containing information about individual nodes within the shard</p>
     */
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }

    /**
     * <p>A list containing information about individual nodes within the shard</p>
     */
    inline void SetNodes(const Aws::Vector<Node>& value) { m_nodesHasBeenSet = true; m_nodes = value; }

    /**
     * <p>A list containing information about individual nodes within the shard</p>
     */
    inline void SetNodes(Aws::Vector<Node>&& value) { m_nodesHasBeenSet = true; m_nodes = std::move(value); }

    /**
     * <p>A list containing information about individual nodes within the shard</p>
     */
    inline Shard& WithNodes(const Aws::Vector<Node>& value) { SetNodes(value); return *this;}

    /**
     * <p>A list containing information about individual nodes within the shard</p>
     */
    inline Shard& WithNodes(Aws::Vector<Node>&& value) { SetNodes(std::move(value)); return *this;}

    /**
     * <p>A list containing information about individual nodes within the shard</p>
     */
    inline Shard& AddNodes(const Node& value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }

    /**
     * <p>A list containing information about individual nodes within the shard</p>
     */
    inline Shard& AddNodes(Node&& value) { m_nodesHasBeenSet = true; m_nodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of nodes in the shard</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The number of nodes in the shard</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The number of nodes in the shard</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The number of nodes in the shard</p>
     */
    inline Shard& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_slots;
    bool m_slotsHasBeenSet = false;

    Aws::Vector<Node> m_nodes;
    bool m_nodesHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
