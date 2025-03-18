/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TemplateSourceAnalysis.h>
#include <aws/quicksight/model/TemplateSourceTemplate.h>
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
   * <p>The source entity of the template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TemplateSourceEntity">AWS
   * API Reference</a></p>
   */
  class TemplateSourceEntity
  {
  public:
    AWS_QUICKSIGHT_API TemplateSourceEntity() = default;
    AWS_QUICKSIGHT_API TemplateSourceEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TemplateSourceEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source analysis, if it is based on an analysis.</p>
     */
    inline const TemplateSourceAnalysis& GetSourceAnalysis() const { return m_sourceAnalysis; }
    inline bool SourceAnalysisHasBeenSet() const { return m_sourceAnalysisHasBeenSet; }
    template<typename SourceAnalysisT = TemplateSourceAnalysis>
    void SetSourceAnalysis(SourceAnalysisT&& value) { m_sourceAnalysisHasBeenSet = true; m_sourceAnalysis = std::forward<SourceAnalysisT>(value); }
    template<typename SourceAnalysisT = TemplateSourceAnalysis>
    TemplateSourceEntity& WithSourceAnalysis(SourceAnalysisT&& value) { SetSourceAnalysis(std::forward<SourceAnalysisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source template, if it is based on an template.</p>
     */
    inline const TemplateSourceTemplate& GetSourceTemplate() const { return m_sourceTemplate; }
    inline bool SourceTemplateHasBeenSet() const { return m_sourceTemplateHasBeenSet; }
    template<typename SourceTemplateT = TemplateSourceTemplate>
    void SetSourceTemplate(SourceTemplateT&& value) { m_sourceTemplateHasBeenSet = true; m_sourceTemplate = std::forward<SourceTemplateT>(value); }
    template<typename SourceTemplateT = TemplateSourceTemplate>
    TemplateSourceEntity& WithSourceTemplate(SourceTemplateT&& value) { SetSourceTemplate(std::forward<SourceTemplateT>(value)); return *this;}
    ///@}
  private:

    TemplateSourceAnalysis m_sourceAnalysis;
    bool m_sourceAnalysisHasBeenSet = false;

    TemplateSourceTemplate m_sourceTemplate;
    bool m_sourceTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
