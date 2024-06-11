/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/ShardConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Provides details of a shard in a snapshot</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ShardDetail">AWS
   * API Reference</a></p>
   */
  class ShardDetail
  {
  public:
    AWS_MEMORYDB_API ShardDetail();
    AWS_MEMORYDB_API ShardDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ShardDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the shard</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ShardDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ShardDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ShardDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the shard</p>
     */
    inline const ShardConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const ShardConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(ShardConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline ShardDetail& WithConfiguration(const ShardConfiguration& value) { SetConfiguration(value); return *this;}
    inline ShardDetail& WithConfiguration(ShardConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the shard's snapshot</p>
     */
    inline const Aws::String& GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(const Aws::String& value) { m_sizeHasBeenSet = true; m_size = value; }
    inline void SetSize(Aws::String&& value) { m_sizeHasBeenSet = true; m_size = std::move(value); }
    inline void SetSize(const char* value) { m_sizeHasBeenSet = true; m_size.assign(value); }
    inline ShardDetail& WithSize(const Aws::String& value) { SetSize(value); return *this;}
    inline ShardDetail& WithSize(Aws::String&& value) { SetSize(std::move(value)); return *this;}
    inline ShardDetail& WithSize(const char* value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the shard's snapshot was created</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreationTime() const{ return m_snapshotCreationTime; }
    inline bool SnapshotCreationTimeHasBeenSet() const { return m_snapshotCreationTimeHasBeenSet; }
    inline void SetSnapshotCreationTime(const Aws::Utils::DateTime& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = value; }
    inline void SetSnapshotCreationTime(Aws::Utils::DateTime&& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = std::move(value); }
    inline ShardDetail& WithSnapshotCreationTime(const Aws::Utils::DateTime& value) { SetSnapshotCreationTime(value); return *this;}
    inline ShardDetail& WithSnapshotCreationTime(Aws::Utils::DateTime&& value) { SetSnapshotCreationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ShardConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_size;
    bool m_sizeHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreationTime;
    bool m_snapshotCreationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
