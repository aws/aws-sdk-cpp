/**
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
   * <p>Applications list filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListApplicationsRequestFilters">AWS
   * API Reference</a></p>
   */
  class ListApplicationsRequestFilters
  {
  public:
    AWS_MGN_API ListApplicationsRequestFilters();
    AWS_MGN_API ListApplicationsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ListApplicationsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter applications list by application ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIDs() const{ return m_applicationIDs; }
    inline bool ApplicationIDsHasBeenSet() const { return m_applicationIDsHasBeenSet; }
    inline void SetApplicationIDs(const Aws::Vector<Aws::String>& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs = value; }
    inline void SetApplicationIDs(Aws::Vector<Aws::String>&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs = std::move(value); }
    inline ListApplicationsRequestFilters& WithApplicationIDs(const Aws::Vector<Aws::String>& value) { SetApplicationIDs(value); return *this;}
    inline ListApplicationsRequestFilters& WithApplicationIDs(Aws::Vector<Aws::String>&& value) { SetApplicationIDs(std::move(value)); return *this;}
    inline ListApplicationsRequestFilters& AddApplicationIDs(const Aws::String& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.push_back(value); return *this; }
    inline ListApplicationsRequestFilters& AddApplicationIDs(Aws::String&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.push_back(std::move(value)); return *this; }
    inline ListApplicationsRequestFilters& AddApplicationIDs(const char* value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter applications list by archival status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline ListApplicationsRequestFilters& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter applications list by wave ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWaveIDs() const{ return m_waveIDs; }
    inline bool WaveIDsHasBeenSet() const { return m_waveIDsHasBeenSet; }
    inline void SetWaveIDs(const Aws::Vector<Aws::String>& value) { m_waveIDsHasBeenSet = true; m_waveIDs = value; }
    inline void SetWaveIDs(Aws::Vector<Aws::String>&& value) { m_waveIDsHasBeenSet = true; m_waveIDs = std::move(value); }
    inline ListApplicationsRequestFilters& WithWaveIDs(const Aws::Vector<Aws::String>& value) { SetWaveIDs(value); return *this;}
    inline ListApplicationsRequestFilters& WithWaveIDs(Aws::Vector<Aws::String>&& value) { SetWaveIDs(std::move(value)); return *this;}
    inline ListApplicationsRequestFilters& AddWaveIDs(const Aws::String& value) { m_waveIDsHasBeenSet = true; m_waveIDs.push_back(value); return *this; }
    inline ListApplicationsRequestFilters& AddWaveIDs(Aws::String&& value) { m_waveIDsHasBeenSet = true; m_waveIDs.push_back(std::move(value)); return *this; }
    inline ListApplicationsRequestFilters& AddWaveIDs(const char* value) { m_waveIDsHasBeenSet = true; m_waveIDs.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicationIDs;
    bool m_applicationIDsHasBeenSet = false;

    bool m_isArchived;
    bool m_isArchivedHasBeenSet = false;

    Aws::Vector<Aws::String> m_waveIDs;
    bool m_waveIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
