/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/S3DataConfig.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The input configuration of a batch inference job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/BatchInferenceJobInput">AWS
   * API Reference</a></p>
   */
  class BatchInferenceJobInput
  {
  public:
    AWS_PERSONALIZE_API BatchInferenceJobInput() = default;
    AWS_PERSONALIZE_API BatchInferenceJobInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API BatchInferenceJobInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI of the Amazon S3 location that contains your input data. The Amazon
     * S3 bucket must be in the same region as the API endpoint you are calling.</p>
     */
    inline const S3DataConfig& GetS3DataSource() const { return m_s3DataSource; }
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }
    template<typename S3DataSourceT = S3DataConfig>
    void SetS3DataSource(S3DataSourceT&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::forward<S3DataSourceT>(value); }
    template<typename S3DataSourceT = S3DataConfig>
    BatchInferenceJobInput& WithS3DataSource(S3DataSourceT&& value) { SetS3DataSource(std::forward<S3DataSourceT>(value)); return *this;}
    ///@}
  private:

    S3DataConfig m_s3DataSource;
    bool m_s3DataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
