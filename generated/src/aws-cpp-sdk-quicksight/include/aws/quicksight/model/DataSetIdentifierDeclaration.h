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
   * <p>A data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetIdentifierDeclaration">AWS
   * API Reference</a></p>
   */
  class DataSetIdentifierDeclaration
  {
  public:
    AWS_QUICKSIGHT_API DataSetIdentifierDeclaration() = default;
    AWS_QUICKSIGHT_API DataSetIdentifierDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetIdentifierDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the data set, typically the data set's name.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    DataSetIdentifierDeclaration& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data set.</p>
     */
    inline const Aws::String& GetDataSetArn() const { return m_dataSetArn; }
    inline bool DataSetArnHasBeenSet() const { return m_dataSetArnHasBeenSet; }
    template<typename DataSetArnT = Aws::String>
    void SetDataSetArn(DataSetArnT&& value) { m_dataSetArnHasBeenSet = true; m_dataSetArn = std::forward<DataSetArnT>(value); }
    template<typename DataSetArnT = Aws::String>
    DataSetIdentifierDeclaration& WithDataSetArn(DataSetArnT&& value) { SetDataSetArn(std::forward<DataSetArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_dataSetArn;
    bool m_dataSetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
