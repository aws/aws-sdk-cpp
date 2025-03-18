/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationFlowTransformationType.h>
#include <aws/supplychain/model/DataIntegrationFlowSQLTransformationConfiguration.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The DataIntegrationFlow transformation parameters.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowTransformation">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowTransformation
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTransformation() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTransformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DataIntegrationFlow transformation type.</p>
     */
    inline DataIntegrationFlowTransformationType GetTransformationType() const { return m_transformationType; }
    inline bool TransformationTypeHasBeenSet() const { return m_transformationTypeHasBeenSet; }
    inline void SetTransformationType(DataIntegrationFlowTransformationType value) { m_transformationTypeHasBeenSet = true; m_transformationType = value; }
    inline DataIntegrationFlowTransformation& WithTransformationType(DataIntegrationFlowTransformationType value) { SetTransformationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL DataIntegrationFlow transformation configuration.</p>
     */
    inline const DataIntegrationFlowSQLTransformationConfiguration& GetSqlTransformation() const { return m_sqlTransformation; }
    inline bool SqlTransformationHasBeenSet() const { return m_sqlTransformationHasBeenSet; }
    template<typename SqlTransformationT = DataIntegrationFlowSQLTransformationConfiguration>
    void SetSqlTransformation(SqlTransformationT&& value) { m_sqlTransformationHasBeenSet = true; m_sqlTransformation = std::forward<SqlTransformationT>(value); }
    template<typename SqlTransformationT = DataIntegrationFlowSQLTransformationConfiguration>
    DataIntegrationFlowTransformation& WithSqlTransformation(SqlTransformationT&& value) { SetSqlTransformation(std::forward<SqlTransformationT>(value)); return *this;}
    ///@}
  private:

    DataIntegrationFlowTransformationType m_transformationType{DataIntegrationFlowTransformationType::NOT_SET};
    bool m_transformationTypeHasBeenSet = false;

    DataIntegrationFlowSQLTransformationConfiguration m_sqlTransformation;
    bool m_sqlTransformationHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
