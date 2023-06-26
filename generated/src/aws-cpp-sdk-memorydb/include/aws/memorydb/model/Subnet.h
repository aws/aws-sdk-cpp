/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/AvailabilityZone.h>
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
   * <p>Represents the subnet associated with a cluster. This parameter refers to
   * subnets defined in Amazon Virtual Private Cloud (Amazon VPC) and used with
   * MemoryDB.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Subnet">AWS API
   * Reference</a></p>
   */
  class Subnet
  {
  public:
    AWS_MEMORYDB_API Subnet();
    AWS_MEMORYDB_API Subnet(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Subnet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline Subnet& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline Subnet& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline Subnet& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The Availability Zone where the subnet resides</p>
     */
    inline const AvailabilityZone& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where the subnet resides</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone where the subnet resides</p>
     */
    inline void SetAvailabilityZone(const AvailabilityZone& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where the subnet resides</p>
     */
    inline void SetAvailabilityZone(AvailabilityZone&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where the subnet resides</p>
     */
    inline Subnet& WithAvailabilityZone(const AvailabilityZone& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where the subnet resides</p>
     */
    inline Subnet& WithAvailabilityZone(AvailabilityZone&& value) { SetAvailabilityZone(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    AvailabilityZone m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
