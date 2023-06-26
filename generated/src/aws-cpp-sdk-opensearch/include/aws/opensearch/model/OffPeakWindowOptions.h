/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/OffPeakWindow.h>
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
   * <p>Options for a domain's <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/APIReference/API_OffPeakWindow.html">off-peak
   * window</a>, during which OpenSearch Service can perform mandatory configuration
   * changes on the domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/OffPeakWindowOptions">AWS
   * API Reference</a></p>
   */
  class OffPeakWindowOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API OffPeakWindowOptions();
    AWS_OPENSEARCHSERVICE_API OffPeakWindowOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API OffPeakWindowOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to enable an off-peak window.</p> <p>This option is only available
     * when modifying a domain created prior to February 16, 2023, not when creating a
     * new domain. All domains created after this date have the off-peak window enabled
     * by default. You can't disable the off-peak window after it's enabled for a
     * domain.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether to enable an off-peak window.</p> <p>This option is only available
     * when modifying a domain created prior to February 16, 2023, not when creating a
     * new domain. All domains created after this date have the off-peak window enabled
     * by default. You can't disable the off-peak window after it's enabled for a
     * domain.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether to enable an off-peak window.</p> <p>This option is only available
     * when modifying a domain created prior to February 16, 2023, not when creating a
     * new domain. All domains created after this date have the off-peak window enabled
     * by default. You can't disable the off-peak window after it's enabled for a
     * domain.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether to enable an off-peak window.</p> <p>This option is only available
     * when modifying a domain created prior to February 16, 2023, not when creating a
     * new domain. All domains created after this date have the off-peak window enabled
     * by default. You can't disable the off-peak window after it's enabled for a
     * domain.</p>
     */
    inline OffPeakWindowOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Off-peak window settings for the domain.</p>
     */
    inline const OffPeakWindow& GetOffPeakWindow() const{ return m_offPeakWindow; }

    /**
     * <p>Off-peak window settings for the domain.</p>
     */
    inline bool OffPeakWindowHasBeenSet() const { return m_offPeakWindowHasBeenSet; }

    /**
     * <p>Off-peak window settings for the domain.</p>
     */
    inline void SetOffPeakWindow(const OffPeakWindow& value) { m_offPeakWindowHasBeenSet = true; m_offPeakWindow = value; }

    /**
     * <p>Off-peak window settings for the domain.</p>
     */
    inline void SetOffPeakWindow(OffPeakWindow&& value) { m_offPeakWindowHasBeenSet = true; m_offPeakWindow = std::move(value); }

    /**
     * <p>Off-peak window settings for the domain.</p>
     */
    inline OffPeakWindowOptions& WithOffPeakWindow(const OffPeakWindow& value) { SetOffPeakWindow(value); return *this;}

    /**
     * <p>Off-peak window settings for the domain.</p>
     */
    inline OffPeakWindowOptions& WithOffPeakWindow(OffPeakWindow&& value) { SetOffPeakWindow(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    OffPeakWindow m_offPeakWindow;
    bool m_offPeakWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
