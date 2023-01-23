/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/memorydb/model/Endpoint.h>
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
   * <p>Represents an individual node within a cluster. Each node runs its own
   * instance of the cluster's protocol-compliant caching software.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Node">AWS API
   * Reference</a></p>
   */
  class Node
  {
  public:
    AWS_MEMORYDB_API Node();
    AWS_MEMORYDB_API Node(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Node& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The node identifier. A node name is a numeric identifier (0001, 0002, etc.).
     * The combination of cluster name, shard name and node name uniquely identifies
     * every node used in a customer's Amazon account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The node identifier. A node name is a numeric identifier (0001, 0002, etc.).
     * The combination of cluster name, shard name and node name uniquely identifies
     * every node used in a customer's Amazon account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The node identifier. A node name is a numeric identifier (0001, 0002, etc.).
     * The combination of cluster name, shard name and node name uniquely identifies
     * every node used in a customer's Amazon account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The node identifier. A node name is a numeric identifier (0001, 0002, etc.).
     * The combination of cluster name, shard name and node name uniquely identifies
     * every node used in a customer's Amazon account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The node identifier. A node name is a numeric identifier (0001, 0002, etc.).
     * The combination of cluster name, shard name and node name uniquely identifies
     * every node used in a customer's Amazon account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The node identifier. A node name is a numeric identifier (0001, 0002, etc.).
     * The combination of cluster name, shard name and node name uniquely identifies
     * every node used in a customer's Amazon account.</p>
     */
    inline Node& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The node identifier. A node name is a numeric identifier (0001, 0002, etc.).
     * The combination of cluster name, shard name and node name uniquely identifies
     * every node used in a customer's Amazon account.</p>
     */
    inline Node& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The node identifier. A node name is a numeric identifier (0001, 0002, etc.).
     * The combination of cluster name, shard name and node name uniquely identifies
     * every node used in a customer's Amazon account.</p>
     */
    inline Node& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the service update on the node</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the service update on the node</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the service update on the node</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the service update on the node</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the service update on the node</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the service update on the node</p>
     */
    inline Node& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the service update on the node</p>
     */
    inline Node& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the service update on the node</p>
     */
    inline Node& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The Availability Zone in which the node resides</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which the node resides</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which the node resides</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which the node resides</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the node resides</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the node resides</p>
     */
    inline Node& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the node resides</p>
     */
    inline Node& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the node resides</p>
     */
    inline Node& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The date and time when the node was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time when the node was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The date and time when the node was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The date and time when the node was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The date and time when the node was created.</p>
     */
    inline Node& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The date and time when the node was created.</p>
     */
    inline Node& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The hostname for connecting to this node.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The hostname for connecting to this node.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The hostname for connecting to this node.</p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The hostname for connecting to this node.</p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The hostname for connecting to this node.</p>
     */
    inline Node& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The hostname for connecting to this node.</p>
     */
    inline Node& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
