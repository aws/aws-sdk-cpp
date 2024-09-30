/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationFlowS3Options.h>
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
   * <p>The S3 DataIntegrationFlow source configuration parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowS3SourceConfiguration">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowS3SourceConfiguration
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowS3SourceConfiguration();
    AWS_SUPPLYCHAIN_API DataIntegrationFlowS3SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowS3SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bucketName of the S3 source objects.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline DataIntegrationFlowS3SourceConfiguration& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline DataIntegrationFlowS3SourceConfiguration& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline DataIntegrationFlowS3SourceConfiguration& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the S3 source objects.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline DataIntegrationFlowS3SourceConfiguration& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline DataIntegrationFlowS3SourceConfiguration& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline DataIntegrationFlowS3SourceConfiguration& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The other options of the S3 DataIntegrationFlow source.</p>
     */
    inline const DataIntegrationFlowS3Options& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const DataIntegrationFlowS3Options& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(DataIntegrationFlowS3Options&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline DataIntegrationFlowS3SourceConfiguration& WithOptions(const DataIntegrationFlowS3Options& value) { SetOptions(value); return *this;}
    inline DataIntegrationFlowS3SourceConfiguration& WithOptions(DataIntegrationFlowS3Options&& value) { SetOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    DataIntegrationFlowS3Options m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
