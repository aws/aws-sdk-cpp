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
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTransformation();
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTransformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DataIntegrationFlow transformation type.</p>
     */
    inline const DataIntegrationFlowTransformationType& GetTransformationType() const{ return m_transformationType; }
    inline bool TransformationTypeHasBeenSet() const { return m_transformationTypeHasBeenSet; }
    inline void SetTransformationType(const DataIntegrationFlowTransformationType& value) { m_transformationTypeHasBeenSet = true; m_transformationType = value; }
    inline void SetTransformationType(DataIntegrationFlowTransformationType&& value) { m_transformationTypeHasBeenSet = true; m_transformationType = std::move(value); }
    inline DataIntegrationFlowTransformation& WithTransformationType(const DataIntegrationFlowTransformationType& value) { SetTransformationType(value); return *this;}
    inline DataIntegrationFlowTransformation& WithTransformationType(DataIntegrationFlowTransformationType&& value) { SetTransformationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL DataIntegrationFlow transformation configuration.</p>
     */
    inline const DataIntegrationFlowSQLTransformationConfiguration& GetSqlTransformation() const{ return m_sqlTransformation; }
    inline bool SqlTransformationHasBeenSet() const { return m_sqlTransformationHasBeenSet; }
    inline void SetSqlTransformation(const DataIntegrationFlowSQLTransformationConfiguration& value) { m_sqlTransformationHasBeenSet = true; m_sqlTransformation = value; }
    inline void SetSqlTransformation(DataIntegrationFlowSQLTransformationConfiguration&& value) { m_sqlTransformationHasBeenSet = true; m_sqlTransformation = std::move(value); }
    inline DataIntegrationFlowTransformation& WithSqlTransformation(const DataIntegrationFlowSQLTransformationConfiguration& value) { SetSqlTransformation(value); return *this;}
    inline DataIntegrationFlowTransformation& WithSqlTransformation(DataIntegrationFlowSQLTransformationConfiguration&& value) { SetSqlTransformation(std::move(value)); return *this;}
    ///@}
  private:

    DataIntegrationFlowTransformationType m_transformationType;
    bool m_transformationTypeHasBeenSet = false;

    DataIntegrationFlowSQLTransformationConfiguration m_sqlTransformation;
    bool m_sqlTransformationHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
