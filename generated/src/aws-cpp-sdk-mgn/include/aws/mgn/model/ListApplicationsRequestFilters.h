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
    AWS_MGN_API ListApplicationsRequestFilters() = default;
    AWS_MGN_API ListApplicationsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ListApplicationsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter applications list by application ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIDs() const { return m_applicationIDs; }
    inline bool ApplicationIDsHasBeenSet() const { return m_applicationIDsHasBeenSet; }
    template<typename ApplicationIDsT = Aws::Vector<Aws::String>>
    void SetApplicationIDs(ApplicationIDsT&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs = std::forward<ApplicationIDsT>(value); }
    template<typename ApplicationIDsT = Aws::Vector<Aws::String>>
    ListApplicationsRequestFilters& WithApplicationIDs(ApplicationIDsT&& value) { SetApplicationIDs(std::forward<ApplicationIDsT>(value)); return *this;}
    template<typename ApplicationIDsT = Aws::String>
    ListApplicationsRequestFilters& AddApplicationIDs(ApplicationIDsT&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.emplace_back(std::forward<ApplicationIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter applications list by archival status.</p>
     */
    inline bool GetIsArchived() const { return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline ListApplicationsRequestFilters& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter applications list by wave ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWaveIDs() const { return m_waveIDs; }
    inline bool WaveIDsHasBeenSet() const { return m_waveIDsHasBeenSet; }
    template<typename WaveIDsT = Aws::Vector<Aws::String>>
    void SetWaveIDs(WaveIDsT&& value) { m_waveIDsHasBeenSet = true; m_waveIDs = std::forward<WaveIDsT>(value); }
    template<typename WaveIDsT = Aws::Vector<Aws::String>>
    ListApplicationsRequestFilters& WithWaveIDs(WaveIDsT&& value) { SetWaveIDs(std::forward<WaveIDsT>(value)); return *this;}
    template<typename WaveIDsT = Aws::String>
    ListApplicationsRequestFilters& AddWaveIDs(WaveIDsT&& value) { m_waveIDsHasBeenSet = true; m_waveIDs.emplace_back(std::forward<WaveIDsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicationIDs;
    bool m_applicationIDsHasBeenSet = false;

    bool m_isArchived{false};
    bool m_isArchivedHasBeenSet = false;

    Aws::Vector<Aws::String> m_waveIDs;
    bool m_waveIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
