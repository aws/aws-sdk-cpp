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
    AWS_MEMORYDB_API PendingModifiedServiceUpdate() = default;
    AWS_MEMORYDB_API PendingModifiedServiceUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API PendingModifiedServiceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const { return m_serviceUpdateName; }
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }
    template<typename ServiceUpdateNameT = Aws::String>
    void SetServiceUpdateName(ServiceUpdateNameT&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::forward<ServiceUpdateNameT>(value); }
    template<typename ServiceUpdateNameT = Aws::String>
    PendingModifiedServiceUpdate& WithServiceUpdateName(ServiceUpdateNameT&& value) { SetServiceUpdateName(std::forward<ServiceUpdateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service update</p>
     */
    inline ServiceUpdateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceUpdateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PendingModifiedServiceUpdate& WithStatus(ServiceUpdateStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    ServiceUpdateStatus m_status{ServiceUpdateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
