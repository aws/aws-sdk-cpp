﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FreeFormSectionLayoutConfiguration.h>
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
   * <p>The layout configuration of a section.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SectionLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class SectionLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SectionLayoutConfiguration() = default;
    AWS_QUICKSIGHT_API SectionLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The free-form layout configuration of a section.</p>
     */
    inline const FreeFormSectionLayoutConfiguration& GetFreeFormLayout() const { return m_freeFormLayout; }
    inline bool FreeFormLayoutHasBeenSet() const { return m_freeFormLayoutHasBeenSet; }
    template<typename FreeFormLayoutT = FreeFormSectionLayoutConfiguration>
    void SetFreeFormLayout(FreeFormLayoutT&& value) { m_freeFormLayoutHasBeenSet = true; m_freeFormLayout = std::forward<FreeFormLayoutT>(value); }
    template<typename FreeFormLayoutT = FreeFormSectionLayoutConfiguration>
    SectionLayoutConfiguration& WithFreeFormLayout(FreeFormLayoutT&& value) { SetFreeFormLayout(std::forward<FreeFormLayoutT>(value)); return *this;}
    ///@}
  private:

    FreeFormSectionLayoutConfiguration m_freeFormLayout;
    bool m_freeFormLayoutHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
