/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/ServiceUpdateStatus.h>
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
   * <p>Update action that has yet to be processed for the corresponding apply/stop
   * request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/PendingModifiedServiceUpdate">AWS
   * API Reference</a></p>
   */
  class PendingModifiedServiceUpdate
  {
  public:
    AWS_MEMORYDB_API PendingModifiedServiceUpdate();
    AWS_MEMORYDB_API PendingModifiedServiceUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API PendingModifiedServiceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline PendingModifiedServiceUpdate& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline PendingModifiedServiceUpdate& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline PendingModifiedServiceUpdate& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}


    /**
     * <p>The status of the service update</p>
     */
    inline const ServiceUpdateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the service update</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the service update</p>
     */
    inline void SetStatus(const ServiceUpdateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the service update</p>
     */
    inline void SetStatus(ServiceUpdateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the service update</p>
     */
    inline PendingModifiedServiceUpdate& WithStatus(const ServiceUpdateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the service update</p>
     */
    inline PendingModifiedServiceUpdate& WithStatus(ServiceUpdateStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    ServiceUpdateStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
