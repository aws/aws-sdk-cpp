/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WidgetStatus.h>
#include <aws/quicksight/model/ReferenceLineDataConfiguration.h>
#include <aws/quicksight/model/ReferenceLineStyleConfiguration.h>
#include <aws/quicksight/model/ReferenceLineLabelConfiguration.h>
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
   * <p>The reference line visual display options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReferenceLine">AWS
   * API Reference</a></p>
   */
  class ReferenceLine
  {
  public:
    AWS_QUICKSIGHT_API ReferenceLine();
    AWS_QUICKSIGHT_API ReferenceLine(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLine& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the reference line. Choose one of the following options:</p>
     * <ul> <li> <p> <code>ENABLE</code> </p> </li> <li> <p> <code>DISABLE</code> </p>
     * </li> </ul>
     */
    inline const WidgetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the reference line. Choose one of the following options:</p>
     * <ul> <li> <p> <code>ENABLE</code> </p> </li> <li> <p> <code>DISABLE</code> </p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the reference line. Choose one of the following options:</p>
     * <ul> <li> <p> <code>ENABLE</code> </p> </li> <li> <p> <code>DISABLE</code> </p>
     * </li> </ul>
     */
    inline void SetStatus(const WidgetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the reference line. Choose one of the following options:</p>
     * <ul> <li> <p> <code>ENABLE</code> </p> </li> <li> <p> <code>DISABLE</code> </p>
     * </li> </ul>
     */
    inline void SetStatus(WidgetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the reference line. Choose one of the following options:</p>
     * <ul> <li> <p> <code>ENABLE</code> </p> </li> <li> <p> <code>DISABLE</code> </p>
     * </li> </ul>
     */
    inline ReferenceLine& WithStatus(const WidgetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the reference line. Choose one of the following options:</p>
     * <ul> <li> <p> <code>ENABLE</code> </p> </li> <li> <p> <code>DISABLE</code> </p>
     * </li> </ul>
     */
    inline ReferenceLine& WithStatus(WidgetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The data configuration of the reference line.</p>
     */
    inline const ReferenceLineDataConfiguration& GetDataConfiguration() const{ return m_dataConfiguration; }

    /**
     * <p>The data configuration of the reference line.</p>
     */
    inline bool DataConfigurationHasBeenSet() const { return m_dataConfigurationHasBeenSet; }

    /**
     * <p>The data configuration of the reference line.</p>
     */
    inline void SetDataConfiguration(const ReferenceLineDataConfiguration& value) { m_dataConfigurationHasBeenSet = true; m_dataConfiguration = value; }

    /**
     * <p>The data configuration of the reference line.</p>
     */
    inline void SetDataConfiguration(ReferenceLineDataConfiguration&& value) { m_dataConfigurationHasBeenSet = true; m_dataConfiguration = std::move(value); }

    /**
     * <p>The data configuration of the reference line.</p>
     */
    inline ReferenceLine& WithDataConfiguration(const ReferenceLineDataConfiguration& value) { SetDataConfiguration(value); return *this;}

    /**
     * <p>The data configuration of the reference line.</p>
     */
    inline ReferenceLine& WithDataConfiguration(ReferenceLineDataConfiguration&& value) { SetDataConfiguration(std::move(value)); return *this;}


    /**
     * <p>The style configuration of the reference line.</p>
     */
    inline const ReferenceLineStyleConfiguration& GetStyleConfiguration() const{ return m_styleConfiguration; }

    /**
     * <p>The style configuration of the reference line.</p>
     */
    inline bool StyleConfigurationHasBeenSet() const { return m_styleConfigurationHasBeenSet; }

    /**
     * <p>The style configuration of the reference line.</p>
     */
    inline void SetStyleConfiguration(const ReferenceLineStyleConfiguration& value) { m_styleConfigurationHasBeenSet = true; m_styleConfiguration = value; }

    /**
     * <p>The style configuration of the reference line.</p>
     */
    inline void SetStyleConfiguration(ReferenceLineStyleConfiguration&& value) { m_styleConfigurationHasBeenSet = true; m_styleConfiguration = std::move(value); }

    /**
     * <p>The style configuration of the reference line.</p>
     */
    inline ReferenceLine& WithStyleConfiguration(const ReferenceLineStyleConfiguration& value) { SetStyleConfiguration(value); return *this;}

    /**
     * <p>The style configuration of the reference line.</p>
     */
    inline ReferenceLine& WithStyleConfiguration(ReferenceLineStyleConfiguration&& value) { SetStyleConfiguration(std::move(value)); return *this;}


    /**
     * <p>The label configuration of the reference line.</p>
     */
    inline const ReferenceLineLabelConfiguration& GetLabelConfiguration() const{ return m_labelConfiguration; }

    /**
     * <p>The label configuration of the reference line.</p>
     */
    inline bool LabelConfigurationHasBeenSet() const { return m_labelConfigurationHasBeenSet; }

    /**
     * <p>The label configuration of the reference line.</p>
     */
    inline void SetLabelConfiguration(const ReferenceLineLabelConfiguration& value) { m_labelConfigurationHasBeenSet = true; m_labelConfiguration = value; }

    /**
     * <p>The label configuration of the reference line.</p>
     */
    inline void SetLabelConfiguration(ReferenceLineLabelConfiguration&& value) { m_labelConfigurationHasBeenSet = true; m_labelConfiguration = std::move(value); }

    /**
     * <p>The label configuration of the reference line.</p>
     */
    inline ReferenceLine& WithLabelConfiguration(const ReferenceLineLabelConfiguration& value) { SetLabelConfiguration(value); return *this;}

    /**
     * <p>The label configuration of the reference line.</p>
     */
    inline ReferenceLine& WithLabelConfiguration(ReferenceLineLabelConfiguration&& value) { SetLabelConfiguration(std::move(value)); return *this;}

  private:

    WidgetStatus m_status;
    bool m_statusHasBeenSet = false;

    ReferenceLineDataConfiguration m_dataConfiguration;
    bool m_dataConfigurationHasBeenSet = false;

    ReferenceLineStyleConfiguration m_styleConfiguration;
    bool m_styleConfigurationHasBeenSet = false;

    ReferenceLineLabelConfiguration m_labelConfiguration;
    bool m_labelConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
