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
   * <p>The input configuration of a batch segment job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/BatchSegmentJobInput">AWS
   * API Reference</a></p>
   */
  class BatchSegmentJobInput
  {
  public:
    AWS_PERSONALIZE_API BatchSegmentJobInput();
    AWS_PERSONALIZE_API BatchSegmentJobInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API BatchSegmentJobInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const S3DataConfig& GetS3DataSource() const{ return m_s3DataSource; }

    
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }

    
    inline void SetS3DataSource(const S3DataConfig& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = value; }

    
    inline void SetS3DataSource(S3DataConfig&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::move(value); }

    
    inline BatchSegmentJobInput& WithS3DataSource(const S3DataConfig& value) { SetS3DataSource(value); return *this;}

    
    inline BatchSegmentJobInput& WithS3DataSource(S3DataConfig&& value) { SetS3DataSource(std::move(value)); return *this;}

  private:

    S3DataConfig m_s3DataSource;
    bool m_s3DataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
