/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/LogSourceResource.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Amazon Security Lake can collect logs and events from natively-supported
   * Amazon Web Services services and custom sources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/LogSource">AWS
   * API Reference</a></p>
   */
  class LogSource
  {
  public:
    AWS_SECURITYLAKE_API LogSource() = default;
    AWS_SECURITYLAKE_API LogSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API LogSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the account from which you want to collect logs.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    LogSource& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the Regions from which you want to collect logs.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    LogSource& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the sources from which you want to collect logs.</p>
     */
    inline const Aws::Vector<LogSourceResource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<LogSourceResource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<LogSourceResource>>
    LogSource& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = LogSourceResource>
    LogSource& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<LogSourceResource> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
