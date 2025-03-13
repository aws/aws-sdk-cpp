/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AnalysisSourceTemplate.h>
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
   * <p>The source entity of an analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnalysisSourceEntity">AWS
   * API Reference</a></p>
   */
  class AnalysisSourceEntity
  {
  public:
    AWS_QUICKSIGHT_API AnalysisSourceEntity() = default;
    AWS_QUICKSIGHT_API AnalysisSourceEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnalysisSourceEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source template for the source entity of the analysis.</p>
     */
    inline const AnalysisSourceTemplate& GetSourceTemplate() const { return m_sourceTemplate; }
    inline bool SourceTemplateHasBeenSet() const { return m_sourceTemplateHasBeenSet; }
    template<typename SourceTemplateT = AnalysisSourceTemplate>
    void SetSourceTemplate(SourceTemplateT&& value) { m_sourceTemplateHasBeenSet = true; m_sourceTemplate = std::forward<SourceTemplateT>(value); }
    template<typename SourceTemplateT = AnalysisSourceTemplate>
    AnalysisSourceEntity& WithSourceTemplate(SourceTemplateT&& value) { SetSourceTemplate(std::forward<SourceTemplateT>(value)); return *this;}
    ///@}
  private:

    AnalysisSourceTemplate m_sourceTemplate;
    bool m_sourceTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
