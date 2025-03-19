/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardSourceTemplate.h>
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
   * <p>Dashboard source entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardSourceEntity">AWS
   * API Reference</a></p>
   */
  class DashboardSourceEntity
  {
  public:
    AWS_QUICKSIGHT_API DashboardSourceEntity() = default;
    AWS_QUICKSIGHT_API DashboardSourceEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardSourceEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Source template.</p>
     */
    inline const DashboardSourceTemplate& GetSourceTemplate() const { return m_sourceTemplate; }
    inline bool SourceTemplateHasBeenSet() const { return m_sourceTemplateHasBeenSet; }
    template<typename SourceTemplateT = DashboardSourceTemplate>
    void SetSourceTemplate(SourceTemplateT&& value) { m_sourceTemplateHasBeenSet = true; m_sourceTemplate = std::forward<SourceTemplateT>(value); }
    template<typename SourceTemplateT = DashboardSourceTemplate>
    DashboardSourceEntity& WithSourceTemplate(SourceTemplateT&& value) { SetSourceTemplate(std::forward<SourceTemplateT>(value)); return *this;}
    ///@}
  private:

    DashboardSourceTemplate m_sourceTemplate;
    bool m_sourceTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
