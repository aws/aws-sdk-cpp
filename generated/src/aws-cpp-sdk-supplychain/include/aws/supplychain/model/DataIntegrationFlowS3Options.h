/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationFlowFileType.h>
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
   * <p>The Amazon S3 options used in S3 source and target
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowS3Options">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowS3Options
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowS3Options() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowS3Options(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowS3Options& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 file type in S3 options.</p>
     */
    inline DataIntegrationFlowFileType GetFileType() const { return m_fileType; }
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }
    inline void SetFileType(DataIntegrationFlowFileType value) { m_fileTypeHasBeenSet = true; m_fileType = value; }
    inline DataIntegrationFlowS3Options& WithFileType(DataIntegrationFlowFileType value) { SetFileType(value); return *this;}
    ///@}
  private:

    DataIntegrationFlowFileType m_fileType{DataIntegrationFlowFileType::NOT_SET};
    bool m_fileTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
