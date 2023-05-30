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
    AWS_SECURITYLAKE_API LogSource();
    AWS_SECURITYLAKE_API LogSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API LogSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify the account from which you want to collect logs.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>Specify the account from which you want to collect logs.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>Specify the account from which you want to collect logs.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>Specify the account from which you want to collect logs.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>Specify the account from which you want to collect logs.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>Specify the account from which you want to collect logs.</p>
     */
    inline LogSource& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>Specify the account from which you want to collect logs.</p>
     */
    inline LogSource& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>Specify the account from which you want to collect logs.</p>
     */
    inline LogSource& WithAccount(const char* value) { SetAccount(value); return *this;}


    /**
     * <p>Specify the Regions from which you want to collect logs.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>Specify the Regions from which you want to collect logs.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>Specify the Regions from which you want to collect logs.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>Specify the Regions from which you want to collect logs.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>Specify the Regions from which you want to collect logs.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>Specify the Regions from which you want to collect logs.</p>
     */
    inline LogSource& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>Specify the Regions from which you want to collect logs.</p>
     */
    inline LogSource& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>Specify the Regions from which you want to collect logs.</p>
     */
    inline LogSource& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Specify the sources from which you want to collect logs.</p>
     */
    inline const Aws::Vector<LogSourceResource>& GetSources() const{ return m_sources; }

    /**
     * <p>Specify the sources from which you want to collect logs.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>Specify the sources from which you want to collect logs.</p>
     */
    inline void SetSources(const Aws::Vector<LogSourceResource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>Specify the sources from which you want to collect logs.</p>
     */
    inline void SetSources(Aws::Vector<LogSourceResource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>Specify the sources from which you want to collect logs.</p>
     */
    inline LogSource& WithSources(const Aws::Vector<LogSourceResource>& value) { SetSources(value); return *this;}

    /**
     * <p>Specify the sources from which you want to collect logs.</p>
     */
    inline LogSource& WithSources(Aws::Vector<LogSourceResource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>Specify the sources from which you want to collect logs.</p>
     */
    inline LogSource& AddSources(const LogSourceResource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>Specify the sources from which you want to collect logs.</p>
     */
    inline LogSource& AddSources(LogSourceResource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

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
