﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Waves list filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListWavesRequestFilters">AWS
   * API Reference</a></p>
   */
  class ListWavesRequestFilters
  {
  public:
    AWS_MGN_API ListWavesRequestFilters();
    AWS_MGN_API ListWavesRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ListWavesRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter waves list by archival status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline ListWavesRequestFilters& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter waves list by wave ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWaveIDs() const{ return m_waveIDs; }
    inline bool WaveIDsHasBeenSet() const { return m_waveIDsHasBeenSet; }
    inline void SetWaveIDs(const Aws::Vector<Aws::String>& value) { m_waveIDsHasBeenSet = true; m_waveIDs = value; }
    inline void SetWaveIDs(Aws::Vector<Aws::String>&& value) { m_waveIDsHasBeenSet = true; m_waveIDs = std::move(value); }
    inline ListWavesRequestFilters& WithWaveIDs(const Aws::Vector<Aws::String>& value) { SetWaveIDs(value); return *this;}
    inline ListWavesRequestFilters& WithWaveIDs(Aws::Vector<Aws::String>&& value) { SetWaveIDs(std::move(value)); return *this;}
    inline ListWavesRequestFilters& AddWaveIDs(const Aws::String& value) { m_waveIDsHasBeenSet = true; m_waveIDs.push_back(value); return *this; }
    inline ListWavesRequestFilters& AddWaveIDs(Aws::String&& value) { m_waveIDsHasBeenSet = true; m_waveIDs.push_back(std::move(value)); return *this; }
    inline ListWavesRequestFilters& AddWaveIDs(const char* value) { m_waveIDsHasBeenSet = true; m_waveIDs.push_back(value); return *this; }
    ///@}
  private:

    bool m_isArchived;
    bool m_isArchivedHasBeenSet = false;

    Aws::Vector<Aws::String> m_waveIDs;
    bool m_waveIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
