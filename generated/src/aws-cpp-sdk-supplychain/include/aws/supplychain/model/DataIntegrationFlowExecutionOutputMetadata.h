/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The output metadata of the flow execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowExecutionOutputMetadata">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowExecutionOutputMetadata
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowExecutionOutputMetadata() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowExecutionOutputMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowExecutionOutputMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 URI under which all diagnostic files (such as deduped records if any)
     * are stored.</p>
     */
    inline const Aws::String& GetDiagnosticReportsRootS3URI() const { return m_diagnosticReportsRootS3URI; }
    inline bool DiagnosticReportsRootS3URIHasBeenSet() const { return m_diagnosticReportsRootS3URIHasBeenSet; }
    template<typename DiagnosticReportsRootS3URIT = Aws::String>
    void SetDiagnosticReportsRootS3URI(DiagnosticReportsRootS3URIT&& value) { m_diagnosticReportsRootS3URIHasBeenSet = true; m_diagnosticReportsRootS3URI = std::forward<DiagnosticReportsRootS3URIT>(value); }
    template<typename DiagnosticReportsRootS3URIT = Aws::String>
    DataIntegrationFlowExecutionOutputMetadata& WithDiagnosticReportsRootS3URI(DiagnosticReportsRootS3URIT&& value) { SetDiagnosticReportsRootS3URI(std::forward<DiagnosticReportsRootS3URIT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_diagnosticReportsRootS3URI;
    bool m_diagnosticReportsRootS3URIHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
