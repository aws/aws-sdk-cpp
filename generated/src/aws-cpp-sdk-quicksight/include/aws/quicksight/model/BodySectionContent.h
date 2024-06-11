﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SectionLayoutConfiguration.h>
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
   * <p>The configuration of content in a body section.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BodySectionContent">AWS
   * API Reference</a></p>
   */
  class BodySectionContent
  {
  public:
    AWS_QUICKSIGHT_API BodySectionContent();
    AWS_QUICKSIGHT_API BodySectionContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BodySectionContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The layout configuration of a body section.</p>
     */
    inline const SectionLayoutConfiguration& GetLayout() const{ return m_layout; }
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }
    inline void SetLayout(const SectionLayoutConfiguration& value) { m_layoutHasBeenSet = true; m_layout = value; }
    inline void SetLayout(SectionLayoutConfiguration&& value) { m_layoutHasBeenSet = true; m_layout = std::move(value); }
    inline BodySectionContent& WithLayout(const SectionLayoutConfiguration& value) { SetLayout(value); return *this;}
    inline BodySectionContent& WithLayout(SectionLayoutConfiguration&& value) { SetLayout(std::move(value)); return *this;}
    ///@}
  private:

    SectionLayoutConfiguration m_layout;
    bool m_layoutHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
