/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The usage configuration to apply to child datasets that reference this
   * dataset as a source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetUsageConfiguration">AWS
   * API Reference</a></p>
   */
  class DataSetUsageConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DataSetUsageConfiguration();
    AWS_QUICKSIGHT_API DataSetUsageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetUsageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An option that controls whether a child dataset of a direct query can use
     * this dataset as a source.</p>
     */
    inline bool GetDisableUseAsDirectQuerySource() const{ return m_disableUseAsDirectQuerySource; }

    /**
     * <p>An option that controls whether a child dataset of a direct query can use
     * this dataset as a source.</p>
     */
    inline bool DisableUseAsDirectQuerySourceHasBeenSet() const { return m_disableUseAsDirectQuerySourceHasBeenSet; }

    /**
     * <p>An option that controls whether a child dataset of a direct query can use
     * this dataset as a source.</p>
     */
    inline void SetDisableUseAsDirectQuerySource(bool value) { m_disableUseAsDirectQuerySourceHasBeenSet = true; m_disableUseAsDirectQuerySource = value; }

    /**
     * <p>An option that controls whether a child dataset of a direct query can use
     * this dataset as a source.</p>
     */
    inline DataSetUsageConfiguration& WithDisableUseAsDirectQuerySource(bool value) { SetDisableUseAsDirectQuerySource(value); return *this;}


    /**
     * <p>An option that controls whether a child dataset that's stored in QuickSight
     * can use this dataset as a source.</p>
     */
    inline bool GetDisableUseAsImportedSource() const{ return m_disableUseAsImportedSource; }

    /**
     * <p>An option that controls whether a child dataset that's stored in QuickSight
     * can use this dataset as a source.</p>
     */
    inline bool DisableUseAsImportedSourceHasBeenSet() const { return m_disableUseAsImportedSourceHasBeenSet; }

    /**
     * <p>An option that controls whether a child dataset that's stored in QuickSight
     * can use this dataset as a source.</p>
     */
    inline void SetDisableUseAsImportedSource(bool value) { m_disableUseAsImportedSourceHasBeenSet = true; m_disableUseAsImportedSource = value; }

    /**
     * <p>An option that controls whether a child dataset that's stored in QuickSight
     * can use this dataset as a source.</p>
     */
    inline DataSetUsageConfiguration& WithDisableUseAsImportedSource(bool value) { SetDisableUseAsImportedSource(value); return *this;}

  private:

    bool m_disableUseAsDirectQuerySource;
    bool m_disableUseAsDirectQuerySourceHasBeenSet = false;

    bool m_disableUseAsImportedSource;
    bool m_disableUseAsImportedSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
