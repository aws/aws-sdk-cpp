/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Updates a blocked phrases configuration in your Amazon Q Business
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/BlockedPhrasesConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class BlockedPhrasesConfigurationUpdate
  {
  public:
    AWS_QBUSINESS_API BlockedPhrasesConfigurationUpdate() = default;
    AWS_QBUSINESS_API BlockedPhrasesConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API BlockedPhrasesConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Creates or updates a blocked phrases configuration in your Amazon Q Business
     * application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedPhrasesToCreateOrUpdate() const { return m_blockedPhrasesToCreateOrUpdate; }
    inline bool BlockedPhrasesToCreateOrUpdateHasBeenSet() const { return m_blockedPhrasesToCreateOrUpdateHasBeenSet; }
    template<typename BlockedPhrasesToCreateOrUpdateT = Aws::Vector<Aws::String>>
    void SetBlockedPhrasesToCreateOrUpdate(BlockedPhrasesToCreateOrUpdateT&& value) { m_blockedPhrasesToCreateOrUpdateHasBeenSet = true; m_blockedPhrasesToCreateOrUpdate = std::forward<BlockedPhrasesToCreateOrUpdateT>(value); }
    template<typename BlockedPhrasesToCreateOrUpdateT = Aws::Vector<Aws::String>>
    BlockedPhrasesConfigurationUpdate& WithBlockedPhrasesToCreateOrUpdate(BlockedPhrasesToCreateOrUpdateT&& value) { SetBlockedPhrasesToCreateOrUpdate(std::forward<BlockedPhrasesToCreateOrUpdateT>(value)); return *this;}
    template<typename BlockedPhrasesToCreateOrUpdateT = Aws::String>
    BlockedPhrasesConfigurationUpdate& AddBlockedPhrasesToCreateOrUpdate(BlockedPhrasesToCreateOrUpdateT&& value) { m_blockedPhrasesToCreateOrUpdateHasBeenSet = true; m_blockedPhrasesToCreateOrUpdate.emplace_back(std::forward<BlockedPhrasesToCreateOrUpdateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Deletes a blocked phrases configuration in your Amazon Q Business
     * application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedPhrasesToDelete() const { return m_blockedPhrasesToDelete; }
    inline bool BlockedPhrasesToDeleteHasBeenSet() const { return m_blockedPhrasesToDeleteHasBeenSet; }
    template<typename BlockedPhrasesToDeleteT = Aws::Vector<Aws::String>>
    void SetBlockedPhrasesToDelete(BlockedPhrasesToDeleteT&& value) { m_blockedPhrasesToDeleteHasBeenSet = true; m_blockedPhrasesToDelete = std::forward<BlockedPhrasesToDeleteT>(value); }
    template<typename BlockedPhrasesToDeleteT = Aws::Vector<Aws::String>>
    BlockedPhrasesConfigurationUpdate& WithBlockedPhrasesToDelete(BlockedPhrasesToDeleteT&& value) { SetBlockedPhrasesToDelete(std::forward<BlockedPhrasesToDeleteT>(value)); return *this;}
    template<typename BlockedPhrasesToDeleteT = Aws::String>
    BlockedPhrasesConfigurationUpdate& AddBlockedPhrasesToDelete(BlockedPhrasesToDeleteT&& value) { m_blockedPhrasesToDeleteHasBeenSet = true; m_blockedPhrasesToDelete.emplace_back(std::forward<BlockedPhrasesToDeleteT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configured custom message displayed to your end user when they use
     * blocked phrase during chat.</p>
     */
    inline const Aws::String& GetSystemMessageOverride() const { return m_systemMessageOverride; }
    inline bool SystemMessageOverrideHasBeenSet() const { return m_systemMessageOverrideHasBeenSet; }
    template<typename SystemMessageOverrideT = Aws::String>
    void SetSystemMessageOverride(SystemMessageOverrideT&& value) { m_systemMessageOverrideHasBeenSet = true; m_systemMessageOverride = std::forward<SystemMessageOverrideT>(value); }
    template<typename SystemMessageOverrideT = Aws::String>
    BlockedPhrasesConfigurationUpdate& WithSystemMessageOverride(SystemMessageOverrideT&& value) { SetSystemMessageOverride(std::forward<SystemMessageOverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_blockedPhrasesToCreateOrUpdate;
    bool m_blockedPhrasesToCreateOrUpdateHasBeenSet = false;

    Aws::Vector<Aws::String> m_blockedPhrasesToDelete;
    bool m_blockedPhrasesToDeleteHasBeenSet = false;

    Aws::String m_systemMessageOverride;
    bool m_systemMessageOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
