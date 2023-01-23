/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p> The Terraform s3 state file you need to import. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/TerraformSource">AWS
   * API Reference</a></p>
   */
  class TerraformSource
  {
  public:
    AWS_RESILIENCEHUB_API TerraformSource();
    AWS_RESILIENCEHUB_API TerraformSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API TerraformSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Terraform s3 state file you need to import. </p>
     */
    inline const Aws::String& GetS3StateFileUrl() const{ return m_s3StateFileUrl; }

    /**
     * <p> The Terraform s3 state file you need to import. </p>
     */
    inline bool S3StateFileUrlHasBeenSet() const { return m_s3StateFileUrlHasBeenSet; }

    /**
     * <p> The Terraform s3 state file you need to import. </p>
     */
    inline void SetS3StateFileUrl(const Aws::String& value) { m_s3StateFileUrlHasBeenSet = true; m_s3StateFileUrl = value; }

    /**
     * <p> The Terraform s3 state file you need to import. </p>
     */
    inline void SetS3StateFileUrl(Aws::String&& value) { m_s3StateFileUrlHasBeenSet = true; m_s3StateFileUrl = std::move(value); }

    /**
     * <p> The Terraform s3 state file you need to import. </p>
     */
    inline void SetS3StateFileUrl(const char* value) { m_s3StateFileUrlHasBeenSet = true; m_s3StateFileUrl.assign(value); }

    /**
     * <p> The Terraform s3 state file you need to import. </p>
     */
    inline TerraformSource& WithS3StateFileUrl(const Aws::String& value) { SetS3StateFileUrl(value); return *this;}

    /**
     * <p> The Terraform s3 state file you need to import. </p>
     */
    inline TerraformSource& WithS3StateFileUrl(Aws::String&& value) { SetS3StateFileUrl(std::move(value)); return *this;}

    /**
     * <p> The Terraform s3 state file you need to import. </p>
     */
    inline TerraformSource& WithS3StateFileUrl(const char* value) { SetS3StateFileUrl(value); return *this;}

  private:

    Aws::String m_s3StateFileUrl;
    bool m_s3StateFileUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
