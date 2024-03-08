/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Information about the Amazon S3 Glue Data Catalog.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/S3GlueDataCatalog">AWS
   * API Reference</a></p>
   */
  class S3GlueDataCatalog
  {
  public:
    AWS_OPENSEARCHSERVICE_API S3GlueDataCatalog();
    AWS_OPENSEARCHSERVICE_API S3GlueDataCatalog(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API S3GlueDataCatalog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>&gt;The Amazon Resource Name (ARN) for the S3 Glue Data Catalog.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>&gt;The Amazon Resource Name (ARN) for the S3 Glue Data Catalog.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>&gt;The Amazon Resource Name (ARN) for the S3 Glue Data Catalog.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>&gt;The Amazon Resource Name (ARN) for the S3 Glue Data Catalog.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>&gt;The Amazon Resource Name (ARN) for the S3 Glue Data Catalog.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>&gt;The Amazon Resource Name (ARN) for the S3 Glue Data Catalog.</p>
     */
    inline S3GlueDataCatalog& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>&gt;The Amazon Resource Name (ARN) for the S3 Glue Data Catalog.</p>
     */
    inline S3GlueDataCatalog& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>&gt;The Amazon Resource Name (ARN) for the S3 Glue Data Catalog.</p>
     */
    inline S3GlueDataCatalog& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
