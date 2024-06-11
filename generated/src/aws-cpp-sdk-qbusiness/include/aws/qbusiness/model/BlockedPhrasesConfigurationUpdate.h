﻿/**
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
    AWS_QBUSINESS_API BlockedPhrasesConfigurationUpdate();
    AWS_QBUSINESS_API BlockedPhrasesConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API BlockedPhrasesConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Creates or updates a blocked phrases configuration in your Amazon Q Business
     * application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedPhrasesToCreateOrUpdate() const{ return m_blockedPhrasesToCreateOrUpdate; }
    inline bool BlockedPhrasesToCreateOrUpdateHasBeenSet() const { return m_blockedPhrasesToCreateOrUpdateHasBeenSet; }
    inline void SetBlockedPhrasesToCreateOrUpdate(const Aws::Vector<Aws::String>& value) { m_blockedPhrasesToCreateOrUpdateHasBeenSet = true; m_blockedPhrasesToCreateOrUpdate = value; }
    inline void SetBlockedPhrasesToCreateOrUpdate(Aws::Vector<Aws::String>&& value) { m_blockedPhrasesToCreateOrUpdateHasBeenSet = true; m_blockedPhrasesToCreateOrUpdate = std::move(value); }
    inline BlockedPhrasesConfigurationUpdate& WithBlockedPhrasesToCreateOrUpdate(const Aws::Vector<Aws::String>& value) { SetBlockedPhrasesToCreateOrUpdate(value); return *this;}
    inline BlockedPhrasesConfigurationUpdate& WithBlockedPhrasesToCreateOrUpdate(Aws::Vector<Aws::String>&& value) { SetBlockedPhrasesToCreateOrUpdate(std::move(value)); return *this;}
    inline BlockedPhrasesConfigurationUpdate& AddBlockedPhrasesToCreateOrUpdate(const Aws::String& value) { m_blockedPhrasesToCreateOrUpdateHasBeenSet = true; m_blockedPhrasesToCreateOrUpdate.push_back(value); return *this; }
    inline BlockedPhrasesConfigurationUpdate& AddBlockedPhrasesToCreateOrUpdate(Aws::String&& value) { m_blockedPhrasesToCreateOrUpdateHasBeenSet = true; m_blockedPhrasesToCreateOrUpdate.push_back(std::move(value)); return *this; }
    inline BlockedPhrasesConfigurationUpdate& AddBlockedPhrasesToCreateOrUpdate(const char* value) { m_blockedPhrasesToCreateOrUpdateHasBeenSet = true; m_blockedPhrasesToCreateOrUpdate.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Deletes a blocked phrases configuration in your Amazon Q Business
     * application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedPhrasesToDelete() const{ return m_blockedPhrasesToDelete; }
    inline bool BlockedPhrasesToDeleteHasBeenSet() const { return m_blockedPhrasesToDeleteHasBeenSet; }
    inline void SetBlockedPhrasesToDelete(const Aws::Vector<Aws::String>& value) { m_blockedPhrasesToDeleteHasBeenSet = true; m_blockedPhrasesToDelete = value; }
    inline void SetBlockedPhrasesToDelete(Aws::Vector<Aws::String>&& value) { m_blockedPhrasesToDeleteHasBeenSet = true; m_blockedPhrasesToDelete = std::move(value); }
    inline BlockedPhrasesConfigurationUpdate& WithBlockedPhrasesToDelete(const Aws::Vector<Aws::String>& value) { SetBlockedPhrasesToDelete(value); return *this;}
    inline BlockedPhrasesConfigurationUpdate& WithBlockedPhrasesToDelete(Aws::Vector<Aws::String>&& value) { SetBlockedPhrasesToDelete(std::move(value)); return *this;}
    inline BlockedPhrasesConfigurationUpdate& AddBlockedPhrasesToDelete(const Aws::String& value) { m_blockedPhrasesToDeleteHasBeenSet = true; m_blockedPhrasesToDelete.push_back(value); return *this; }
    inline BlockedPhrasesConfigurationUpdate& AddBlockedPhrasesToDelete(Aws::String&& value) { m_blockedPhrasesToDeleteHasBeenSet = true; m_blockedPhrasesToDelete.push_back(std::move(value)); return *this; }
    inline BlockedPhrasesConfigurationUpdate& AddBlockedPhrasesToDelete(const char* value) { m_blockedPhrasesToDeleteHasBeenSet = true; m_blockedPhrasesToDelete.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configured custom message displayed to your end user when they use
     * blocked phrase during chat.</p>
     */
    inline const Aws::String& GetSystemMessageOverride() const{ return m_systemMessageOverride; }
    inline bool SystemMessageOverrideHasBeenSet() const { return m_systemMessageOverrideHasBeenSet; }
    inline void SetSystemMessageOverride(const Aws::String& value) { m_systemMessageOverrideHasBeenSet = true; m_systemMessageOverride = value; }
    inline void SetSystemMessageOverride(Aws::String&& value) { m_systemMessageOverrideHasBeenSet = true; m_systemMessageOverride = std::move(value); }
    inline void SetSystemMessageOverride(const char* value) { m_systemMessageOverrideHasBeenSet = true; m_systemMessageOverride.assign(value); }
    inline BlockedPhrasesConfigurationUpdate& WithSystemMessageOverride(const Aws::String& value) { SetSystemMessageOverride(value); return *this;}
    inline BlockedPhrasesConfigurationUpdate& WithSystemMessageOverride(Aws::String&& value) { SetSystemMessageOverride(std::move(value)); return *this;}
    inline BlockedPhrasesConfigurationUpdate& WithSystemMessageOverride(const char* value) { SetSystemMessageOverride(value); return *this;}
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
