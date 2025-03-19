/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Dashboard source template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardSourceTemplate">AWS
   * API Reference</a></p>
   */
  class DashboardSourceTemplate
  {
  public:
    AWS_QUICKSIGHT_API DashboardSourceTemplate() = default;
    AWS_QUICKSIGHT_API DashboardSourceTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardSourceTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dataset references.</p>
     */
    inline const Aws::Vector<DataSetReference>& GetDataSetReferences() const { return m_dataSetReferences; }
    inline bool DataSetReferencesHasBeenSet() const { return m_dataSetReferencesHasBeenSet; }
    template<typename DataSetReferencesT = Aws::Vector<DataSetReference>>
    void SetDataSetReferences(DataSetReferencesT&& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences = std::forward<DataSetReferencesT>(value); }
    template<typename DataSetReferencesT = Aws::Vector<DataSetReference>>
    DashboardSourceTemplate& WithDataSetReferences(DataSetReferencesT&& value) { SetDataSetReferences(std::forward<DataSetReferencesT>(value)); return *this;}
    template<typename DataSetReferencesT = DataSetReference>
    DashboardSourceTemplate& AddDataSetReferences(DataSetReferencesT&& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences.emplace_back(std::forward<DataSetReferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DashboardSourceTemplate& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataSetReference> m_dataSetReferences;
    bool m_dataSetReferencesHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
