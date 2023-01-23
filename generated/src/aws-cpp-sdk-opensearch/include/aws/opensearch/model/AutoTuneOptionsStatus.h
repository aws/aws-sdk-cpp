/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AutoTuneOptions.h>
#include <aws/opensearch/model/AutoTuneStatus.h>
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
   * <p>The Auto-Tune status for the domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneOptionsStatus">AWS
   * API Reference</a></p>
   */
  class AutoTuneOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsStatus();
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Auto-Tune settings for updating a domain.</p>
     */
    inline const AutoTuneOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Auto-Tune settings for updating a domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Auto-Tune settings for updating a domain.</p>
     */
    inline void SetOptions(const AutoTuneOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Auto-Tune settings for updating a domain.</p>
     */
    inline void SetOptions(AutoTuneOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Auto-Tune settings for updating a domain.</p>
     */
    inline AutoTuneOptionsStatus& WithOptions(const AutoTuneOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Auto-Tune settings for updating a domain.</p>
     */
    inline AutoTuneOptionsStatus& WithOptions(AutoTuneOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The current status of Auto-Tune for a domain.</p>
     */
    inline const AutoTuneStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of Auto-Tune for a domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of Auto-Tune for a domain.</p>
     */
    inline void SetStatus(const AutoTuneStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of Auto-Tune for a domain.</p>
     */
    inline void SetStatus(AutoTuneStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of Auto-Tune for a domain.</p>
     */
    inline AutoTuneOptionsStatus& WithStatus(const AutoTuneStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of Auto-Tune for a domain.</p>
     */
    inline AutoTuneOptionsStatus& WithStatus(AutoTuneStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    AutoTuneOptions m_options;
    bool m_optionsHasBeenSet = false;

    AutoTuneStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
