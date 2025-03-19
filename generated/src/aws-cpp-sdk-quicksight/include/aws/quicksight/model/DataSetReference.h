/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Dataset reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetReference">AWS
   * API Reference</a></p>
   */
  class DataSetReference
  {
  public:
    AWS_QUICKSIGHT_API DataSetReference() = default;
    AWS_QUICKSIGHT_API DataSetReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dataset placeholder.</p>
     */
    inline const Aws::String& GetDataSetPlaceholder() const { return m_dataSetPlaceholder; }
    inline bool DataSetPlaceholderHasBeenSet() const { return m_dataSetPlaceholderHasBeenSet; }
    template<typename DataSetPlaceholderT = Aws::String>
    void SetDataSetPlaceholder(DataSetPlaceholderT&& value) { m_dataSetPlaceholderHasBeenSet = true; m_dataSetPlaceholder = std::forward<DataSetPlaceholderT>(value); }
    template<typename DataSetPlaceholderT = Aws::String>
    DataSetReference& WithDataSetPlaceholder(DataSetPlaceholderT&& value) { SetDataSetPlaceholder(std::forward<DataSetPlaceholderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dataset Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDataSetArn() const { return m_dataSetArn; }
    inline bool DataSetArnHasBeenSet() const { return m_dataSetArnHasBeenSet; }
    template<typename DataSetArnT = Aws::String>
    void SetDataSetArn(DataSetArnT&& value) { m_dataSetArnHasBeenSet = true; m_dataSetArn = std::forward<DataSetArnT>(value); }
    template<typename DataSetArnT = Aws::String>
    DataSetReference& WithDataSetArn(DataSetArnT&& value) { SetDataSetArn(std::forward<DataSetArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSetPlaceholder;
    bool m_dataSetPlaceholderHasBeenSet = false;

    Aws::String m_dataSetArn;
    bool m_dataSetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
