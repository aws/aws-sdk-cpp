/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/AutoTrainingConfig.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The configuration details of the solution update.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/SolutionUpdateConfig">AWS
   * API Reference</a></p>
   */
  class SolutionUpdateConfig
  {
  public:
    AWS_PERSONALIZE_API SolutionUpdateConfig();
    AWS_PERSONALIZE_API SolutionUpdateConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API SolutionUpdateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AutoTrainingConfig& GetAutoTrainingConfig() const{ return m_autoTrainingConfig; }
    inline bool AutoTrainingConfigHasBeenSet() const { return m_autoTrainingConfigHasBeenSet; }
    inline void SetAutoTrainingConfig(const AutoTrainingConfig& value) { m_autoTrainingConfigHasBeenSet = true; m_autoTrainingConfig = value; }
    inline void SetAutoTrainingConfig(AutoTrainingConfig&& value) { m_autoTrainingConfigHasBeenSet = true; m_autoTrainingConfig = std::move(value); }
    inline SolutionUpdateConfig& WithAutoTrainingConfig(const AutoTrainingConfig& value) { SetAutoTrainingConfig(value); return *this;}
    inline SolutionUpdateConfig& WithAutoTrainingConfig(AutoTrainingConfig&& value) { SetAutoTrainingConfig(std::move(value)); return *this;}
    ///@}
  private:

    AutoTrainingConfig m_autoTrainingConfig;
    bool m_autoTrainingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
