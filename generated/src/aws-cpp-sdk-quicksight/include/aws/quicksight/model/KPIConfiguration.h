/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KPIFieldWells.h>
#include <aws/quicksight/model/KPISortConfiguration.h>
#include <aws/quicksight/model/KPIOptions.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration of a KPI visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIConfiguration">AWS
   * API Reference</a></p>
   */
  class KPIConfiguration
  {
  public:
    AWS_QUICKSIGHT_API KPIConfiguration();
    AWS_QUICKSIGHT_API KPIConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field well configuration of a KPI visual.</p>
     */
    inline const KPIFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field well configuration of a KPI visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field well configuration of a KPI visual.</p>
     */
    inline void SetFieldWells(const KPIFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field well configuration of a KPI visual.</p>
     */
    inline void SetFieldWells(KPIFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field well configuration of a KPI visual.</p>
     */
    inline KPIConfiguration& WithFieldWells(const KPIFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field well configuration of a KPI visual.</p>
     */
    inline KPIConfiguration& WithFieldWells(KPIFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of a KPI visual.</p>
     */
    inline const KPISortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration of a KPI visual.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration of a KPI visual.</p>
     */
    inline void SetSortConfiguration(const KPISortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration of a KPI visual.</p>
     */
    inline void SetSortConfiguration(KPISortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration of a KPI visual.</p>
     */
    inline KPIConfiguration& WithSortConfiguration(const KPISortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration of a KPI visual.</p>
     */
    inline KPIConfiguration& WithSortConfiguration(KPISortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of a KPI visual.</p>
     */
    inline const KPIOptions& GetKPIOptions() const{ return m_kPIOptions; }

    /**
     * <p>The options that determine the presentation of a KPI visual.</p>
     */
    inline bool KPIOptionsHasBeenSet() const { return m_kPIOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of a KPI visual.</p>
     */
    inline void SetKPIOptions(const KPIOptions& value) { m_kPIOptionsHasBeenSet = true; m_kPIOptions = value; }

    /**
     * <p>The options that determine the presentation of a KPI visual.</p>
     */
    inline void SetKPIOptions(KPIOptions&& value) { m_kPIOptionsHasBeenSet = true; m_kPIOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of a KPI visual.</p>
     */
    inline KPIConfiguration& WithKPIOptions(const KPIOptions& value) { SetKPIOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of a KPI visual.</p>
     */
    inline KPIConfiguration& WithKPIOptions(KPIOptions&& value) { SetKPIOptions(std::move(value)); return *this;}

  private:

    KPIFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    KPISortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    KPIOptions m_kPIOptions;
    bool m_kPIOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
