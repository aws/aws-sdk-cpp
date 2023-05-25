/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opensearch/model/OptionStatus.h>
#include <aws/opensearch/model/LogType.h>
#include <aws/opensearch/model/LogPublishingOption.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The configured log publishing options for the domain and their current
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/LogPublishingOptionsStatus">AWS
   * API Reference</a></p>
   */
  class LogPublishingOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API LogPublishingOptionsStatus();
    AWS_OPENSEARCHSERVICE_API LogPublishingOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API LogPublishingOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The log publishing options configured for the domain.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetOptions() const{ return m_options; }

    /**
     * <p>The log publishing options configured for the domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The log publishing options configured for the domain.</p>
     */
    inline void SetOptions(const Aws::Map<LogType, LogPublishingOption>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The log publishing options configured for the domain.</p>
     */
    inline void SetOptions(Aws::Map<LogType, LogPublishingOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The log publishing options configured for the domain.</p>
     */
    inline LogPublishingOptionsStatus& WithOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetOptions(value); return *this;}

    /**
     * <p>The log publishing options configured for the domain.</p>
     */
    inline LogPublishingOptionsStatus& WithOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The log publishing options configured for the domain.</p>
     */
    inline LogPublishingOptionsStatus& AddOptions(const LogType& key, const LogPublishingOption& value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }

    /**
     * <p>The log publishing options configured for the domain.</p>
     */
    inline LogPublishingOptionsStatus& AddOptions(LogType&& key, const LogPublishingOption& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p>The log publishing options configured for the domain.</p>
     */
    inline LogPublishingOptionsStatus& AddOptions(const LogType& key, LogPublishingOption&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The log publishing options configured for the domain.</p>
     */
    inline LogPublishingOptionsStatus& AddOptions(LogType&& key, LogPublishingOption&& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The status of the log publishing options for the domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the log publishing options for the domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the log publishing options for the domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the log publishing options for the domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the log publishing options for the domain.</p>
     */
    inline LogPublishingOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the log publishing options for the domain.</p>
     */
    inline LogPublishingOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Map<LogType, LogPublishingOption> m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
