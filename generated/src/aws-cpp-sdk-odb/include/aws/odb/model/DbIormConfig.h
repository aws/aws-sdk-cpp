/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>The IORM configuration settings for the database.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DbIormConfig">AWS
   * API Reference</a></p>
   */
  class DbIormConfig
  {
  public:
    AWS_ODB_API DbIormConfig() = default;
    AWS_ODB_API DbIormConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API DbIormConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The database name. For the default DbPlan, the dbName is
     * <code>default</code>.</p>
     */
    inline const Aws::String& GetDbName() const { return m_dbName; }
    inline bool DbNameHasBeenSet() const { return m_dbNameHasBeenSet; }
    template<typename DbNameT = Aws::String>
    void SetDbName(DbNameT&& value) { m_dbNameHasBeenSet = true; m_dbName = std::forward<DbNameT>(value); }
    template<typename DbNameT = Aws::String>
    DbIormConfig& WithDbName(DbNameT&& value) { SetDbName(std::forward<DbNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flash cache limit for this database. This value is internally configured
     * based on the share value assigned to the database.</p>
     */
    inline const Aws::String& GetFlashCacheLimit() const { return m_flashCacheLimit; }
    inline bool FlashCacheLimitHasBeenSet() const { return m_flashCacheLimitHasBeenSet; }
    template<typename FlashCacheLimitT = Aws::String>
    void SetFlashCacheLimit(FlashCacheLimitT&& value) { m_flashCacheLimitHasBeenSet = true; m_flashCacheLimit = std::forward<FlashCacheLimitT>(value); }
    template<typename FlashCacheLimitT = Aws::String>
    DbIormConfig& WithFlashCacheLimit(FlashCacheLimitT&& value) { SetFlashCacheLimit(std::forward<FlashCacheLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative priority of this database.</p>
     */
    inline int GetShare() const { return m_share; }
    inline bool ShareHasBeenSet() const { return m_shareHasBeenSet; }
    inline void SetShare(int value) { m_shareHasBeenSet = true; m_share = value; }
    inline DbIormConfig& WithShare(int value) { SetShare(value); return *this;}
    ///@}
  private:

    Aws::String m_dbName;
    bool m_dbNameHasBeenSet = false;

    Aws::String m_flashCacheLimit;
    bool m_flashCacheLimitHasBeenSet = false;

    int m_share{0};
    bool m_shareHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
