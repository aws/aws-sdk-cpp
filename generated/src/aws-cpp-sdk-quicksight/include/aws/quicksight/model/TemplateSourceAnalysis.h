/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DataSetReference.h>
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
   * <p>The source analysis of the template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TemplateSourceAnalysis">AWS
   * API Reference</a></p>
   */
  class TemplateSourceAnalysis
  {
  public:
    AWS_QUICKSIGHT_API TemplateSourceAnalysis() = default;
    AWS_QUICKSIGHT_API TemplateSourceAnalysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TemplateSourceAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    TemplateSourceAnalysis& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing information about the dataset references used as
     * placeholders in the template.</p>
     */
    inline const Aws::Vector<DataSetReference>& GetDataSetReferences() const { return m_dataSetReferences; }
    inline bool DataSetReferencesHasBeenSet() const { return m_dataSetReferencesHasBeenSet; }
    template<typename DataSetReferencesT = Aws::Vector<DataSetReference>>
    void SetDataSetReferences(DataSetReferencesT&& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences = std::forward<DataSetReferencesT>(value); }
    template<typename DataSetReferencesT = Aws::Vector<DataSetReference>>
    TemplateSourceAnalysis& WithDataSetReferences(DataSetReferencesT&& value) { SetDataSetReferences(std::forward<DataSetReferencesT>(value)); return *this;}
    template<typename DataSetReferencesT = DataSetReference>
    TemplateSourceAnalysis& AddDataSetReferences(DataSetReferencesT&& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences.emplace_back(std::forward<DataSetReferencesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<DataSetReference> m_dataSetReferences;
    bool m_dataSetReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
