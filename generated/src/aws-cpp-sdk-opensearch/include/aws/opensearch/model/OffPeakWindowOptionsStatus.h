/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/OffPeakWindowOptions.h>
#include <aws/opensearch/model/OptionStatus.h>
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
   * <p>The status of <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/APIReference/API_OffPeakWindow.html">off-peak
   * window</a> options for a domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/OffPeakWindowOptionsStatus">AWS
   * API Reference</a></p>
   */
  class OffPeakWindowOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API OffPeakWindowOptionsStatus();
    AWS_OPENSEARCHSERVICE_API OffPeakWindowOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API OffPeakWindowOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain's off-peak window configuration.</p>
     */
    inline const OffPeakWindowOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The domain's off-peak window configuration.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The domain's off-peak window configuration.</p>
     */
    inline void SetOptions(const OffPeakWindowOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The domain's off-peak window configuration.</p>
     */
    inline void SetOptions(OffPeakWindowOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The domain's off-peak window configuration.</p>
     */
    inline OffPeakWindowOptionsStatus& WithOptions(const OffPeakWindowOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The domain's off-peak window configuration.</p>
     */
    inline OffPeakWindowOptionsStatus& WithOptions(OffPeakWindowOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The current status of off-peak window options.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of off-peak window options.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of off-peak window options.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of off-peak window options.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of off-peak window options.</p>
     */
    inline OffPeakWindowOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of off-peak window options.</p>
     */
    inline OffPeakWindowOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    OffPeakWindowOptions m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
