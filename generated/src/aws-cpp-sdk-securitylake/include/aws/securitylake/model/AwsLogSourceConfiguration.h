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
    AWS_SECURITYLAKE_API AwsLogSourceConfiguration();
    AWS_SECURITYLAKE_API AwsLogSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API AwsLogSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the Amazon Web Services account information where you want to enable
     * Security Lake.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }
    inline AwsLogSourceConfiguration& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}
    inline AwsLogSourceConfiguration& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}
    inline AwsLogSourceConfiguration& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }
    inline AwsLogSourceConfiguration& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }
    inline AwsLogSourceConfiguration& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the Regions where you want to enable Security Lake.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }
    inline AwsLogSourceConfiguration& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}
    inline AwsLogSourceConfiguration& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}
    inline AwsLogSourceConfiguration& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    inline AwsLogSourceConfiguration& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }
    inline AwsLogSourceConfiguration& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name for a Amazon Web Services source. </p>
     */
    inline const AwsLogSourceName& GetSourceName() const{ return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    inline void SetSourceName(const AwsLogSourceName& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }
    inline void SetSourceName(AwsLogSourceName&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }
    inline AwsLogSourceConfiguration& WithSourceName(const AwsLogSourceName& value) { SetSourceName(value); return *this;}
    inline AwsLogSourceConfiguration& WithSourceName(AwsLogSourceName&& value) { SetSourceName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for a Amazon Web Services source. </p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }
    inline AwsLogSourceConfiguration& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}
    inline AwsLogSourceConfiguration& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}
    inline AwsLogSourceConfiguration& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    AwsLogSourceName m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
