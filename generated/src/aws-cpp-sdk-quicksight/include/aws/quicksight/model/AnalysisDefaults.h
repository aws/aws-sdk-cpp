/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DefaultNewSheetConfiguration.h>
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
   * <p>The configuration for default analysis settings.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnalysisDefaults">AWS
   * API Reference</a></p>
   */
  class AnalysisDefaults
  {
  public:
    AWS_QUICKSIGHT_API AnalysisDefaults() = default;
    AWS_QUICKSIGHT_API AnalysisDefaults(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnalysisDefaults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for default new sheet settings.</p>
     */
    inline const DefaultNewSheetConfiguration& GetDefaultNewSheetConfiguration() const { return m_defaultNewSheetConfiguration; }
    inline bool DefaultNewSheetConfigurationHasBeenSet() const { return m_defaultNewSheetConfigurationHasBeenSet; }
    template<typename DefaultNewSheetConfigurationT = DefaultNewSheetConfiguration>
    void SetDefaultNewSheetConfiguration(DefaultNewSheetConfigurationT&& value) { m_defaultNewSheetConfigurationHasBeenSet = true; m_defaultNewSheetConfiguration = std::forward<DefaultNewSheetConfigurationT>(value); }
    template<typename DefaultNewSheetConfigurationT = DefaultNewSheetConfiguration>
    AnalysisDefaults& WithDefaultNewSheetConfiguration(DefaultNewSheetConfigurationT&& value) { SetDefaultNewSheetConfiguration(std::forward<DefaultNewSheetConfigurationT>(value)); return *this;}
    ///@}
  private:

    DefaultNewSheetConfiguration m_defaultNewSheetConfiguration;
    bool m_defaultNewSheetConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
