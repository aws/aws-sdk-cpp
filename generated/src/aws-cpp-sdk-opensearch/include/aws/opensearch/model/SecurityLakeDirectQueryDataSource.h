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
   * <p> Configuration details for a Security Lake data source that can be used for
   * direct queries. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/SecurityLakeDirectQueryDataSource">AWS
   * API Reference</a></p>
   */
  class SecurityLakeDirectQueryDataSource
  {
  public:
    AWS_OPENSEARCHSERVICE_API SecurityLakeDirectQueryDataSource();
    AWS_OPENSEARCHSERVICE_API SecurityLakeDirectQueryDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API SecurityLakeDirectQueryDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the IAM role that grants OpenSearch Service
     * permission to access the specified data source. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline SecurityLakeDirectQueryDataSource& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline SecurityLakeDirectQueryDataSource& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline SecurityLakeDirectQueryDataSource& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
