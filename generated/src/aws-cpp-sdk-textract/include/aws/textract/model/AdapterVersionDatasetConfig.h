/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/S3Object.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>The dataset configuration options for a given version of an adapter. Can
   * include an Amazon S3 bucket if specified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AdapterVersionDatasetConfig">AWS
   * API Reference</a></p>
   */
  class AdapterVersionDatasetConfig
  {
  public:
    AWS_TEXTRACT_API AdapterVersionDatasetConfig();
    AWS_TEXTRACT_API AdapterVersionDatasetConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API AdapterVersionDatasetConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const S3Object& GetManifestS3Object() const{ return m_manifestS3Object; }

    
    inline bool ManifestS3ObjectHasBeenSet() const { return m_manifestS3ObjectHasBeenSet; }

    
    inline void SetManifestS3Object(const S3Object& value) { m_manifestS3ObjectHasBeenSet = true; m_manifestS3Object = value; }

    
    inline void SetManifestS3Object(S3Object&& value) { m_manifestS3ObjectHasBeenSet = true; m_manifestS3Object = std::move(value); }

    
    inline AdapterVersionDatasetConfig& WithManifestS3Object(const S3Object& value) { SetManifestS3Object(value); return *this;}

    
    inline AdapterVersionDatasetConfig& WithManifestS3Object(S3Object&& value) { SetManifestS3Object(std::move(value)); return *this;}

  private:

    S3Object m_manifestS3Object;
    bool m_manifestS3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
