/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Represents the information required for client programs to connect to the
   * cluster and its nodes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_MEMORYDB_API Endpoint();
    AWS_MEMORYDB_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS hostname of the node.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The DNS hostname of the node.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The DNS hostname of the node.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The DNS hostname of the node.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The DNS hostname of the node.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The DNS hostname of the node.</p>
     */
    inline Endpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The DNS hostname of the node.</p>
     */
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The DNS hostname of the node.</p>
     */
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The port number that the engine is listening on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number that the engine is listening on.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number that the engine is listening on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number that the engine is listening on.</p>
     */
    inline Endpoint& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
