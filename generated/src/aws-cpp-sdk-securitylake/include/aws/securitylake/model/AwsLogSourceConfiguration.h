/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/AwsLogSourceName.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>To add a natively-supported Amazon Web Services service as a log source, use
   * these parameters to specify the configuration settings for the log source.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/AwsLogSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsLogSourceConfiguration
  {
  public:
    AWS_SECURITYLAKE_API AwsLogSourceConfiguration() = default;
    AWS_SECURITYLAKE_API AwsLogSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API AwsLogSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the Amazon Web Services account information where you want to enable
     * Security Lake.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const { return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    AwsLogSourceConfiguration& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = Aws::String>
    AwsLogSourceConfiguration& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the Regions where you want to enable Security Lake.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    AwsLogSourceConfiguration& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    AwsLogSourceConfiguration& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name for a Amazon Web Services source. </p>
     */
    inline AwsLogSourceName GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    inline void SetSourceName(AwsLogSourceName value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }
    inline AwsLogSourceConfiguration& WithSourceName(AwsLogSourceName value) { SetSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for a Amazon Web Services source. </p>
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    AwsLogSourceConfiguration& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    AwsLogSourceName m_sourceName{AwsLogSourceName::NOT_SET};
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
